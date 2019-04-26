/* Uses of public private and protected */
#include<iostream>
#include<stdlib.h>
using namespace std;
//Base Class
class Base{
	public:
		char *p;
		Base(){
			p = (char*) malloc(50 * sizeof(char));
			cin >> p;
			cout<<"Name = "<<p;
		}
		~Base(){
			free(p);
		}
};
int main()
{
	Base b;
	return 0;
}
