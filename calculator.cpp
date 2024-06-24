#include <iostream>
using namespace std;

class Calculator{

    public:

    double n1,n2,res=0;
    char op='&';

    void cal(){

        cout<<"--------------------------------------------"<<endl;

        cout<<"Enter operand: ";
        cin>>n1;

        cout<<"--------------------------------------------"<<endl;

        while(op!='+'&& op!='-'&& op!='*'&&op!='/'){

        cout<<"Enter operator: (+, -, *, /) ";
        cin>>op;
        cout<<"\n";

        cout<<"--------------------------------------------"<<endl;
        }

        cout<<"Entr operand: ";
        cin>>n2;

        cout<<"--------------------------------------------"<<endl;

        switch(op){

            case '+' : res=n1+n2;
                      break;
            case '-': res=n1-n2;
                      break;
            case '*':res=n1*n2;
                      break;
            case '/':res=n1/n2;
                      break;
            default:
                      cout<<"Enetr valid requirements!! \n";

        }

    cout<<"Result: "<<res<<endl;
    cout<<"--------------------------------------------"<<endl;

    }

};

int main(){

    Calculator c;

    c.cal();
    
    return 0;
}