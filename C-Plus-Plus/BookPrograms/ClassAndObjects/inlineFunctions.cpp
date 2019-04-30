/* Inline Function */
#include<iostream>
using namespace std;
inline int addition(int a,int b)
{
    return(a+b);
}
inline int subtraction(int a, int b)
{
    return(a-b);

}
inline int multiplication(int a, int b)
{
    return(a*b);
}
inline int division(int a, int b)
{
    return(a/b);
}

int main()
{
    int x,y;
    cout << "Enter two numbers : " << endl;
    cin >> x >> y;
    cout << "Addition = "<< addition(x,y) << endl;
    cout << "Subtraction = "<< subtraction(x,y) << endl;
    cout << "Multiplication = "<< multiplication(x,y) << endl;
    cout << "Division = "<< division(x,y) << endl;
}