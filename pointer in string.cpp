#include<iostream>
using namespace std;

void point_sajib(int num1,int num2)
{
    int *p1,*p2,temp;
    p1=&num1;
    p2=&num2;
    cout<<"print previous = "<<*p1<<endl<<*p2<<endl;
    cout<<"print previous add = "<<&*p1<<endl<<&*p2<<endl;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"print present = "<<*p1<<endl<<*p2<<endl;
    cout<<"print present add = "<<&*p1<<endl<<&*p2<<endl;
}

int main()
{
    int x,y;
    cout<<"enter the two value = ";
    cin>>x>>y;
    point_sajib(x,y);
}
