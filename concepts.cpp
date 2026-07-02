#include<iostream>
#include<iomanip>
using namespace std;
    float companyID=101;
int main()
{
    float companyID=80;
cout<<"printing local variable :"<<setw(8)<<companyID<<endl;
cout<<"printing global variable :"<<setw(8)<<::companyID<<endl;
const float pi = 3.14159;
float r,area;
cout<<"Enter the radius :";
cin>>r;
cout<<" the radius is :"<<setw(8)<<r<<endl;
area= pi*r*r;
cout<<"the area of circle is :"<<setw(8)<< area<<endl;
cout<<"the casted area is :"<<setw(8)<<(int)area<<endl;

}


