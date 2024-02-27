#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        int element=b[i];
        for(int j=0;j<n;j++){
            if(element == a[j]){
                ans.push_back(element);
                b[j]=INT_MIN;
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
