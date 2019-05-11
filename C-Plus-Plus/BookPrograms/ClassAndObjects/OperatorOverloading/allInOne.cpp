/* All the operations in one */

#include <iostream>
using namespace std;

class loc {
    int longitude, latitude;
    public:
        loc()
        {
            //  empty constructor
        }
        
        loc(int lg, int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void updateValues(int lg, int lt)
        {
            longitude = lg;
            latitude = lt;
        }


        void show()
        {
            cout << longitude << " " << endl;
            cout << latitude << " " << endl << endl;
        }

        loc operator + (loc op2);
        loc operator - (loc op2);
        loc operator * (loc op2);
        loc operator / (loc op2);
};


loc loc :: operator + (loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;

    return temp;
}

loc loc :: operator - (loc op2)
{
    loc temp;
    temp.longitude = op2.longitude - longitude;
    temp.latitude = op2.latitude - latitude;

    return temp;
}

loc loc :: operator * (loc op2)
{
    loc temp;
    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;

    return temp;
}

loc loc :: operator / (loc op2)
{
    loc temp;
    temp.longitude = op2.longitude / longitude;
    temp.latitude = op2.latitude / latitude;

    return temp;
}

int main()
{
    loc ob1(10,20), ob2(3,50);

    ob1.show();     // shows 10,20
    ob2.show();     // shows 3,50

    ob1 = ob1 + ob2;
    ob1.show();     // shows result after addition
    ob1.updateValues(2,20);     // values are updated....

    ob1 = ob1 - ob2;
    ob1.show();     // shows result after subtraction
    ob1.updateValues(3,4);

    ob1 = ob1 * ob2;
    ob1.show();     // shows result after multiplication
    ob1.updateValues(5,4);

    ob1 = ob1 / ob2;
    ob1.show();     // shows result after division
    ob1.updateValues(5,2);

    return 0;

}