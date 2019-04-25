/* Inheritance */
#include<iostream>
using namespace std;
//Base Class
class Shape{
	public:
		void setWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height = h;
		}
		protected:
			int width;
			int height;
};
//Derived Class
class Rectangle : public Shape{
	public:
		int getArea(){
			return (width * height);
		}
};
int main()
{
	Rectangle Rect;
	Rect.setWidth(5);
	Rect.setHeight(7);
	
	//Print the area of the object
	cout<<"Total Area = "<<Rect.getArea()<<endl;
	return 0;
}
