function [output1] = dJb_LeftHip(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJb_LeftHip_mex(var1,var2);
    else
        coder.cinclude('dJb_LeftHip_src.h');
        
        output1 = zeros(6, 7);

        
        coder.ceval('dJb_LeftHip_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
