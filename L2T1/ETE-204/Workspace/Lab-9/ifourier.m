pkg load symbolic;

syms a w t real;

F = exp(-w^2/(4*a^2));
ifourier(F, t)

syms t w
ifourier(dirac(w), w, t)

ifourier(2*exp(-abs(w)) - 1, w, t)

ifourier(1/(w^2 + 1), w, t)
