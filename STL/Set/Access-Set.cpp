#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(3); //No multiple element
    for(int i:s){
        cout<<i<<endl; //Ascending Order
    }
    return 0;
}
