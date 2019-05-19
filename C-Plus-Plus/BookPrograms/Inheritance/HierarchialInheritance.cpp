/* Heirarchial Inheritance */ 

#include <iostream>
using namespace std;

class Book {
	protected:
		char title[30];
		char author[20];
		char publisher[20];
		float price;
	public:
		void getdata()
		{
			cout << "Enter book title: ";
			cin >> title;
			cout << "Author name : ";
			cin >> author;
			cout << "Enter publisher name:";
			cin >> publisher;
			cout << "Price :" ;
			cin >> price;
		}
		void putdata()
		{
			cout << "Title :" << title << endl;
			cout << "Author name : " << author << endl;
			cout << "Publisher name : " << publisher << endl;
			cout << "Price : " << price << endl;
		}		
};

class EnggBook : public Book{
	protected:
		int no_of_pages;
		int stock;
	public:
		void getdata()
		{
			Book :: getdata();
			cout << "Enter number of pages :";
			cin >> no_of_pages;
			cout << "Enter stock : ";
			cin >> stock;
		}
		void putdata()
		{
			Book :: putdata();
			cout << "Number of pages : " << no_of_pages << endl;
			cout << "stock : " << stock << endl;
		}
};

class Novel : public Book{
	protected:
		int no_of_pages;
		int stock;
	public:
		void getdata()
		{
			Book :: getdata();
			cout << "\nEnter number of pages : ";
			cin >> no_of_pages ;
			cout << "\nEnter the stock";
			cin >> stock;
		}
		void putdata()
		{
			Book :: putdata();
			cout << "Number of pages : " << no_of_pages << endl;
			cout << "Stock : " << stock << endl;
		}
};

int main()
{
	EnggBook eb;
	Novel nb;
	
	cout << "Enter the information for the Engineering Book : "<< endl;
	eb.getdata();
	cout << "Enter the information for the Novel Book : "<< endl;
	nb.getdata();
	cout << "Engineering Book details : " << endl;
	eb.putdata();
	cout << "Novel book details : "<< endl;
	nb.putdata();
	
	return 0;
}
