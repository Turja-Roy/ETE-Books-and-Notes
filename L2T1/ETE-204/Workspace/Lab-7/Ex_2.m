L = 1/2; 
C1 = 1/100; 
C2 = 1/200; 
R = 10; 
 
syms i(t) v1(t) v2(t); 
Di = diff(i, t); 
Dv1 = diff(v1, t); 
Dv2 = diff(v2, t); 
 
equation1 = Di + v2/L == 0 
equation2 = Dv1 - i/C1 == 0 
equation3 = Dv2 - i/C2 == 0 
 
condition1 = i(0) == 0; 
condition2 = v1(0) == 5; 
condition3 = v2(0) == 0; 
 
sol = dsolve([equation1, equation2, equation3], [condition1, condition2, condition3]); 
 
disp('The solution for current i(t) is:'); 
disp(sol.i); 
disp('The solution for voltage v1(t) is:'); 
disp(sol.v1); 
disp('The solution for voltage v2(t) is:'); 
disp(sol.v2);
