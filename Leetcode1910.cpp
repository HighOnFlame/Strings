#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part){
    while (s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main()
{
    string s;
    cout << "Enter String : " ;
    getline(cin, s);

    string part;
    cout << "Enter Part : " ;
    getline(cin, part);

    string ans = removeOccurrences(s, part);
    cout << ans << endl;

    return 0;
}