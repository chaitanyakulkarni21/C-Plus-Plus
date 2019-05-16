/* Multiple Inheritance */

#include<iostream>
using namespace std;

class Car {
	private:
		char name[15];
		char model[10];
	public:
		void getdata()
		{
			cout << "Enter Car name :";
			cin >> name;
			cout << "Enter model : ";
			cin >> model;
		}
		void putdata()
		{
			cout << "Name of the car : " << name << endl;
			cout << "Model of the car : " << model << endl;
		}
};

class Manufacturer : public Car
{
	private:
		char carno[15];
		int year;
	public:
		void getdata()
		{
			Car :: getdata();
			cout << "Enter car number : ";
			cin >> carno;
			cout << "\nEnter year of manufacturing :\n";
			cin >> year;	
		}	
		void putdata()
		{
			Car :: putdata();
			cout << "Car Number : " << carno << endl;
			cout << "Year of manufacturing : " << year << endl;
		}
}; 

class Distributer : public Manufacturer{
	private:
		char name[20];
		long price;
	public:
		void getdata()
		{
			Manufacturer :: getdata();
			cout << "Enter distributer name : ";
			cin >> name;
			cout << "Enter price : ";
			cin >> price;			
		}	
		void putdata()
		{
			Manufacturer :: putdata();
			cout << "Distributer name : " << name << endl;
			cout << "Price : " << price << endl;	
		}
};

int main()
{
	Distributer d[10];
	int n,i;
	cout << "How many records to enter : ";
	cin >> n;
	cout << "Enter the car information : " << endl;
	for(i=0;i<=n;i++)
	{
		cout << "Record no: " << i+1 << endl;
		d[i].getdata();
	}
	cout << endl << "The car information is " << endl;
	for(i=0;i<n;i++)
	{
		cout << "Record no." << i+1 << endl;
		d[i].putdata();
	}
}
