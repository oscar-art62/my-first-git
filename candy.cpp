#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int copy;
    string p;
    while(cin>>n>>p){
        int count=0,exchange = 0,ex=0,origin,a=0,b=1;
        copy=n;
        origin = n;
        for(int i=2;i<static_cast<int>(p.size());i++){
            b*=10;
            a=a*10+(p[i]-'0');
        }
        while(static_cast<int>(copy*a/b)){
            while(static_cast<int>((n-1)*a/b)==static_cast<int>(copy*a/b)){
                n--;
            }
            count=count+static_cast<int>(n*a/b);
            exchange=static_cast<int>(n*a/b);
            n=exchange+copy-n;
            copy=n;
        }
        cout<<count+origin<<endl;
    }
    
    return 0;
}