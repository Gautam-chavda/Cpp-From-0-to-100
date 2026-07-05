#include<iostream>
using namespace std;
int main()
{
    int i=8203;
    
    while(i)
    {
        cout<<"Enter the password to get acess:"<<endl;
        cin>>i;
        cout<<"incorrect password acess denied"<<endl;
    }

    return 0;
}