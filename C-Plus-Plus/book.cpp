/* Print book details using class and objects */
#include<bits/stdc++.h>
using namespace std;
class Book
{
	public:
		string name;
		int pages;
		float price;
	void printDetails()
	{
		cout<<"Book Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Number of pages : "<<pages<<endl;
	}
};
int main()
{
	Book b;
	cout<<"Enter a Book name: "<<endl;
	cin>>b.name;
	cout<<"Enter Price: "<<endl;
	cin>>b.price;
	cout<<"Enter Number of pages: "<<endl;
	cin>>b.pages;
	cout<<endl<<"The book details are : "<<endl;
	b.printDetails();
	return 0;
}
