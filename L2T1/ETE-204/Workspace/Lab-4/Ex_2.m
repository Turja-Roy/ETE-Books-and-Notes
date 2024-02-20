f = @(x, y) sin(x) .* cos(y);
[x, y] = meshgrid(linspace(-2*pi, 2*pi, 100), linspace(-2*pi, 2*pi, 100));
z = f(x, y);

surf(x, y, z);
