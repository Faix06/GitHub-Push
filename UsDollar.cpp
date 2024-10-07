#include <iostream>

using namespace std;

int main()
{
	float dollarrate;
	float pesos;
	float result;
	cout << "Enter the current dollar rate: ";
	cin >> dollarrate;
	cout << "Enter pesos:";
	cin >> pesos;
	result = pesos * dollarrate;
	cout << "The result is:" << result << endl;
	cout << "Enter amount in pesos: ";
	cin >> pesos;
	cout << "Equivalent in dollars: " << pesos * 0.055 << endl;
	return 0;
}