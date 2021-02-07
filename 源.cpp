#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int sum(int a, int b);
	cout << sum(a, b) <<a<<" "<<b<< " " << endl;
	
	cout << sum(a, b) << a << " " << b << " "  << endl;
	cout << "love"<< endl;

	system("pause");
	return 0;
}
int sum(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	return a + b;
}