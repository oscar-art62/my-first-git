#include<iostream>
#include<string>
#include<vector> 
using namespace std;

int main(){
    string hit_record[9][5];
    for(int i=0;i<9;i++){
        for(int j=0;j<5;j++){
            hit_record[i][j]="NULL";
        }
    }
    for(int i=0;i<9;i++){
        int a;
        cin>>a;
        for(int j=0;j<a;j++){
            string hit;
            cin>>hit;
            hit_record[i][j]=hit;
        }
    }
    int b;
    cin>>b;
    int score=0,out=0;
    vector<bool> base = {false,false,false};
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            string record = hit_record[j][i];
            if(record=="SO"||record=="GO"||record=="FO"){
                out++;
                if(out%3==0){
                    base[0]=base[1]=base[2]=false;
                }
            }
            else{
                if(record=="1B"){
                    if(base[2]){
                        score++;
                        base[2]=false;
                    }
                    for(int i=1;i>=0;i--){
                        if(base[i]){
                        base[i+1]=true;
                        base[i]=false;
                        }
                    }
                    base[0]=true;
                }
                if(record=="2B"){
                    if(base[2]){
                        score++;
                        base[2]=false;
                    }
                    if(base[1]){
                        score++;
                        base[1]=false;
                    }
                    if(base[0]){
                        base[2]=true;
                        base[0]=false;
                    }
                    base[1]=true;
                }
                if(record=="3B"){
                    if(base[2]){
                        score++;
                        base[2]=false;
                    }
                    if(base[1]){
                        score++;
                        base[1]=false;
                    }
                    if(base[0]){
                        score++;
                        base[0]=false;
                    }
                    base[2]=true;
                }
                if(record=="HR"){
                    for(int i=0;i<3;i++){
                        if(base[i])score++;
                        base[i]=false;
                    }
                    score++;
                }
            }
            if(out==b) break;
        }
        if(out==b) break;
    }
    cout<<score<<endl;
    return 0;
}