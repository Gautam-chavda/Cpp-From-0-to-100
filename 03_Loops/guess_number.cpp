#include<iostream>
using namespace std;
int main()
{
    cout<<"--------HEY WELCOME TO GUESS NUMBER GAME---------"<<endl;
    int screate=55;
    int input;
    cout<<"Guess the number"<<endl;
    cin>>input;
    while(screate!=input)
    {
        cout<<"you get a wrong number "<<endl;
        cout<<"HINT :"<<endl;
        if(input>60)
        {
            cout<<"too high"<<endl;
        }
        else{
            cout<<"too low"<<endl;
        }
    cout<<"-----TRY AGAIN-----"<<endl;
    cin>>input;
    
    }
    cout<<"-----congratulations you guessed a correct number-----"<<endl;
    return 0;

}