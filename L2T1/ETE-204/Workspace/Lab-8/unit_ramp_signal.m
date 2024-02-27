n1 = input('Enter lower limit: ');
n2 = input('Enter upper limit: ');

n = n1:n2;
x = n.*[n>=0];

subplot(2,1,1);
plot(n, x, 'r');
title('Continuous');

subplot(2,1,2);
stem(n, x, 'b');
title('Discrete');


% Shortcut method
n = input('Enter the upper limit: ');
t = 0:n;
subplot(2,1,1);
plot(t,t);
title('Continuous');

subplot(2,1,2);
stem(t,t);
title('Discrete');
