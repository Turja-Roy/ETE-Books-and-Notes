pkg load symbolic

syms e1(t) e2(t) i1(t) i2(t) s
eqn1 = diff(e1, t) == 1; 
eqn2 = diff(i1, t) == (e1 - e2)/1; 
eqn3 = diff(e2, t) == i2; 
eqn4 = diff(i2, t) == (e2 - i1)/0.5;

cond1 = e1(0) == 0;
cond2 = i1(0) == 0;
cond3 = e2(0) == 0;
cond4 = i2(0) == 0;

[sol_e1, sol_i1, sol_e2, sol_i2] = dsolve([eqn1, eqn2, eqn3, eqn4], [cond1, cond2, cond3, cond4]);

sol_e1_simplified = vpa(simplify(sol_e1));
sol_i1_simplified = vpa(simplify(sol_i1));
sol_e2_simplified = vpa(simplify(sol_e2));
sol_i2_simplified = vpa(simplify(sol_i2));

disp('Solution for e1(t):')
pretty(sol_e1_simplified)

disp('Solution for i1(t):')
pretty(sol_i1_simplified)

disp('Solution for e2(t):')
pretty(sol_e2_simplified)

disp('Solution for i2(t):')
pretty(sol_i2_simplified)

% Plotting the results
fplot([sol_e1_simplified, sol_i1_simplified, sol_e2_simplified, sol_i2_simplified], [0, 10])
legend('e1(t)', 'i1(t)', 'e2(t)', 'i2(t)')
