#include<iostream>
using namespace std;

int root(int n){
    int s = 0;
    int e = n;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans = root(n);
    cout<<ans;
    return 0;
}
