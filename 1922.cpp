#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int parent[100001];
struct adge {
	int value;
	int a;
	int b;
};

vector <adge> node;

int find(int x) {
	if (x == parent[x]) {
		return x;
	}
	else {
		return parent[x] = find(parent[x]);
	}
}

bool compare(adge v1, adge v2) {
	if (v1.value < v2.value) {
		return true;
	}
	else {
		return false;
	}
}

void Union(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y) parent[y] = x;
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < 100001; i++)
	{
		parent[i] = i;
	}

	int a, b, c;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		node.push_back({ c,a,b });
	}

	sort(node.begin(), node.end(),compare);
	
	int total = 0;
	for (int i = 0; i < M; i++)
	{
	        if (find(node[i].a) != find(node[i].b)) {
			Union(node[i].a, node[i].b);
			total += node[i].value;
		}
	}

	cout << total;
	
	return 0;
}