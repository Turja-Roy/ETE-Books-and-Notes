function rms_value = rms(sig)
    if (iscell(sig) == 1)
        for i = 1:length(sig)
            rms_value(i,1) = sqrt(mean(sig{i}.^2));
        end
    else
        rms_value = sqrt(mean(sig.^2));
    end
end
