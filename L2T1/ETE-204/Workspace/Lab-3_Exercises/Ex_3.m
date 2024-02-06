res_matrix = [[66 54 68 77 70 76 70 69 74]' [6 6 4 4 4 4 4 4 12]' [1 1 2 2 2 3 3 3 4]'];

gwam = sum(res_matrix(:, 1) .* res_matrix(:, 2) .* res_matrix(:, 3)) / sum(res_matrix(:, 2) .* res_matrix(:, 3));

disp(gwam)
