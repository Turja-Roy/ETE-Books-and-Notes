function y = ex6_interleave_vectorization(a, b)
    na = length(a);
    nb = length(b);
    n = min(na, nb);

    y(1:2:2*n-1) = a(1:n);
    y(2:2:2*n) = b(1:n);

    y = [y a(n+1:na) b(n+1:nb)];
end
