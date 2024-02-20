#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int array[],int n,int search){
    int x=0;
    int y=n;
    while(x<=y){
        int mid=(x+y)/2;
        if(array[mid]==search){
            return mid;
        }
        else if(array[mid]>search){
            y=mid-1;
        }
        else if(array[mid]<search){
            x=mid+1;
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

    cout<<binarySearch(array,n,search)<<endl;
    return 0;
}
