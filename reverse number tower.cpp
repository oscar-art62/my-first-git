#include<bits/stdc++.h>
using namespace std;
int main(){
    ::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n<0||n>9){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<n+1-j;
        }
        for(int j=n-1-i;j>0;j--){
            cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}