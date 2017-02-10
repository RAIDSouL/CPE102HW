#include<iostream>

using namespace std;

int main()
{
	int a =5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl << endl ;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl <<endl;
	
	c='F';
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl << endl;
	
	*y='W';
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl << endl;
	
	*x=6;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl << endl;
	
	**z=7;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << &x << endl;
	cout << "y = " << &y << endl;
	cout << "z = " << &z << endl << endl;
}
