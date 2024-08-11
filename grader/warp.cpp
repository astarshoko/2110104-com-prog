// most part of this code come from Warp II with literally NO implement
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
vector<pair<int,int>> ans[10000000];
int n, a, b, cnt=0, count=0;
bool founded=false;

void find(int p) {
	if(p==b) {
		founded=true;
		return;
	}
	for(int i=0; i<n; i++) {
		if(p==v[i].first) {
			if(v[i].second==b) {
				ans[cnt].push_back({p,b});
				founded=true;
				return;
			}
			else {
				find(v[i].second);
				if(founded) {
					ans[cnt].push_back({p,v[i].second});
					return;
				}
			}
		}
	}
}

int main() {
	cin >> n >> a >> b;
	for(int i=0; i<n; i++) {
		int p, q;
		cin >> p >> q;
		v.push_back({p,q});
	}
	sort(v.begin(),v.end());

	for(int i=0; i<n; i++) {
		if(v[i].first == a) {
			find(v[i].second);
			if(founded) {
				ans[cnt].push_back({a,v[i].second});
			}
		}
		if(founded) {
			founded=false;
			cnt++;
		}
	}
	if(cnt==0 && ans[0].empty()) {
		cout << "no" << endl;
		return 0;
	}
    else {
        cout << "yes";
        return 0;
    }
	return 0;
}