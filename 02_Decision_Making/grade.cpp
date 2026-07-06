#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<" Enter the marks :";
    cin>>marks;
    if(marks>=90&&marks<=100)
    {
        cout<<"Grade A";
    }
    else if (75>=marks&&marks>=89)
    {
        cout<<"Grade B";
    }
    else if (74<=marks&&marks>=50)
    {
        cout<<"Grade C";
    }
    else if(49<=marks&&marks<=0)
    {
        cout<<"fail";
    }
    else
    {
        cout<<"invalid number";
    }
    return 0;
}