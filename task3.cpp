#include <iostream>
using namespace std;
int main(){
    double a, b;
    char opr;

    cout<<"Enter the operator";
    cin>>opr;
    cout<<"Enter 1st value";
    cin>>a;
    cout<<"Enter 2nd  value";
    cin>>b;

    switch(opr)
    {
        case '+':
             cout<<a<<opr<<b<<"="<<a+b;
             break;
        case '-':
             cout<<a<<opr<<b<<"="<<a-b;
             break;
        case '*':
             cout<<a<<opr<<b<<"="<<a*b;
             break;
        case '/':
             if(b==0)
            {
                cout<<"error!";
				}
             else
             {
                cout<<a<<opr<<b<<"="<<a/b;}
              break;
        default:
             cout<<"invalid operator"<<endl;

    }
}
