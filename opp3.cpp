#include<iostream>
#include<string>
using namespace std;
class student
{
public:

    long long int id;
    long long int phone;
    double cgpa;

     student (long long int x,long long int y,double z)
    {
        id=x;
        phone=y;
        cgpa=z;
    }
    student()
    {
        cout<<"Default constructor"<<endl;
    }

    void display()
    {
          cout<<"\n"<<id<<" "<<phone<<" "<<cgpa<<endl;
    }
};
int main()
{
    student tamim;

    student emran(21225103064,1794307576,3.95);
    emran.display();

    student rakib(21225103076,1645661562,3.86);
    emran.display();

}
