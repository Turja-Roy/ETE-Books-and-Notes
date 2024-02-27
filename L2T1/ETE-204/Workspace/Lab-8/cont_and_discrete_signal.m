x = linspace(0, 2*pi, 25);

y = sin(x);
subplot(2, 1, 1);
plot(x, y, 'r');
title('Continuous');
subplot(2, 1, 2);
stem(x, y, 'b');
title('Discrete');
