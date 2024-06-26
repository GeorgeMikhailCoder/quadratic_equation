# quadratic_equation
Тестовое задание, библиотека для решения квадратных уравнений. 

## Описание
Библиотека содержит одну функцию solve_equation, которая принимает коэффициенты квадратного уравнения "ax^2 + bx + c" типа double и порядок малой окрестности нуля для сравнения double чисел. 
Порядок далее используется в программе для сравнения числа с плавающей точкой с нулём:   
D==0 <=> abs(D)<1e-p  
где p - порядок малости. 

Функция возвращает структуру EqResult, которая содержит поля:  
success - флаг, показывающий, что решение найдено успешно.  
nRoots - количество корней уравнения.  
x1, x2 - корни уравнения. Если уравнение имеет 1 или 0 корней, оставшиеся корни заполняются значением по-умолчанию.  
tolerance - значение типа double, используемое для сравнения double чисел с нулём. Соответствует 1e-p.  

Функция может завершиться некорректно, если уравнение не является квадратным или произошло переполнение. Соответственно, при ошибках флаг success будет установлен в false.  

## Сборка  
Из папки с репозиторием выполнить команды:  
mkdir build  
cd build  
cmake ..  
make  
make check   
