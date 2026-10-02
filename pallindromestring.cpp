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

int main()
{
    string s;
    getline(cin, s);
    bool ans = isPalindrome(s);
    cout << ans << endl;

    return 0;
}