/* Operator Overloading using Friend Function */

#include <iostream>
using namespace std;

class loc{
    int longitude, latitude;
    public:
        loc()
        {
            // empty constructor
        }
        loc ( int lg, int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void updateValues(int lg,int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void show()
        {
            cout << longitude << " " << endl;
            cout << latitude << " " << endl << endl;
        }

        friend loc operator+(loc op1, loc op2);      // now a friend, have access of both the variables 
        loc operator - (loc op2);                    // not a friend, have access of only one variable
        loc operator = (loc op2);
        loc operator ++ ();
};

// Now, + is overloaded using friend function. Thus two parameters are passed
loc operator + (loc op1, loc op2)
{
    loc temp ;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;

    return temp;
}

// Overload - for loc 

loc loc :: operator-(loc op2)
{
    loc temp;

    // Notice order of operators

    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;

    return temp;
}

// Overload assignment (=) for loc 

loc loc :: operator=(loc op2)
{
    longitude = op2.longitude; 
    latitude = op2.latitude;

    return *this;       // i.e., return object that generated call
}

//Overload ++ for loc 

loc loc :: operator++()
{
    longitude++;
    latitude++;

    return *this;   
}

int main()
{
    loc ob1(10,20),ob2(30,30);

    ob1 = ob1 + ob2;
    ob1.show();     // displays sum of 10+30 and 20+30, thus 40 and 50 are printed

    ob1.updateValues(2,4);
    ob1 = ob1 - ob2;
    ob1.show();

    ob1.updateValues(3,4);
    ob1 = ob2;
    ob1.show();

    ob1.updateValues(3,6);
    ob1 = ++ob1;
    ob1.show();

    ob2.updateValues(4,5);
    ob2 = ++ob2;
    ob2.show();


    return 0;
}

