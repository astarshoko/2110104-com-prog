#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<string,vector<string> > m;
	for(int i=0; i<n; i++) {
		string s;
		getline(cin,s);
		int a=s.find(',');
		string s1=s.substr(0,a), s2=s.substr(a+2);
		m[s1].push_back(s2);
	}
	bool lazy=0;
	string s, a="";
	getline(cin,s);
	for(int i=0; i<s.length(); i++) {
		if(lazy) {
			lazy=0;
			continue;
		}
		if(s[i]==',') {
			lazy=1;
			if(!m[a].empty()) {

				cout << a << " -> ";
				for(int j=0; j<m[a].size(); j++) { //iterate for more than1
					cout << m[a][j];
					if(j!=m[a].size()-1)cout << ", ";
				}
				cout << endl;
			}
			else {
				cout << a << " -> Not found\n";
			}
			a="";
		}
		else {
			a+=s[i];
		}
	}
	cout << a << " -> ";
	for(int j=0; j<m[a].size(); j++) { //iterate for more than1
		cout << m[a][j];
		if(j!=m[a].size()-1)cout << ", ";
	}
	if(m[a].empty())cout << "Not found";
}