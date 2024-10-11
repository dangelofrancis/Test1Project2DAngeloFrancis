
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int choice;
	double number1;
	double number2;
	double sum;
	double difference;
	double product;
	double quotient;
	int power;

	while (true)
	{
			cout << "Calculator Program" << endl << endl;
			cout << "1. Add" << endl;
			cout << "2. Subtract" << endl;
			cout << "3. Multiplication" << endl;
			cout << "4. Division" << endl;
			cout << "5. Power" << endl;
			cout << "6. Quit" << endl << endl;
			cout << "Enter your choice (1-6): ";
			cin >> choice;

		switch (choice)
		{
		case 1: //add
			cout << "Enter the first number: ";
			cin >> number1;
			cout << endl << "Enter the second number: ";
			cin >> number2;

			sum = number1 + number2;

			cout << endl << "The sum of " << number1 << " and " << number2 << " is " << sum << endl << endl;

			break;
		case 2: //subtract
			cout << "Enter the first number: ";
			cin >> number1;
			cout << endl << "Enter the second number: ";
			cin >> number2;

			difference = number1 - number2;

			cout << endl << "The difference of " << number1 << " and " << number2 << " is " << difference << endl << endl;
			break;
		case 3: //multiply
			cout << "Enter the first number: ";
			cin >> number1;
			cout << endl << "Enter the second number: ";
			cin >> number2;

			product = number1 * number2;

			cout << endl << "The product of " << number1 << " and " << number2 << " is " << product << endl << endl;
			break;
		case 4: //divide
			cout << "Enter the first number: ";
			cin >> number1;
			cout << endl << "Enter the second number: ";
			cin >> number2;

			quotient = number1 / number2;

			cout << endl << "The quotient of " << number1 << " and " << number2 << " is " << quotient << endl << endl;
			break;
		case 5: //power
			cout << "Enter a number: ";
			cin >> number1;

			do
			{
				cout << endl << "Enter the power you would like to raise it to: ";
				cin >> power;

				if (power < 0)
				{
					cout << endl << endl << "Invalid number. You cannot input a negative number." << endl << endl;
				}
			} while (power < 0);

			sum = pow(number1, power);

			cout << endl << endl << "The result of " << number1 << " raised to the power of " << power << " is " << sum << endl << endl;
			break;
		case 6: //quit
			break;
		default: //testing
			cout << endl << "You entered an invalid number. Enter a number between 1 and 6." << endl << endl;
			break;
		}
	}
	return 0;
}
