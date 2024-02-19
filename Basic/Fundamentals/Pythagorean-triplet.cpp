#include<iostream>
#include<math.h>
using namespace std;

bool pyt(int a,int b,int c){
    int l=max(a,max(b,c));
    int m,n;
    if(l==a){
        m=b;
        n=c;
    }
    else if(l==b){
        m=a;
        n=c;
    }
    else if(l==c){
        m=a;
        n=b;
    }

    if(l*l==m*m+n*n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(pyt(x,y,z)){
        cout<<"Pythagorean Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorean Triplet"<<endl;
    }
    return 0;
}
