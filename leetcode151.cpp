#include <bits/stdc++.h>
using namespace std;

string reversewords(string &s){
    reverse(s.begin(), s.end());
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++){
        string words = "";
        while (i < n && s[i] != ' '){
            words += s[i];
            i++;
        }
        reverse(words.begin(), words.end());
        if (words.length() > 0){
            ans += ' ' + words;
        }
    }
    return ans.substr(1);
}

int main()
{
    string s;
    cout << "Enter words : ";
    getline(cin, s);
    string ans = reversewords(s);
    cout << "Reversed words : " << ans;

    return 0;
}