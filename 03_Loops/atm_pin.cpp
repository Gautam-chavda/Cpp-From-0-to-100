#include<iostream>
using namespace std;
int main()
{
    cout<<"---------------------"<<endl;
    cout<<"--------LOGIN--------"<<endl;
    cout<<"---------------------"<<endl;
    int password=5027;
    int input;
    cout<<"Enter the pin to get acess"<<endl;
    cin>>input;
    while(password!=input)
    {
        cout<<"incorrect password acess not granted"<<endl;
        cout<<"enter the password again"<<endl;
        cin>>input;
    }
    cout<<"you entered the correct password acess granted"<<endl;
    return 0;
}