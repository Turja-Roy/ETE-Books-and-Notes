x = [2 1 2 1];
y = [1 2 3];
clin = conv(x,y);

subplot(3,1,1);
stem(x, 'filled');
ylim([0 11]);
title('x');

subplot(3,1,2);
stem(y, 'filled');
ylim([0 11]);
title('y');

subplot(3,1,3);
stem(clin, 'filled');
ylim([0 11]);
title('Convolution of x and y');
