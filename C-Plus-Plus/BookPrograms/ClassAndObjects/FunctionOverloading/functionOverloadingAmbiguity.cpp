/* Function Overloading and Ambiguity */

#include<iostream>
using namespace std;

float myfunc(float i);
double myfunc(double i);

int main()
{
    cout << myfunc(10.1) << " "<< endl;        // unambiguous.... calls myfunc(double)
    cout << myfunc(10.5) << endl;                 // ambiguous   if int passed.. computer confuses between float and 
                                        //              double to typecaste into.


    return 0;
}

float myfunc(float i)
{
    return i;
}

double myfunc(double i)
{
    return -i;
}