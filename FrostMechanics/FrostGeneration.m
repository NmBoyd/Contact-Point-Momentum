%% Generate Folders and Add Path
addpath(genpath(pwd));
rootdir = pwd;
TEMPLATE_PATH = [rootdir '\res\'];
PATH_dyn = [rootdir '\dyn\'];
PATH_kin = [rootdir '\kin\'];
if exist(PATH_kin,'dir')~=7
    mkdir(PATH_kin);
end
if exist(PATH_dyn,'dir')~=7
    mkdir(PATH_dyn);
end

FROST_PATH = 'D:\Graduate\robots\SomePackage\frost-dev';
addpath(FROST_PATH)
frost_addpath;

%% Create 5 link odel

FLW = FLW_GenModel('five_link_walker.urdf')

X = SymVariable('x',[7,1]);
dX = SymVariable('dx',[7,1]);
%% Generate Kinematics functions

GenKinForFrame( FLW.Joints(4), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Joints(5), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Joints(6), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Joints(7), '', PATH_kin,TEMPLATE_PATH,X,dX)

GenKinForFrame( FLW.Links(1), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Links(2), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Links(3), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Links(4), '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.Links(5), '', PATH_kin,TEMPLATE_PATH,X,dX)


GenKinForFrame( FLW.ContactPoints.Head, '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.ContactPoints.LeftToe, '', PATH_kin,TEMPLATE_PATH,X,dX)
GenKinForFrame( FLW.ContactPoints.RightToe, '', PATH_kin,TEMPLATE_PATH,X,dX)

GetAngularMomentum_terms(FLW,PATH_kin,TEMPLATE_PATH,X,dX)
% for i = 1:length(FLW.Links)
%     Jb = FLW.Links(i).computeBodyJacobian(length(X));
%     % Homogeneous Transformation
%     T = FLW.Links(i).computeForwardKinematics;
%     twist_body = Jb*dX;
%     AM_body = FLW.Links(i).Inertia*twist(4:6);
%     AM_world = T(1:3,1:3)*AM_body;
%     export_simulation(dR,['dR_' func_name],EXPO_PATH, {X,dX}, TEMPLATE_PATH);
% end
GetAngularMomentum_terms(FLW,PATH_kin,TEMPLATE_PATH,X,dX)
%% COM
p_COM= FLW.getComPosition()';
Jp_COM = jacobian(p_COM,X);
dJp_COM = MatrixTimeDerivative(Jp_COM,X,dX);

export_simulation(p_COM,'p_COM',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(Jp_COM,'Jp_COM',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_COM,'dJp_COM',PATH_kin, {X,dX}, TEMPLATE_PATH);
%% Generate Dynamics
FLW.configureDynamics();

M = FLW.Mmat;
F = FLW.getDriftVector; % F is coriolis + gravity
G = -FLW.Fvec{end}; % G is gravity
M = SymExpression(M);
G = SymExpression(G);
C = -(F + G); % C is C*dq

export_simulation(M,'InertiaMatrix',PATH_dyn, X, TEMPLATE_PATH);
export_simulation(G,'GravityVector',PATH_dyn, X, TEMPLATE_PATH);
export_simulation(C,'CoriolisTerm',PATH_dyn, {X,dX}, TEMPLATE_PATH);