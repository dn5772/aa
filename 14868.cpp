#include <iostream>
#include <queue>

using namespace std;

int map[2001][2001];
int parent[100001];
int move_x[4] = {1, -1, 0, 0};
int move_y[4] = {0, 0, 1, -1};

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
	unit cur_u, u;

	while (!q.empty()){
		cur_u = q.front();
		q2.push(cur_u);
		q.pop();

		for (int i=0; i<4; i++){
			u.x = cur_u.x + move_x[i];
			u.y = cur_u.y + move_y[i];

			if ((0<u.x<=N) && (0<u.y<=N)){
				if (marge(map[u.x][u.y], map[cur_u.x][cur_u.y])){
					k--;
				}
			}
		}
	}
}

void bfs2(){
	unit cur_u, u;

	while (!q.empty()){
		cur_u = q2.front();
		q2.pop()

		for (int i=0; i<4; i++){
			u.x = cur_u.x + move_x[i];
			u.y = cur_u.y + move_y[i];

			if ((0<u.x<=N) && (0<u.y<=N)){
				if (map[u.x][u.y] == 0){
					map[u.x][u.y] = map[cur_u.x][cur_u.y];
                    q.push(u);
				}
			}
		}
	}
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
