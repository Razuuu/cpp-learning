#include<iostream>
#include<cmath>

using namespace std;

double calculatorFunction(double a, double b, char op);

int main() {
	
	char choice = '+';
	double numberone, numbertwo = 0.0;

	cout << "Enter input and an operator (e.g +,-,*,/,^): ";
	cout << "Number 1: ";
	cin >> numberone;

	cout << "Number 2: ";
	cin >> numbertwo;

	cout << "Operator (+ - * / ^): ";
	cin >> choice;

	while (choice != 'Q') {
		cout << "Result: " << calculatorFunction(numberone, numbertwo, choice) << endl;

		cout << "Enter input and an operator (e.g +,-,*,/,^): ";
		cout << "Number 1: ";
		cin >> numberone;

		cout << "Number 2: ";
		cin >> numbertwo;

		cout << "Operator (+ - * / ^): ";
		cin >> choice;
	}

	system("PAUSE");
	return 0;
}

double calculatorFunction(double a, double b, char op) {
	
	double result = 0.0;

	if (op == '+') {
		result = a + b;

	} else if (op == '-') {
		result = a - b;

	} else if (op == '*') {
		result = a * b;

	} else if (op == '/') {
		result = a / b;

	} else if (op == '^') {
		result = pow(a, b);

	} else {
		cout << "Rubbish operator, please try again! " << endl;
	}

	return result;
}
