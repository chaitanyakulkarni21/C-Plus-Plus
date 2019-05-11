/* Multiplication using creating a member function */

#include<iostream>
using namespace std ;

class loc {
    int longitude, latitude ;

    public:
        loc()
        {
            // empty constructor 
        }

        loc(int lg, int lt)
        {
            longitude = lg;
            latitude  = lt;
        }

        void show ()
        {
            cout << longitude << " " << endl;
            cout << latitude << " " << endl;
        }

        loc operator * (loc op2);
};

loc loc :: operator*(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;

    return temp ;
}

int main()
{
    loc op1(10,20), op2(3,40);

    op1.show();     // displays 10, 20;
    op2.show();     // displays 3, 40;

    op1 = op1 * op2;    // diaplays 10*30 result and 20*40 result

    op1.show();

    return 0;
}