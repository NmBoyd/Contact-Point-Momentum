function coeff_sym = get_Lc_coeff(L)
%GET_LC_COEFF
%    COEFF_SYM = GET_LC_COEFF(L)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    03-Mar-2021 19:21:44

t2 = L.^2;
coeff_sym = [L.*1.736895419816869-t2.*9.154549157448471e-1-7.120366442575179e2;L.*1.211408282006692e1+t2.*4.886534269221514e-1+4.304726079041093e2;L.*(-4.028639134353969)-t2.*6.11558205732615e-2-6.003835059374453e1;L.*2.406973444071659e-1+t2.*5.329874384990109e-4+9.103119181011174e-1];
