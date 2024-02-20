pkg load symbolic

syms x(t) e(t) v(t) Q(t) eqQ q

% C1 = 1/100; C2 = 1/200;
% L = 1/2; R = 10;

DE1 = e == 0.5 * diff(Q, 2) + 200 * Q;
DE2 = v == 0.5 * diff(Q, 2) + 100 * Q;

eqQ = 0.5 * diff(Q, 2) + 200 * Q - 5;

% ode_sys = [e;v];
% eqQ = dsolve(ode_sys, e(0)==5);

q = laplace(eqQ);
Q = ilaplace(Q);
I = diff(Q);

E = 100*Q;

pretty(E)

plot(E, [0, 10])
