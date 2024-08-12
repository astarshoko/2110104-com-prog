#include<bits/stdc++.h>
using namespace std;

string svalue[]={"soon", "neung", "song", "sam", "si", "ha", "hok", "chet", "paet", "kao"
"et", "yi", "sip", "roi", "phan", "muen", "saen", "lan"};
int value[]={0,1,2,3,4,5,6,7,8,9,1,20,10,100,1000,10000,100000,1000000};

int main(){
    int value;
    while(true){
        vector<string> v;
        string s, temp="";
        getline(cin,s);
        if(s=="")break;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' || i==s.length()-1){
             v.push_back(temp);
             temp="";   
            }
            else temp+=s[i];
        }
        for(auto x:v)cout << x << " ";
    }
    
}