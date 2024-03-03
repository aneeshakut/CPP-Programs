#include<iostream>
using namespace std;

int pivot(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}

int main(){
    int a[5] = {5,4,1,2,3};
    cout<<"Pivot is "<<pivot(a , 5);
    return 0;
}
