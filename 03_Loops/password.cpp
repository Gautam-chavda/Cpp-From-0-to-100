#include<iostream>
using namespace std;
int main()
{
    int a=8020;
    int b;
    cout<<"Enter the password"<<endl;
    cin>>b;
    while(a!=b)
    {
        cout<<"you enter the incorrect password"<<endl;
        cout<<"Acess Denied"<<endl;
        cout<<"enter the password again"<<endl;
        cin>>b;
        if (a==b)
        {
            cout<<"correct password "<<endl;
            cout<<"Acess granted"<<endl;
        }
        
    }
return 0;
    
} 
