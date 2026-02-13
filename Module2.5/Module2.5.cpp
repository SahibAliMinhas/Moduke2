#include <iostream>
using namespace std;
int main()
{
	double radius, area, circumference;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << endl;
	const double PI = 3.14;
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	cout << "The area of the circle is: " << area << endl;
	cout << "The circumference of the circle is: " << circumference << endl;
	return 0;
}
