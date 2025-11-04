#include<bits/stdc++.h>
using namespace std;
bool find_size(string s){
    if(s.length()<8) return false;
    return true;
}
bool find_upper(string s){
    for(char c:s){
        if(isupper(c)){
            return true;
        }
    }
    return false;
}
bool find_digit(string s){
    for(char c:s){
        if(isdigit(c)){
            return true;
        }
    }
    return false;
}
int main(){
    string code;
    cin>>code;
    if(find_size(code)&&find_upper(code)&&find_digit(code)){
        cout<<"Strong";
    }
    else{
        cout<<"Weal, missing\n";
        if(!find_size(code)) cout<<"-at least 8 characters\n";
        if(!find_upper(code)) cout<<"-contain uppercase letters\n";
        if(!find_digit(code)) cout<<"-contain digits\n";
    }
    
    
}