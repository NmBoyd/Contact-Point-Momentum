function [output1] = dJs_RightToe(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJs_RightToe_mex(var1,var2);
    else
        coder.cinclude('dJs_RightToe_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJs_RightToe_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
