function [output1] = Jq_AMBody_RightThigh(var1,var2)
    if coder.target('MATLAB')
        [output1] = Jq_AMBody_RightThigh_mex(var1,var2);
    else
        coder.cinclude('Jq_AMBody_RightThigh_src.h');
        
        output1 = zeros(3, 7);

        
        coder.ceval('Jq_AMBody_RightThigh_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
