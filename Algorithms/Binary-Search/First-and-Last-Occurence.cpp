#include<iostream>
using namespace std;

int first(int n,int a[n],int key){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(a[mid] == key){
            ans = mid;
            e = mid - 1;
        }else if(key > a[mid]){
            s = mid + 1;
        }else if(key < a[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int last(int n,int a[n],int key){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(a[mid] == key){
            ans = mid;
            e = mid + 1;
        }else if(key > a[mid]){
            s = mid + 1;
        }else if(key < a[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n,a[n],key_;
    cin>>n;
    cin>>a[n];
    cin>>key_;
    int first_ = first(n,a[n],key_);
    int last_ = last(n,a[n],key_);
    cout<<first_<<last_<<endl;
    return 0;
}
