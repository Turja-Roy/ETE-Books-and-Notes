n1 = input('Lower limit: ');
n2 = input('Upper limit: ');

x = n1:n2;
y = [x==0];
stem(x, y);
