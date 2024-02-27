n1=input('Enter lower limit: ');
n2=input('Enter upper limit: ');

t= n1:n2;
a=input('Enter the value for a: ');
y=exp(a*t);

subplot(2,1,1);
plot(t,y,'r');
title('Continuous');

subplot(2,1,2);
stem(t,y,'b');
title('Discrete');
