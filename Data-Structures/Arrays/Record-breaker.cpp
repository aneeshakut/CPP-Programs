#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int rb = 0;
    for(int i=0;i<=n;i++){
        if(array[i]>array[i-1]  && array[i]>array[i+1]){
            rb++;
        }
        else{
            continue;
        }
    }
    cout<<rb<<endl;
    return 0;
}
