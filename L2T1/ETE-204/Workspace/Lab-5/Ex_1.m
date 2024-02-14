pkg load symbolic;

syms a b c t x y k m real

disp('Differentiation');
f = exp(-a*t) * sin(b*t + c);
diff(f)

disp('Limits');
y = 5 / (x-2);
limit(y, x, -2)
limit(y, x, 0)

disp('Integration');
z = 1 / (1 + tan(x));
int(z, x, 0, pi/2)

disp('Summation');
m = 1 / ((-1)^(k-1) * k^2);
S = symsum(m, k, 1, 20);
sym2poly(S)
% sprintf('%.4f', S)
