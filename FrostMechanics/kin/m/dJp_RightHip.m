function [output1] = dJp_RightHip(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJp_RightHip_mex(var1,var2);
    else
        coder.cinclude('dJp_RightHip_src.h');
        
        output1 = zeros(3, 7);

        
        coder.ceval('dJp_RightHip_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
