/* To enter details of student and print it */
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int rollno, marks;
        string name;
    void printDetails()
    {
        cout<<"Student name : "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main()
{
    Student s;
    cout<<"Enter Name: "<<endl;
    cin>>s.name;
    cout<<"Enter Roll No: "<<endl;
    cin>>s.rollno;
    cout<<"Enter Marks: "<<endl;
    cin>>s.marks;
    cout<<"The student details are : "<<endl;
    s.printDetails();
    return 0;
}
