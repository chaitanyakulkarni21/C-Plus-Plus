/* Parameterised Constructor Special Case */
/* Constructor with one parameter */

#include<iostream>
using namespace std;

class X {
    int a;
    public:
        X(int j)
        {
            a = j;
        }
        int geta()
        {
            return a;
        }
};

int main()
{
    X ob = 99;  // passes 99 to j
    cout<< ob.geta() << endl;   //outputs 99
    return 0;
}