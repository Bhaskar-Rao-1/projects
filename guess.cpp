#include <iostream>
#include <cmath>
#include<ctime>
using namespace std;

int main(){

    srand(time(0));

    int guess;
    cout<<"Guess Number! ";
    cin>>guess;

    int l=1;
    int u=100;
    int com = ceil(rand()%(u)+l);

    while (com!=guess)
    {

        if(com>guess){
            cout<<"Guess bigger Number! ";
            cin>>guess;
        }

        if(com<guess){
            cout<<"Guess less Number! ";
            cin>>guess;
        }

    }

    if(guess==com){
        cout<<"Correct guess";
    }
    
    return 0;
}