/* 2056011 计科 李书瑶 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Please enter radius and height: \n";
    double radius, height, c, s1, s2, v1, v2;
    const double pi = 3.14159;
    cin >> radius >> height;

    c = 2 * pi * radius;
    s1 = pi * radius * radius;
    s2 = 4 * pi * radius * radius;
    v1 = (4 * pi * radius * radius * radius) / 3;
    v2 = s1 * height;

    cout << fixed << setprecision(2);
    cout << "Circumference:            " << c << endl;
    cout << "Area of a circle:              " << s1 << endl;
    cout << "Surface area of a sphere:  " << s2 << endl;
    cout << "Volume of a sphere:         " << v1 << endl;
    cout << "Volume of a cylinder:          " << v2 << endl;

    return 0;
}
