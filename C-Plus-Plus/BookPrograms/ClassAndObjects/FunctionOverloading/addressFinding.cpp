/* Finding the object of an overloaded function */

#include<iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i, int j);

int main()
{
	int (*fp)(int i, int j);	// pointer to f(int)
	fp = myfunc;		// points to myfunc(int)
	
	
	cout << fp(5,7);	// product of the two numbers is returned
	
	return 0;
}

int myfunc(int a)
{
	return a;
}

int myfunc(int a,int b)
{
	return a*b;
}
