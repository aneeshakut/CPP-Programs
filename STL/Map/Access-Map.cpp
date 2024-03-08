#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> square;
    square[1] = 1;
    square[2] = 4;
    square[3] = 9;
    for(auto i:square){
        cout<<i.first<<" "<<i.second<<endl; //num square
    }
    return 0;
}
