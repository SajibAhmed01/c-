#include<iostream>
#include<string>
using namespace std;
class student
{
public:

    long long int id;
    long long int phone;
    double cgpa;
};
int main()
{
    student emran,rakib;

    emran.id=21225103064;
    emran.phone=1794307576;
    emran.cgpa=3.95;

    cout<<emran.id<<" "<<emran.phone<<" "<<emran.cgpa<<endl;

    rakib.id=21225103076;
    rakib.phone=1645661562;
    rakib.cgpa=3.86;

    cout<<rakib.id<<" "<<rakib.phone<<" "<<rakib.cgpa<<endl;
    return 0;
}
