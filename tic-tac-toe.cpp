#include<iostream>
using namespace std;

string player1,player2;
char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void display() {
    cout<<"       |        |       "<<endl;
    cout<<"  "<<arr[0][0]<<"    |   "<<arr[0][1]<<"    |   "<<arr[0][2]<<"    "<<endl;
    cout<<"_______|________|_______"<<endl;
    cout<<"       |        |       "<<endl;
    cout<<"  "<<arr[1][0]<<"    |   "<<arr[1][1]<<"    |   "<<arr[1][2]<<"    "<<endl;
    cout<<"_______|________|_______"<<endl;
    cout<<"       |        |       "<<endl;
    cout<<"  "<<arr[2][0]<<"    |   "<<arr[2][1]<<"    |   "<<arr[2][2]<<"    "<<endl;
    cout<<"       |        |       "<<endl;
}
void select(int place,int player){
if(player==1){
        if(place==1) arr[0][0]='X';
        else if(place==2) arr[0][1]='X';
        else if(place==3) arr[0][2]='X';
        else if(place==4) arr[1][0]='X';
        else if(place==5) arr[1][1]='X';
        else if(place==6) arr[1][2]='X';
        else if(place==7) arr[2][0]='X';
        else if(place==8) arr[2][1]='X';
        else if(place==9) arr[2][2]='X';
}
if(player==2){
if(place==1) arr[0][0]='0';
        else if(place==2) arr[0][1]='0';
        else if(place==3) arr[0][2]='0';
        else if(place==4) arr[1][0]='0';
        else if(place==5) arr[1][1]='0';
        else if(place==6) arr[1][2]='0';
        else if(place==7) arr[2][0]='0';
        else if(place==8) arr[2][1]='0';
        else if(place==9) arr[2][2]='0';
}
        
        
}

int check (int place,int play) {
    cout<<"already placed "<<endl;
    place=0;

    while(place!=1 && place!=2 && place!=3 && place!= 4 && place!=5 && place!=6 && place!=7 && place!=8 && place!=9) {
        cout<<"player "<<play<<" enter place: ";
        cin>>place;
        cout<<"---------------------------------"<<endl;

    }
    return place;
}


int help(int place) {
    if(place==1 &&( arr[0][0]=='X' || arr[0][0]=='0')) {
        return 1;
    }
    if(place==2&&(arr[0][1]=='X'||arr[0][1]=='0')) {
        return 1;
    }
    if(place==3&&(arr[0][2]=='X'||arr[0][2]=='0')) {
        return 1;
    }
    if(place==4&&( arr[1][0]=='X' || arr[1][0]=='0')) {
        return 1;
    }
    if(place==5&&(arr[1][1]=='X'||arr[1][1]=='0')) {
        return 1;
    }
    if(place==6&&(arr[1][2]=='X'||arr[1][2]=='0')) {
        return 1;
    }
    if(place==7 &&( arr[2][0]=='X' || arr[2][0]=='0')) {
        return 1;
    }
    if(place==8&&(arr[2][1]=='X'||arr[2][1]=='0')) {
        return 1;
    }
    if(place==9&&(arr[2][2]=='X'||arr[2][2]=='0')) {
        return 1;
    }
    return 0;
}



int res(string player) {
    if(((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2]))||((arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2]))||((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2]))||((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[0][0]))||
            ((arr[0][2]==arr[1][1])&&(arr[2][0]==arr[1][1]))||((arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0]))||((arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1]))||((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])))
    {
        cout<<"player "<<player<<" winned\n";
        return 0;
    }
    else
        return 1;
}


int main()
{
    int r=1;

    int place,play;
    cout<<"enter player1 name : ";
    cin>>player1;
    cout<<"enter player2 name : ";
    cin>>player2;
    cout<<"---------------------------------"<<endl;
    cout<<"player 1: "<<player1<<" vs player 2: "<<player2<<endl;
    cout<<"---------------------------------"<<endl;

    display();
    cout<<"---------------------------------"<<endl;
    for(int i=0; i<4; i++) {
        place=0;
        r=res(player2);
        while(r==0)
            exit(1);
        while(place!=1 && place!=2 && place!=3 && place!= 4 && place!=5 && place!=6 && place!=7 && place!=8 && place!=9&&r!=0) {
            cout<<"player 1 enter place: ";
            cin>>place;
            cout<<"---------------------------------"<<endl;
        }
        while(help(place)) {
            play=1;
            place=check(place,play);

        }
      /*  if(place==1) arr[0][0]='X';
        else if(place==2) arr[0][1]='X';
        else if(place==3) arr[0][2]='X';
        else if(place==4) arr[1][0]='X';
        else if(place==5) arr[1][1]='X';
        else if(place==6) arr[1][2]='X';
        else if(place==7) arr[2][0]='X';
        else if(place==8) arr[2][1]='X';
        else if(place==9) arr[2][2]='X';*/
select(place,1);
        display();
        cout<<"---------------------------------"<<endl;
        place=0;
        r=res(player1);
        while(r==0)
            exit(1);
        while(place!=1 && place!=2 && place!=3 && place!= 4 && place!=5 && place!=6 && place!=7 && place!=8 && place!=9&&r!=0) {
            cout<<"player 2 enter place: ";
            cin>>place;
            cout<<"---------------------------------"<<endl;

        }
        while(help(place)) {
            play=2;
            place=check(place,play);
        }
      /*  if(place==1) arr[0][0]='0';
        else if(place==2) arr[0][1]='0';
        else if(place==3) arr[0][2]='0';
        else if(place==4) arr[1][0]='0';
        else if(place==5) arr[1][1]='0';
        else if(place==6) arr[1][2]='0';
        else if(place==7) arr[2][0]='0';
        else if(place==8) arr[2][1]='0';
        else if(place==9) arr[2][2]='0';*/
select(place,2);
        display();
        cout<<"---------------------------------"<<endl;
    }
    place=0;
    r=res(player2);
    while(r==0)
        exit(1);
    while(place!=1 && place!=2 && place!=3 && place!= 4 && place!=5 && place!=6 && place!=7 && place!=8 && place!=9 && r!=0) {
        cout<<"player1 enter place: ";
        cin>>place;
        cout<<"---------------------------------"<<endl;
    }
    while(help(place)) {
        play=1;
        place=check(place,play);
    }
  /*  if(place==1) arr[0][0]='X';
    else if(place==2) arr[0][1]='X';
    else if(place==3) arr[0][2]='X';
    else if(place==4) arr[1][0]='X';
    else if(place==5) arr[1][1]='X';
    else if(place==6) arr[1][2]='X';
    else if(place==7) arr[2][0]='X';
    else if(place==8) arr[2][1]='X';
    else if(place==9) arr[2][2]='X';*/
select(place,1);
    display();
    cout<<"---------------------------------"<<endl;
    r=res(player1);
    if(r!=0)
        cout<<"\ntied\n";
    return 0;
}