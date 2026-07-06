#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"chosee the number to perform the code accordingly"<<endl;
    cout<<"1 addition"<<endl;
    cout<<"2 subtraction"<<endl;
    cout<<"3 multiplication"<<endl;
    cout<<"4 division"<<endl;
    int num;
    cout<<"choose the opertaion and enter the number"<<endl;
    cin>>num;
    switch(num) 
    {
        case 1:
        cout<<"you choosed addition"<<endl;
        cout<<a+b;
        break;
          case 2:
        cout<<"you choosed subtraction"<<endl;
        cout<<a-b;
        break;
          case 3:
        cout<<"you choosed multipilcation"<<endl;
        cout<<a*b;
        break;
          case 4:
        cout<<"you choosed division"<<endl;
        cout<<a/b;
        break;
          default :
        cout<<"you choosed an invalid opertion"<<endl;
        
        break;

    }
    return 0;
}