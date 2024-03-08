#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(5);
    cout<<q.front(); //First In - First Out
    return 0;
}
