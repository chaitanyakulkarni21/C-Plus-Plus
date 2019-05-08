/* Allowing both Initialized and Uninitialized Objects */

#include<iostream>
#include <new>
using namespace std;

class Powers {
	int x;
	public:
			// overload constructor two ways
			powers()	
			{
				x = 0;	 // no initializer
			}
			powers(int n)
			{
				x = n;	// initializer
			}
			
			int getx()
		{	
			return x;
		}

			void setx (int i)
		{
			x = i;
		}
};

int main()
{
	Powers ofTwo[] = {1, 2, 4, 8, 16};	// Initialized
	Powers ofThree[5];				// Uninitialized
	
	Powers *p;
	
	int i;
	
	// show powers of two
	
	cout << "Powers of two:  ";
	for(i = 0; i<5 ; i++)
	{
		cout << ofTwo[i].getx() << " ";
	}
	cout << "\n\n";
	
	//set powers of three 
	ofThree[0].setx(1);
	ofThree[1].setx(3);
	ofThree[2].setx(9);
	ofThree[3].setx(27);
	ofThree[4].setx(81);
	
	// show powers of three
	
	cout << "Powers of Three: ";
	for(i = 0; i <5 ; i++)
	{
		cout << ofThree[i].getx() << " ";
	}
	cout << "\n\n";
	
	// dynamically allocate an array 
	
	try{
		p = new powers[5];		// no initialization
	}
	catch(bad_alloc xa)
	{
		cout << "Allocation Failure\n";
		return 1;
	}
	
	//	initialization dynamic array with powers of two 
	
	for(i = 0; i<5 ; i++)
	{
		p[i].set(ofTwo[i].getx());
	}
	
	// show powers of two 
	cout << "Powers of two: ";
	for (i = 0; i<5 ; i++)
	{
		cout << p[i].getx() << " ";
	}
	
	cout << "\n\n";
	
	delete[] p;
	return 0;
}


