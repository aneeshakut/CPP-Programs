#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int max=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int j=0;j<=n;j++){
        if(array[j]>max){
            max=array[j];
        }
        else{
            continue;
        }
    }
    cout<<"Max="<<max<<endl;
    return 0;
}
