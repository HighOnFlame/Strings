#include <bits/stdc++.h>
using namespace std;

bool isfreqsame(int freq1[], int freq2[]){
    for (int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool checkinclusion(string &s1, string &s2){
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++){
        int windind = 0, idx = i;
        int windfreq[26] = {0};

        while (windind < s1.length() && idx < s2.length()){
            windfreq[s2[idx] - 'a']++;
            windind++;
            idx++;
        }

        if (isfreqsame(freq, windfreq))
        {
            return true;
        }
    }
    return false;
}

bool checkinclusion2(string &s1, string& s2){
    if (s1.length() > s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());

    int n = s1.length();

    for(int i=0;i<=s2.length()-n;i++){
        string temp = s2.substr(i,n);
        sort(temp.begin(),temp.end());

        if(temp == s1){
            return true;
        }
    }
    return false;
}



int main()
{
    string s1;
    cout << "Enter string1 : ";
    getline(cin, s1);

    string s2;
    cout << "Enter string2 : ";
    getline(cin, s2);

    bool ans = checkinclusion2(s1,s2);

    cout<<ans;

    return 0;
}