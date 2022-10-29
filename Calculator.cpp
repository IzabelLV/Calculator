#include <iostream>


int main() {

	double a, b;
	char operation;

	do {

		std::cout << "What do you want to do?\n";
		std::cout << "1) Sum\n";
		std::cout << "2) Subtract\n";
		std::cout << "3) Multiplicate\n";
		std::cout << "4) Divide\n";
		std::cin >> operation;
		system("cls");

		switch (operation) {
		case '1':
			std::cout << "Please enter two numbers:\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << a << "+" << b << "=" << a + b << std::endl;
			break;

		case '2':
			std::cout << "Please enter two numbers:\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << a << "-" << b << "=" << a - b << std::endl;
			break;
		case '3':
			std::cout << "Please enter two numbers:\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << a << "*" << b << "=" << a * b << std::endl;
			break;
		case '4':
			std::cout << "Please enter two numbers:\n";
			std::cin >> a;
			std::cin >> b;
			std::cout << a << "/" << b << "=" << a / b << std::endl;
			break;
		default:
			std::cout << "Error" << std::endl;
			break;
		}

	} while (operation != 5);

	system("pause>0");
}