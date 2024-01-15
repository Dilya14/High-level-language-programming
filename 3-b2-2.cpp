/*2056011 计科 李书瑶*/
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer between [1..30000]: \n";
	int num;
	cin >> num;

	int a, b, c, d, e;

	a = num / 10000;
	b = (num / 1000) % 10 ;
	c = (num / 100) % 10;
	d = (num / 10) % 10;
	e = num % 10;

	cout << "Tens of Thousands: " << a << endl;
	cout << "Thousands:         " << b << endl;
	cout << "Hundreds:          " << c << endl;
	cout << "Tens:              " << d << endl;
	cout << "Units:             " << e << endl;

	return 0;
}
