#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a = {1,2,3,4};  //Static array
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
