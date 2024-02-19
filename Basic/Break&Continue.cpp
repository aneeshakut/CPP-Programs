#include<iostream>
using namespace std;

int main()
{
    int n=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }if(n==0){
            break;
        }
        cout<<"Odd Date"<<date<<endl;
        n -= 300;
    }
    return 0;
}
