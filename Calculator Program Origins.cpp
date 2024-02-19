// This program functions as a basic caluclator, where the user inputs two integers and 1 of 4 operators, the program then operates the chosen operator then outputs the equation to the user or an error message if the user enters an unsupported operator
#include <iostream>

using namespace std;

int main() {
	int num1, num2;
	char op;

	cout << "Please enter the first number: ";
	cin >> num1;

	cout << "Please enter operator: ( +, -, *, /): ";
	cin >> op;

	cout << "Please enter second number: ";
	cin >> num2;

	switch (op) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	case '/':
		if (num2 == 0) {
			cout << "Error: Division by zero";
		}
		else {
			cout << num1 << "/" << num2 << "=" << num1 / num2;
		}
		break;
	default:
		cout << "Error: Unsopported operator";
	}

	return 0;
}