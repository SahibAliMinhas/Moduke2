#include (<iostream>)
using namespace std;
int main()
{
	int num1, num2, num3, average;
	num1 = 125;
	num2 = 28;
	num3 = -25;
	average = 0;
	
	average = (num1 + num2 + num3) / 3;
	cout << "Num1: " << num1 << endl;
	cout << "um2: " << num2 << endl;
	cout << "Num3: " << num3 << endl;
	cout << "Average: " << average << endl;
	cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
	return 0;
}