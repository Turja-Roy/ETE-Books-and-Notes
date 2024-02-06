disp('T4.5-3')
A = - 6 + cumsum(ones(4,3)*6, 1) + cumsum(ones(4,3)*4, 2);
disp(A)

disp('T4.6-2')
k=1;
x = 50 - k^2;
while k<=10 & x>0
    y = sqrt(x)
    k = k+1;
    x = 50 - k^2;
end

disp('T4.7-1')
angle = input("Enter the angle: ");
switch true
    case angle>=0 && angle<=90
        disp('1')
    case angle<0 && angle>=-90
        disp('4')
    case angle>90 && angle<=180
        disp('2')
    case angle<-90 && angle>=-180
        disp('3')
end
