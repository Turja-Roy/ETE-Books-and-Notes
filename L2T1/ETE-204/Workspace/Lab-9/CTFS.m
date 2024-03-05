pkg load signal;

Ts = 0.001;
t = [-10:Ts:9.999];

tau = 0.5;
Tp = 1;
tau = 0.5;
x = (1 + square(2*pi*t/Tp, tau*100))/2;

figure, plot(t, x);
xlabel('t (sec)');
ylim([-1.2 1.2]);
pause;

Fo = 1/Tp;
I_period = find(round(t*1000)/1000 == -Tp/2) : find(round(t*1000)/1000 == Tp/2);
xport = x(I_period);

figure, plot(t(I_period), xport);
xlabel('t (sec)');
ylim([-1.2 1.2]);
pause;

for k = 1:20
    B = exp( -j*2*pi*(k-1)*Fo.*[-Tp/2:Ts:Tp/2] );
    C(k) = sum(xport.*B)/(length(xport)*Tp);
end

kFo = Fo*[0:k-1];
figure, stem(kFo, abs(C));
title('CTFT Coefficients');
xlabel('Hz');
