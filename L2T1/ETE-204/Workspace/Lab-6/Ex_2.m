pkg load symbolic

syms x y

S = solve(x^2 + 10*x*y + 4*y^2 == 15, 2*x - y == -1);

S1 = [S{1}.x S{1}.y];
S2 = [S{2}.x S{2}.y];
% S{1}.x
% S{1}.y
%
% S{2}.x
% S{2}.y
S1
S2
