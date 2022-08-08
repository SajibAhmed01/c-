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
        cout<<"\n"<<id<<" "<<phone<<" "<<cgpa<<endl;
    }
    student()
    {
        id=21225103053;
        phone=1571467869;
        cgpa=3.45;
        cout<<"Default constructor"<<endl;
        cout<<"\n"<<id<<" "<<phone<<" "<<cgpa<<endl;
    }
};
int main()
{
    student sajib;

    student emran(21225103064,1794307576,3.95);

    student rakib(21225103076,1645661562,3.86);

}

