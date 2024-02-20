#include<iostream>
#include<math.h>
using namespace std;

int linearSearch(int arr[],int n,int search){
    for(int i=0;i<=n;i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int search;
    cout<<"Number to search"<<endl;
    cin>>search;

    cout<<linearSearch(array,n,search)<<endl;

    return 0;
}
