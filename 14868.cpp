#include <iostream>
#include <queue>

using namespace std;

int map[2001][2001];
int parent[100001];
int move_x[4] = {1, -1, 0, 0};
int mone_y[4] = {0, 0, 1, -1};

struct unit{
	int x;
	int y;
};

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






int N, K;

int main(){
	cin >> N >> K;

	int x, y;

	for (int i=1; i<=K; i++){
		cin >> x >> y;
		map[x][y] = i;
		parent[i] = i;
	}




	return 0;
}
