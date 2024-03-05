pkg load symbolic;

syms x y;

f = exp(-x^2);
fourier(f, x, y)

syms x t y
f = exp(-x^2)*exp(-t^2);
fourier(f, y)

syms t w
fourier(t^3, t, w)

syms t0
fourier(heaviside(t-t0), t, w)

assume(x, 'real')
f = exp(-x^2*abs(t)) * sin(t)/t;
fourier(f, t, w)
