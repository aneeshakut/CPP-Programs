#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int input;
    int max = array[0];
    cout<<"Input number(=<total no.of elements):"<<endl;
    cin>>input;
    for(int i=1;i<input;i++){
        if(array[i]>max){
            max = array[i];
        }
        else{
            continue;
        }
    }
    cout<<max<<endl;
    return 0;
}
