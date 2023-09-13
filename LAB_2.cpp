#include<iostream>
#include<Windows.h>
#include<cmath>
#include<string>

#define USE_MATH_DEFINES

using namespace std;

void example_1()
{
	cout << "Example 1" << endl;
	float x, y;
	float Y;

	cout << "Enter x, y: " << endl;
	cin >> x >> y;

	if (x <= 0)
	{
		Y = pow(x, 2) - sin(y);
		cout << Y << endl;
	}
	else
	{
		Y = sqrt(x) + cos(y);
		cout << Y << endl;
	}
}

void example_2()
{
	cout << "Example 2" << endl;
	short x, y, a, b;
	cout << "Enter x, y, a, b" << endl;
	cin >> x >> y >> a >> b;

	bool condition = y <= x + 1 && x <= 0 && x >= 0 && y >= 0 && y <= 1;

	if (condition)
	{
		cout << "Kohan Krasavchuik" << endl;
	}
	else {
		cout << "Kohan Pereroblui";
	}

}
void main()
{
	example_1();

	cout << "===============================" << endl;

	example_2();
}