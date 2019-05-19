/* Hybrid Inheritance */

#include <iostream>
using namespace std;

class Person{
    private:
        char name[25];
        int age ;
    public:
        void getdata()
        {
            cout << "Enter the name : " << endl;
            cin >> name ;
            cout << "Enter age : " << endl;
            cin >> age ;
        }
        
        void putdata()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

class Teacher : public Person{
    int experience;
    public:
        void getdata()
        {
            Person :: getdata();
            cout << "Enter Experience : " << endl ; 
            cin >> experience;
        }

        void putdata()
        {
            Person :: putdata();
            cout << "Experience : " << experience << endl;
        }
};

class Student : public Person{
        char qualification[20];
    public:
        void getdata()
        {
            Person :: getdata();
            cout << "Enter Qualilfication of the Student : " << endl;
            cin >> qualification;
        }

        void putdata()
        {
            Person :: putdata();
            cout << "Qualification : " << qualification << endl;
        }
};

class Exam : public Student{
    float percentage;
    public:
        void getdata()
        {
            Student :: getdata();
            cout << "Enter percentage : " << endl;
            cin >> percentage;
        }

        void putdata()
        {
            Student :: putdata();
            cout << "Percentage : " << percentage << endl;
        }
};

class Sports {
        char name[20];
        int score;
    public:
        void getdata()
        {
            cout << "Enter the name of the Sport : " << endl;
            cin >> name;
            cout << "Enter the score : " << endl;
            cin >> score;
        }

        void putdata()
        {
            cout << "Sport name : " << name << endl;
            cout << "Score : " << score << endl;
        }
};

class Awards : public Exam, public Sports {
        int number ;
    public:
        void getdata()
        {
            Exam :: getdata();
            Sports :: getdata();
            cout << "Enter the number of Awards rewarded to the student : " << endl;
            cin >> number;
        }

        void putdata()
        {
            Exam :: putdata();
            Sports :: putdata();
            cout << "Number of Awards rewarded to the student : "<< number << endl;
        }
};

int main()
{
    Teacher t;
    Awards A;

    cout << "Enter Teacher information : " << endl;
    t.getdata();
    cout << "Enter Student information : " << endl;
    A.getdata();
    cout << "Teacher Information is : " << endl;
    t.putdata();
    cout << "Student Information is : " << endl;
    A.putdata();

    return 0;

}   