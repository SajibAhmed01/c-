#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int *p1,*p2;
    cin>>x>>y;
    p1=&x;
    p2=&y;
    cout<<x<<endl<<y<<endl<<&x<<endl<<&y<<endl<<*p1<<endl<<*p2<<endl<<&p1<<endl<<&p2<<endl<<endl;
    return 0;

}

