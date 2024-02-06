function K = elliptic_integral(k2)
    K = zeros(size(k2));

    a0 = ones(size(k2));
    b0 = sqrt(1 - k2);

    while abs(a0 - b0) < eps
        an = (a0 + b0) ./ 2;
        bn = sqrt(a0 .* b0);

        a0 = an;
        b0 = bn;
    end

    K = pi ./ ( 2 .* a0 );
end
