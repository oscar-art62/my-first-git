#include<iostream>
#include<cstring>
#include<cctype>
#include<string>
using namespace std;

int main(){
    int i,j;
    char line[101],code[31];
    cin.getline(line,101);
    cin>>code;
    for(i=strlen(line)-1;i>=0;i--){
        for(j=0;j<=i;j++){
            char sub[101];
            strncpy(sub,line+j,i-j+1);
            sub[i-j+1]='\0';
            if(strcasecmp(sub,code)==0){
                cout<<j<<endl;
                for(int k=0;k<strlen(line);k++){
                    if(k==j){
                        cout<<"[";
                    }
                    cout<<line[k];
                    if(k==i){
                        cout<<"]";
                    }
                }
                return 0;
            }
        }
    }
    cout<<-1<<'\n'<<line;
    
    return 0;

    
}
