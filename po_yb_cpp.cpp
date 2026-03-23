
#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


		int number, num;
		int sum = 0;

		std::cout << "Введите целое число: " << std::endl;
		std::cin >> number;

		while (number > 0) {
			num = number % 10;
			sum += num; 
			number /= 10; 
		}

		std::cout << "Сумма цифр: " << sum << std::endl;

		return 0;
	}

	
