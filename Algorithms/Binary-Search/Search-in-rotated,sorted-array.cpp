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

int binarySearch(int a[],int n,int search){
    int x=0;
    int y=n;
    while(x<=y){
        int mid=(x+y)/2;
        if(a[mid]==search){
            return mid;
        }
        else if(a[mid]>search){
            y=mid-1;
        }
        else if(a[mid]<search){
            x=mid+1;
        }
    }
    return -1;
}

int element(int a[],int n,int k){
    if(k>a[pivot(a,n)] && k<=a[n-1]){
        return binarySearch(a,n-1,k);
    }
    else{
        return binarySearch(a,pivot(a,n)-1,k);
    }
}

int main(){
    int a[5] = {5,4,1,2,3};
    int n,k;
    cin>>n;
    cin>>k;
    int ans = element(a,n,k);
    cout<<"Answer:"<<ans;
    return 0;
}
