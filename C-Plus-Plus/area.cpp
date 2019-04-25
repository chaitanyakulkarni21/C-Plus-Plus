/* Area of Box */
#include<iostream>
using namespace std;
class Box {
	public:
		double length;	//Length of the Box
		double breadth;	//Breadth of the Box
		double height;	//Height of the Box
};
int main(){
	Box box1;	//Declare box1 of type Box
	Box box2;	//Declare box2 of type Box
	double volume = 0.0;	//Store the volume of box here
	
	//box1 specification
	box1.height = 5.0;
	box1.length = 6.0;
	box1.breadth = 7.0; 
	
	//box2 specification
	box2.height = 10.0;
	box2.length = 12.0;
	box2.breadth = 13.0;
	
	//volume of box1
	volume = box1.height * box1.breadth * box1.length;
	cout <<"Volume of box1 = "<<volume<<endl;
	
	//volume of box2
	volume = box2.height * box2.breadth * box2.length;
	cout <<"Volume of box2 = "<<volume<<endl;
}
