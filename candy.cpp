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
        for(int i=2;i<(int)p.size();i++){
            b*=10;
            a=a*10+(p[i]-'0');
        }
        cout<<a<<" "<<b<<endl;
        while((int)(copy*a/b)){
            while((int)((n-1)*a/b)==(int)(copy*a/b)){
                n--;
            }
            count=count+(int)(n*a/b);
            exchange=(int)(n*a/b);
            n=exchange+copy-n;
            copy=n;
        }
        cout<<count+origin<<endl;
    }
    
    return 0;
}