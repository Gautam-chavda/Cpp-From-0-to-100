#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int sum=0;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(i;i<=n;i=i+2)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"sum is :"<<sum;
}