#include <iostream>
#include <queue>

using namespace std;

int map[2001][2001];
int parent[100001];

struct unit{
	int x;
	int y;
};

queue<unit> q, q2;

int find (int x){
	if (parent[x] == x){
		return x;
	} else{
		find(parent[x])
	}
}



int N, K;



int main(){



	return 0;
}
