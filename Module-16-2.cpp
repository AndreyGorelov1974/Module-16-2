/*Задание 2. Сшиватель дробных чисел
Что нужно сделать
Напишите небольшую программу.
Из целой и дробной частей числа, которые в отдельности вводит пользователь,
составьте новое число с плавающей точкой (типа double) и выведите это число обратно в консоль для проверки.
Целая часть — это часть числа, которая находится до точки (запятой), дробная — после.

Рекомендации
Вам потребуется функция StringToDouble — std::stod. Она принимает на вход строку, содержащую в себе число.*/

#include <iostream>
#pragma warning(disable : 4996)

//точность сравнения
const float epsilon = 0.01f;
//максимальнаяскорость машины
const float maxSpeed = 150.0f;

int main()
{
	//начальная скорость
	float currentSpeed = 0.0f;
	//изменение скорости
	float deltaSpeed = 0.0f;
	//строка для вывода скорости
	char speedStr[4];


	//основной цикл продолжается пока скорость не вернётсяк 0 с заданной точностью
	do {
		std::sprintf(speedStr, "%.1f", currentSpeed);
		std::cout << "Current vehicle speed: " << speedStr << std::endl;
		std::cout << "True speed: " << currentSpeed << std::endl;

		//ввод изменения скорости
		std::cout << "Enter the vehicle speed change: ";
		std::cin >> deltaSpeed;
		currentSpeed += deltaSpeed;
		//машина не может разогнаться быстрее 150 км/ч
		if ((currentSpeed - maxSpeed) > epsilon) {
			currentSpeed = maxSpeed;
		}
	} while (currentSpeed > epsilon);
	std::cout << "The trip is over!";
}