function y = ex5_rem_neigh_vectorization(x)
    [nr nc] = size(x);
    if min(nr, nc) ~= 1
        error('Input must be a vector');
    end
    n = max(nr, nc);
    z = x(:)';
    a(2:n) = z(1:n-1);
    b = (a ~= z);
    b(1) = 1;
    y = x(b);
end
