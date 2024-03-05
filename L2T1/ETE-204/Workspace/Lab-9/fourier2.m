pkg load symbolic;

syms x w;

cauchy = 1/(pi*(1+x^2));
fcauchy = fourier(cauchy)

fcauchy = expand(fcauchy)
fcauchy = exp(-w)*heaviside(w) + exp(w)*heaviside(-w)

ezplot(fcauchy)
