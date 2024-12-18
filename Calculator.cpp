#include <iostream>
#include <string>
#include <limits>


void printMessage();

void printTwoNumbers();

double Sum(double, double);

double Subtract(double, double);

double Multiplicate(double, double);

double Divide(double, double);

int binaryToDecimal();

void errorMessageWhenWrongInput();


int main() {

	double a, b;
	char operation;

	do {
		
		printMessage();
		std::cin >> operation;
		system("cls");

		switch (operation) 
		{
		case '1':
		    printTwoNumbers();
	        std::cin >> a;

			while (!(std::cin >> a))
			{
                errorMessageWhenWrongInput();
			}

            std::cin >> b;
			while (!(std::cin >> b))
			{
                errorMessageWhenWrongInput();
			}
			
			std::cout << a << " + " << b << " = " << Sum(a, b) << std::endl;
			break;

		case '2':
		    printTwoNumbers();
	        std::cin >> a;
			while (!(std::cin >> a))
			{
                errorMessageWhenWrongInput();
			}

            std::cin >> b;
			while (!(std::cin >> b))
			{
                errorMessageWhenWrongInput();
			}

			std::cout << a << " - " << b << " = " << Subtract(a, b) << std::endl;
			break;

		case '3':
		    printTwoNumbers();
	        std::cin >> a;
            while (!(std::cin >> a))
			{
                errorMessageWhenWrongInput();
			}

            std::cin >> b;
			while (!(std::cin >> b))
			{
                errorMessageWhenWrongInput();
			}

			std::cout << a << " * " << b << " = " << Multiplicate(a, b) << std::endl;
			break;

		case '4':
		    printTwoNumbers();
	        std::cin >> a;
			while (!(std::cin >> a))
			{
                errorMessageWhenWrongInput();
			}

            std::cin >> b;
			while (!(std::cin >> b))
			{
                errorMessageWhenWrongInput();
			}

			std::cout << a << " / " << b << " = " << Divide(a, b) << std::endl;
			break;

		case '5':
		   std::cout << binaryToDecimal() << std::endl;
           break;

		case '6':
		    std::cout << "Have a good day." << std::endl;
            break;  

		default:
			std::cout << "Error, please enter again." << std::endl;
			break;
		}
        
	} while (operation != '6');
}


void printMessage()
{
	std::cout << std::endl;
	std::cout << "What do you want to do?\n";
	std::cout << "1) Sum\n";
	std::cout << "2) Subtract\n";
	std::cout << "3) Multiplicate\n";
	std::cout << "4) Divide\n";
	std::cout << "5) Convert from binary to decimal\n";
	std::cout << "6) Quit\n";
}

void printTwoNumbers()
{
	std::cout << "Please enter two numbers:\n";
}

double Sum(double firstDigit, double secondDigit)
{
	return firstDigit + secondDigit;
}

double Subtract(double firstDigit, double secondDigit)
{
	return firstDigit - secondDigit;
}

double Multiplicate(double firstDigit, double secondDigit)
{
	return firstDigit * secondDigit;
}

double Divide(double firstDigit, double secondDigit)
{
	return firstDigit / secondDigit;
}

int binaryToDecimal()
{
	std::string digit;
	std::cout << "Enter a binary number:\n"; 
	while (true)
	{
	std::cin >> digit;
	bool isValid = true;

	for (char ch : digit)
	{
		if (ch != '0' && ch != '1')
		{
			isValid = false;
			break;
		}
	}
	if (isValid)
	{
	    return stoi(digit, 0, 2);
	}

	    std::cout << "Invalid binary number!\n";
	}
}

void errorMessageWhenWrongInput()
{
    std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter only digits!\n";
}