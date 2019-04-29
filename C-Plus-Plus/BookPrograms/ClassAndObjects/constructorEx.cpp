/* Example of using a constructor */

#include<iostream>
using namespace std;

class Factor {
    int fact,i,n;
    public:
        int operate();
        void display();     
        Factor();   // constructor
};

 Factor :: Factor()
{
    cout << "Enter the number whose factorial is required : ";
    cin >> n ;
    fact = 1;
}

int Factor :: operate()
{
    for (i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return (fact);
}

void Factor :: display()
{
    cout << endl << "The factorial of a given number is : ";
    cout<< fact << endl;
}

int main()
{
    Factor A;
    A.operate();
    A. display();
}