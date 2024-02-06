function coeff = Ex_4(n, x)
    if n == 0
        coeff = 1;
    elseif n == 1
        coeff = x;
    else
        P_prev = 1;
        P_curr = x;

        for k = 2:n
            P_next = (2*k-1)/k * x * P_curr - (k-1)/k * P_prev;
            P_prev = P_curr;
            P_curr = P_next;
        end

        coeff = P_curr;
    end
end
