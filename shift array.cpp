#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5],b[5];
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        b[(i+n)%5]=a[i];
    }
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}