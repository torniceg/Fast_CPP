#include <iostream>

using namespace std;

int main()
{
	int x(1), y(2), z;
	z = 3;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	cout << "num0 " << num0 << endl;
	cout << "num1 " << num1 << endl;
	cout << "num2 " << num2 << endl;
	cout << "num3 " << num3 << endl;

	int num4 = 11;
	int num5 = 011;
	int num6 = 0b11;
	int num7 = 0x11;

	cout << "num4 " << num4 << endl;
	cout << "num5 " << num5 << endl;
	cout << "num6 " << num6 << endl;
	cout << "num7 " << num7 << endl;
}