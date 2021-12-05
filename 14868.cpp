#include <iostream>
#include <queue>

using namespace std;

int map[2001][2001];
int parent[100001];
int move_x[4] = {1, -1, 0, 0};
int mone_y[4] = {0, 0, 1, -1};

typedef struct {
	int x;
	int y;
} unit;

queue<unit> q, q2;

int find (int x){
	if (parent[x] == x){
		return x;
	} else{
		find(parent[x]);
	}
}

bool marge (int x, int y){
	x = find(x);
	y = find(y);

	if (x == y) {return false;}

	parent[x] = y;
	return true;
}

void bfs(){

}

void bfs2(){

}


int N, K;

int main(){
	cin >> N >> K;

	int ans=0;

	unit u;

	for (int i=1; i<=K; i++){
		cin >> u.x >> u.y;
		map[u.x][u.y] = i;
		parent[i] = i;
		q.push(u);
	}

	while (1){
		bfs();
		if (K==1){
			cout << ans << endl;
			return 0;
		}
		bfs2();
		ans++;
	}
}
