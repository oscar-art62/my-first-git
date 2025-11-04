#include<iostream>
using namespace std;
const int SIZE=3;
void printboard(char board [SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        cout<<"-------"<<endl;
        for(int j=0;j<SIZE;j++){
            cout<<"|"<<board [i][j];
            if(j==2)cout<<"|";
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;
}

char whowin(char board [SIZE][SIZE]){
    for(int i=0;i<SIZE;i++){
        if(board [i][0]!=' '&&board [i][0]==board [i][1]&&board [i][1]==board [i][2]){
            return board [i][0];
        }
        if(board [0][i]!=' '&&board [0][i]==board [1][i]&&board [1][i]==board [2][i]){
            return board [0][i];
        }
    }
    if(board [0][0]!=' '&&board [0][0]==board [1][1]&&board [1][1]==board [2][2]){
        return board [0][0];
    }
    else if(board [0][2]!=' '&&board [0][2]==board [1][1]&&board [1][1]==board [2][0]){
        return board [0][2];
    }
    else{
        return ' ';
    }
}
int main(){
    char board [SIZE][SIZE];
    cout<<"Input nine characters(X,O,or' '):";
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cin.get(board [i][j]);
        }
    }
    printboard(board);
    if(whowin(board)=='X'){
        cout<<"X wins!"<<endl;
    }
    else if(whowin(board)=='O'){
        cout<<"O wins!"<<endl;
    }
    else{
        cout<<"No winner!"<<endl;
    }
    return 0;

    
        
}