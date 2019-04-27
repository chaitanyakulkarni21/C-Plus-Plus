/* Structure and Class are related */
#include<iostream>
#include<cstring>
using namespace std;

struct mystr{
        void buildstr(char *s);  // public
        void showstr();
    private:    // now go private
        char str[255];
};

void mystr :: buildstr(char *s)
{
    if(!*s) *str = '\0';    // initialize string
    else strcat(str,s);
}

void mystr:: showstr()
{
    cout << str << "\n";
}

int main()
{
    mystr s;

    s.buildstr(" ");
    s.buildstr("Hello ");
    s.buildstr("there!");

    s.showstr();

    return 0;
}
