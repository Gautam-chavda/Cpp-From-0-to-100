#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    int maths,science,english;
    float max;

    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter age :";
    cin>>age;
     cout<<"enter the maximum marks :";
     cin>>max;   
    cout<<"Enter maths marks :";
    cin>>maths;
    cout<<"Enter science marks :";
    cin>>science;
    cout<<"Enter english marks :";
    cin>>english;

    
    float total = maths+science+english;
    float average = (maths+science+english)/3;
    float percentage = ((maths+science+english)/(max*3))*100;
    cout<<"Total :"<<total<<endl;
    cout<<"Average :"<<average<<endl;
    cout<<"percentage :"<<percentage<<endl;
    return 0;
}