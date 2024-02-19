#include<iostream>
using namespace std;

int main()
{
    char op;
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter operator:";
    cin>>op;
    switch (op)
    {
    case '+' :
        c=a+b;
        cout<<c;
        break;
    case '-' :
        c=a-b;
        cout<<c;
        break;
    case '*' :
        c=a*b;
        cout<<c;
        break;
    case '/' :
        if(b!=0){
            c=a/b;
            cout<<c;
            break;
        }else{
            cout<<"Cannot divide by 0"<<endl;
        }
    default:
        cout<<"Invalid Syntax"<<endl;
        break;
    }
    return 0;
}
