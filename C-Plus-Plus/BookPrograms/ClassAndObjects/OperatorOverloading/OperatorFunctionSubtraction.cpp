/* Subtraction using creating a member function */

#include<iostream>
using namespace std;

class loc{
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
            cout << longitude  << " "<< endl;
            cout << latitude << " " << endl;
        }

        loc operator-(loc op2);     // - sign denotes the addtion opertion of objects 
};

    // Operator - for loc

    loc loc :: operator-(loc op2)
    {
        loc temp ;
        temp.longitude = op2.longitude - longitude;
        temp.latitude = op2.latitude - latitude;

        return temp ;
    }

int main()
{
    loc ob1(10,20), ob2(5,30);

    ob1.show(); //  display 10, 20;
    ob2.show(); //  display 5 30 ;

    ob1 = ob1 - ob2;
    ob1.show(); // display -5 10 ;

    return 0;
}