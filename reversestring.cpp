#include <bits/stdc++.h>
using namespace std;

void reversestring(string& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string s;
    getline(cin,s);
    reversestring(s);
    cout<<s<<endl;

    reverse(s.begin(),s.end());
    cout<<s<<endl;


    return 0;
}