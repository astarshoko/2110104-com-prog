#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<char> c;
    multiset<char> c1, c2;
    string s;
    for(int j=0;j<2;j++){
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(j==0)c1.insert(tolower(s[i]));
        else{
            c2.insert(tolower(s[i]));
        }
        c.insert(tolower(s[i]));
    }
    }
    c.erase(' ');
    c1.erase(' ');
    c2.erase(' ');
    bool rilorfek = c1 == c2;
    if(rilorfek){
        cout << "YES";
    }
    else cout << "NO";
    // int comp=0;
    // for(auto x:c){
    //     int n=count(c.begin(),c.end(),x);
    //     if(n%2==1){
    //         cout << "NO";
    //         return 0;
    //     }
    // }
    // cout << "YES";
}