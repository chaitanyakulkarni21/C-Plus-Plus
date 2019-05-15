/* Multiple Inheritance */

#include<iostream>
using namespace std;

class First {
    private:
        int bookno;
        char bookname[30];
    public:
        void getdata()
        {
            cout << "Enter Book NO. : ";
            cin >>  bookno;
            cout << "Enter Book Name :";
            cin >> bookname;
        }

        void putdata()
        {
            cout << "Book No. : " << bookno << endl;
            cout << "Book Name : " << bookname << endl;
        }
};

class Second {
    private:
        char authorname[30];
        char publisherName[50];
    public:
        void getdata()
        {
            cout << "Enter Author name : ";
            cin >> authorname;
            cout << "Enter publisher name : ";
            cin >> publisherName;
        }

        void putdata()
        {
            cout << "Author = " << authorname << endl;
            cout << "Publisher Name = " << publisherName << endl;
        }
};

class Third : public First, public Second{
    private: 
        float price;
    public:
        void getdata()
        {
            First :: getdata();
            Second :: getdata();
            cout << "Enter Price : ";
            cin >> price;
        }

        void putdata()
        {
            First :: putdata();
            Second :: putdata();
            cout << "Price : " << price << endl;
        }
};

int main()
{
    class Third obj;
    cout << "Enter Book Information : " << endl;
    obj.getdata();
    cout << "The Book Information is : " << endl;
    obj.putdata();
    obj.getdata();

    return 0;
}