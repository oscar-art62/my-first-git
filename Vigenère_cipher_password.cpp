#include <bits/stdc++.h>
using namespace std;

// 把字母轉成 0~25
int charToNum(char c) {
    if (isupper(c)) return c - 'A';
    else return c - 'a';
}

// 從數字轉回字母，保持大小寫
char numToChar(int x, bool isUpper) {
    if (isUpper) return 'A' + x;
    else return 'a' + x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string plaintext, keyword;
    cin >> plaintext >> keyword;

    string ciphertext;
    int n = plaintext.size();
    int m = keyword.size();

    for (int i = 0; i < n; i++) {
        char p = plaintext[i];
        char k = keyword[i % m]; // 重複 keyword

        int shift = charToNum(k); // keyword 的偏移量
        bool isUpper = isupper(p);

        int pVal = charToNum(p);
        int cVal = (pVal + shift) % 26;
        char c = numToChar(cVal, isUpper);

        ciphertext.push_back(c);
    }

    cout << ciphertext << "\n";
    return 0;
}
