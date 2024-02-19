#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<=n;i++){
        if(n==2){
            cout<<"Prime"<<endl;
            break;
        }
        if(n%i==0){
            cout<<"Composite"<<endl;
            break;
        }
    }
    if(i==n && n!=2){
        cout<<"Prime"<<endl;
    }
    return 0;
}
