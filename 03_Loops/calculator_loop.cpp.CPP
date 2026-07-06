#include<iostream>
using namespace std;
int main()
{
    int a,b,c,operation;
    cout<<"------CALCULATOR------"<<endl;
    //for(c=1;c<=2;c++)
    for(operation=1;operation<=5;operation++)
    
    {
            cout<<"ENter the first number:"<<endl;
            cin>>a;
            cout<<"Enter the second number:"<<endl;
            cin>>b;            
            
            cout<<"1 : addition"<<endl;
            cout<<"2 : subtraction"<<endl;
            cout<<"3 : multiplication"<<endl;
            cout<<"4 : division"<<endl;
            cout<<"5 : exit"<<endl;
            cout<<"enter the number to choose opertion"<<endl;
            cin>>operation;
          
            switch(operation)
    {
        case 1:
        cout<<"you choose addition"<<endl;
        cout<<"solution is :"<<a+b<<endl;
        break;
        case 2:
        cout<<"you choose subtraction"<<endl;
        cout<<"solution is :"<<a-b<<endl;
        break;
        case 3:
        cout<<"you choose mulitipilcation"<<endl;
        cout<<"solution is :"<<a*b<<endl;
        break;
        case 4:
        cout<<"you choose division"<<endl;
        cout<<"solution is :"<<a/b<<endl;
        break;
        case 5:
        cout<<"ypu choose to exit"<<endl;
        cout<<"Thanks For Using"<<endl;
        default :
        cout<<"you choosed an invalid operation"<<endl;
    }

    }
return 0;
    }