/* Static Data Member 2 */

#include<iostream>
using namespace std;

class Shared{
    public:
        static int a;
};

int Shared :: a;     // define a

int main()
{
    // initialise  a before creating any objects 
    Shared :: a = 99;

    cout << "This is a initial value of a: " << Shared :: a;
    cout << "\n";

    Shared x;

    cout << "This is x.a: " << x.a;
    cout << "\n";
    return 0;
}
