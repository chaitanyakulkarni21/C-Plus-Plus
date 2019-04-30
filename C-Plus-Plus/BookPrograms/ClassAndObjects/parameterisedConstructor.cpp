/* Parameterised Constructor */
/* Constructor with one parameter */

#include<iostream>
using namespace std;

class myclass {
    int a,b;
    public:
        myclass (int i ,int j)
        {
            a = i;
            b = j;
        }
        void show()
        {
            cout << a << " " << b << endl;
        }
};

int main()
{
    myclass obj(3,5);
    obj.show();
    return 0;
}