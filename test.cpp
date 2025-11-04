#include<bits/stdc++.h>
using namespace std;
int main(){
    ::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,a,b,c,count=0;
    cin>>n>>a>>b>>c;
    long long maxa = max({a,b,c});
    long long minc = min({a,b,c});
    count = n-(maxa-minc)+1;
    if(count<=0){
        cout<<0;
    }
    else{
        cout<<count;
    }
    return 0;
}