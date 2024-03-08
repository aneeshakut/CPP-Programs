#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //Initial size = 0
    v.push_back(1); // Adds element
    v.push_back(2);
    v.pop_back(); // Subtracts element
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
