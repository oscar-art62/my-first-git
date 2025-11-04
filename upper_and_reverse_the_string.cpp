#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    for(char c:line){
        c=toupper(c);
        cout<<c;
    }
    cout<<endl;
    for(int i=line.size()-1;i>=0;i--){
        cout<<line[i];
    }
}