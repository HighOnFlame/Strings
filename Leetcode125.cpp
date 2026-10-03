#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){

    string temp;

    for (char ch : s){
        if (isalnum(ch)){
            temp += tolower(ch);
        }
    }

    int left = 0;
    int right = temp.size() - 1;

    while (left <= right){
        if (temp[left] != temp[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
};

bool ispalindrome2(string &s)
{
    int start = 0;
    int end = s.length();
    while (start < end){
        if (!isalnum(s[start])){
            start++;
            continue;
        }
        if (!isalnum(s[end])){
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    bool ans = ispalindrome2(s);
    cout << ans << endl;

    return 0;
}