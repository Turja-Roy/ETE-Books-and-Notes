pkg load symbolic

syms Z I E

I = 10;
R = 1e3;
L = 20e-3;
C = 1e-6;
w = linspace(100, 20000, 1000);

Z = R + (j.*w.*L) + (1./(j.*w.*C));

E = I.*Z;

plot(w, abs(E))
hold on
plot(w, imag(E))
% ezplot(E, w, [100, 20000])
