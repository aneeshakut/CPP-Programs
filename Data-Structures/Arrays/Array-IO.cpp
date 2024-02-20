#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int j=0;j<n;j++){
        cin>>array[j];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
