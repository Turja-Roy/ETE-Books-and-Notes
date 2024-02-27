n1 = input('Enter the lower limit: ');
n2 = input('Enter the upper limit: ');

n = n1:n2;
x = [n>=0];
stem(n,x);
title('Unit Step Signal - Discrete');
