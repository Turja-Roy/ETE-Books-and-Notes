function y = ex4_interleave(a, b)
    if length(a) == 0
        y = b;
    elseif length(b) == 0
        y = a;
    else
        y = [a(1) b(1) ex4_interleave(a(2:end), b(2:end))];
    end
end
