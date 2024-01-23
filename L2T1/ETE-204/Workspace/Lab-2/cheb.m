function c = cheb(n)
    t0 = 1;
    t1 = [1 0];
	if n == 0
		c = t0;
	elseif n == 1
		c = t1;
	else
        for i = 2:n
            c = [2*t1 0] - [0 0 t0];
            t0 = t1;
            t1 = c;
        end
    end
end
