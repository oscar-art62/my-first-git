#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[2][3],b[3][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            a[i][j]=m;
            m++;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            b[j][i]=n;
            n++;
        }
    }
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<3;k++){
                sum+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}