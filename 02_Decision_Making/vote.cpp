#include<Iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age :";
    cin>>age;
    if(age>=18)
    {
        cout<<"you are eligible for voting ";
    }
    else
    {
        cout<<"you are not eligible for voting ";
    }
    return 0;
}