#include<bits/stdc++.h>
using namespace std;

int lengthoflastword(string& s){
    int length = 0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i] != ' '){
            length++;
        }
        else if(length>0){
            break;
        }
    }
    return length;

}

int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    int ans = lengthoflastword(s);
    cout<<ans;
    return 0;

}