#include<iostream>
#include<Windows.h>
#include<cmath>

#define M_PI 3.14159
#define M_E 2.71828182846

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short a;
	float b, ShortWriteCos, ShortWriteSin;
	double result;

	cout << "First example" << endl;
	cout << "=============" << endl;

	cout << "Write a number: " << endl;
	cin >> a;

	cout << "Write b number: " << endl;
	cin >> b;

	ShortWriteCos = 1 - cos ((a / b) * M_PI) / 1 + cos((a / b) * M_PI);
	ShortWriteSin = 1 - sin((b / a) * M_PI) / 1 + sin((b / a) * M_PI);

	result = sqrt(M_E * 0.5 * log(ShortWriteCos) + M_E * 0.3 * log(ShortWriteSin));

	cout << result << endl;
	cout << "------------------------" << endl;

	cout << "Second example" << endl;
	cout << "==============" << endl;

	cout << "Write a number: " << endl;
	cin >> a;

	cout << "Write b number: " << endl;
	cin >> b;

	

	result = (0.75 * sqrt(b) - (1 / 2) * pow(a, 1.0 / 3)) * sin(b * (M_PI / 3));
	cout << result << endl;
	cout << "------------------------" << endl;




}