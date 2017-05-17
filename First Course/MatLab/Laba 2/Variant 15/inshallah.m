%Диапозон и шаг
a = 0;
b = 5;
h = 0.5;
%Задание аргумента
X = a:h:b;
%Рассчет функции
Y = abs(sin(x)) + exp(x / 2);
Z = 5 * x.^1.5 + sin(x);
%Вывод графика.
figure(1);
plot(X,Y,X,Z);
%Включаем координатную сетку
grid on;
figure(2);
plot(X,Y,'-',X,Z,':');
grid on;
subplot(2,1,1),bar(X,Y);
subplot(2,1,2),bar(X,Z);