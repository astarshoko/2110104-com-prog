#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,string> m;
    for(int i=0;i<n;i++){
        string a, b;
        cin >> a >> b;
        m[a]=b;
        m[b]=a;
    }
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(m[s].empty())cout << "Not found\n";
        else cout << m[s] << "\n";
    }
}