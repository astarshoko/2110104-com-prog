#include <iostream>
using namespace std;
const int R = 7, C = 7;
int st[4]= {-1,0,0,1};
int wt[4]= {0,1,-1,0};


void floodfill(int x[][C], int r, int c, int e) {
    if(r < 0 || r >= R || c < 0 || c >= C || x[r][c] != 0) {
        return;
    }
    x[r][c] = e;
    for(int i=0; i<4; i++){
        floodfill(x, r+st[i], c+wt[i], e);
    }
}

int main() {
	int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
	for (int r=0; r<R; ++r)
		for (int c=0; c<C; ++c)
			cin >> x[r][c];
	int row, col, e;
	cin >> row >> col >> e;
	floodfill(x, row, col, e);
	for (int r=0; r<R; ++r) {
		for (int c=0; c<C; ++c)
			cout << x[r][c] << ' ';
		cout << endl;
	}
}