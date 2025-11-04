#include <iostream>
#include <cstring> 

using namespace std;

int main() {
    char names[50][31];
    int n,m;
    cin>>n>>m;
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        cin.getline(names[i], m);
    }
    int smallest = 0;
    for (int i = 1; i < n; i++) {
        if (strcmp(names[i], names[smallest]) < 0) {
            smallest = i;
        }
    }
    cout<< names[smallest] << endl;

    return 0;
}
