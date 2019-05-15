/* Single Inheritance in Private mode */

#include<iostream>
using namespace std;

class box{
public:
	int length,breadth;
	void getdata();
	void display();
};

class rectangle : private box
{
private:
	int height;
public:
	void read(void);
	void volume(void);
	void print(void);
};
void box :: getdata(void){
	cout << "Enter length & breadth: " << endl;
	cin >> length >> breadth;
}

void box :: display(void){
	cout << "Length = " << length  << endl;
	cout << "Breadth = " << breadth << endl;
}

void rectangle :: read(void){
	box :: getdata();				// accessible to derived class
	cout << "Enter height : " << endl;
	cin >> height;
}

void rectangle :: print(void)
{
	box :: display();			// accessible to derived class 
	cout << "Height  = " << height << endl;
}

void rectangle :: volume(void)
{
	cout << "volume of the box = ";
	cout << (length * breadth * height) << endl;
}

int main()
{
	rectangle rec;
	rec.read();
	rec.print();
	rec.volume();

	return 0;
}

