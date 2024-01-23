function c = cheb_recursive(n)
	if n == 0
		c = 0;
	elseif n == 1
		c = [1 0];
	else
        c = [2*cheb_recursive(n-1) 0] - [0 0 cheb_recursive(n-2)];
    end
end
