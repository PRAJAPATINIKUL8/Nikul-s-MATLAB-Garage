clc
clear
close all

% ---------------------------------------
% Mini Project by NIKUL
% Energy estimation of motor (Numerical Integration)
% ---------------------------------------

% time data (seconds)
t = 0:1:10;

% power data (kW) - example motor profile
P = [0 5 9 15 20 18 16 12 8 4 0];

h = 1;   % step size

% -----------------------------
% Rectangular method
% -----------------------------
E_rect = 0;
for i = 1:length(P)-1
    E_rect = E_rect + P(i)*h;
end

% -----------------------------
% Trapezoidal method
% -----------------------------
E_trap = 0;
for i = 1:length(P)-1
    E_trap = E_trap + (P(i) + P(i+1))*h/2;
end

% -----------------------------
% MATLAB built-in (just to check)
% -----------------------------
E_mat = trapz(t,P);

% -----------------------------
% print results
% -----------------------------
disp(['Rectangular Energy = ', num2str(E_rect), ' kJ'])
disp(['Trapezoidal Energy = ', num2str(E_trap), ' kJ'])
disp(['MATLAB trapz Energy = ', num2str(E_mat), ' kJ'])

% difference (just to see)
diff_val = abs(E_trap - E_rect);
disp(['Difference = ', num2str(diff_val), ' kJ'])

% -----------------------------
% plot
% -----------------------------
figure
plot(t,P,'-o')
xlabel('Time (s)')
ylabel('Power (kW)')
title('Motor Power Consumption - NIKUL')
grid on

% add name on graph
text(6,15,'NIKUL','FontSize',12,'Color','r')