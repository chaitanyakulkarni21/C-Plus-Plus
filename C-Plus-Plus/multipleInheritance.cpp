/* Multiple Inheritance */

#include<iostream>
using namespace std;
//Base class Shape
class Shape{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
	protected:
		int width;
		int height;
};

//Base Class PaintCost
class PaintCost{
	public:
		int getCost(int area){
			return area * 70;
		}
};

//Derived Class 
class Rectangle : public Shape, public PaintCost{
	public:
		int getArea(){
			return (width * height);
		}
};

int main(void)
{
	Rectangle Rect;
	int area;
	
	Rect.setWidth(5);
	Rect.setHeight(7);
	
	area = Rect.getArea();
	
	//Print area of the object 
	cout<<"Total area = "<<area<<endl;
	cout<<"Total area = "<<Rect.getArea()<<endl;
	
	//Print the total cost of painting
	cout<<"Total cost = "<<Rect.getCost(area)<<endl;
	
	return 0; 
}
