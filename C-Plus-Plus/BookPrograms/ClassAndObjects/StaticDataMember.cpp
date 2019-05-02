#include<iostream>
using namespace std;

class Shared {
    static int a;
    int b;
    public: 
        void set(int i, int j)
        {
            a = i;
            b = j;
        }
        void show();
};

int Shared :: a;     // define a

void Shared :: show()
{
    cout << "This is a static a : " << a;
    cout << "\nThis is a not static b : " << b;
    cout << "\n";
}

int main()
{
    Shared x,y;

    x.set(1,1);     // set a = 1
    x.show();

    y.set(2,2);     // set b = 2
    y.show();

    x.show();       // Here a has been changed for both x and y because a is shared by both objects 

    return 0; 
}