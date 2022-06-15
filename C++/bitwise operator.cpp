#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int x,y,a,o,x_x;
    cout << "Enter the input = ";
    cin >>x>>y;
    a=x&y;
    o=x|y;
    x_x=x^y;
    cout << "and = " <<a<<endl;
    cout << "Or = " <<o<<endl;
    cout << "xor = " <<x_x<<endl;
    getch();
}
