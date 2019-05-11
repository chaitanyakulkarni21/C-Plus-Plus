/* Division using Operator Overloading */ 

#include <iostream>
using namespace std;

class loc {
    int longitude, latitude;
    public:
        loc()
        {
            // empty constructor
        }
        loc(int lg, int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void show()
        {
            cout << longitude << " " << endl;
            cout << latitude << " "<<endl;
        }

        loc operator / (loc op2);
};

loc loc :: operator / (loc op2)
{
    loc temp;
    temp.longitude = op2.longitude / longitude;
    temp.latitude = op2.latitude / latitude;

    return temp;
}

int main()
{
    loc ob1(2,20), ob2(5,30);

    ob1.show();     // shows 2,20
    ob2.show();     // shows 5,30

    ob1 = ob1 / ob2;

    ob1.show();     // shows the result of ob2/ob1

    return 0;
}