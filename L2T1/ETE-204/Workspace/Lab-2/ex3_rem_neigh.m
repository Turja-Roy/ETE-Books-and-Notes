function y = ex3_rem_neigh(x)
    len = length(x);
    y = []
    if len == 0
        return
    end
    if len == 1
        y = x;
        return
    end
    y = [y, x(1)];
    for i = 2:len
        if x(i-1) ~= x(i)
            y = [y, x(i)];
        else
            i = i+1;
        end
    end
end
