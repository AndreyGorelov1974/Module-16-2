/*Задание 2. Сшиватель дробных чисел
Что нужно сделать
Напишите небольшую программу.
Из целой и дробной частей числа, которые в отдельности вводит пользователь,
составьте новое число с плавающей точкой (типа double) и выведите это число обратно в консоль для проверки.
Целая часть — это часть числа, которая находится до точки (запятой), дробная — после.

Рекомендации
Вам потребуется функция StringToDouble — std::stod. Она принимает на вход строку, содержащую в себе число.*/

#include <iostream>
#include <string>


int main()
{
	//целая часть числа
	std::string integerPart = "";
	//дробная часть числа
	std::string fractionalPart = "";
	

	//ввод целой и дробной части в строковом виде
	std::cout << "Enter the integer part of a number: ";
	std::cin >> integerPart;
	std::cout << "Enter the fractional part of a number: ";
	std::cin >> fractionalPart;

	//в строковом виде склеиваем обе части по очереди, вставляя точку
	std::string numberStr = integerPart + ".";
	numberStr += fractionalPart;

	//конвертируем в число
	double number = std::stod(numberStr);

	//выводим число для проверки	
	std::cout << "Full view of the number: " << number;
}