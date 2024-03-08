#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(0); //Pushed in front of earlier element
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}
