#include <iostream>
#include <algorithm>

using namespace std;

int N, cnt=0, ans=0;

int col[16];

bool promising (int i){
	int k;
	bool swit;

	k = 1;
	swit = true;

	while (k<i&&swit)
	{
		if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i-k)){
			swit = false;
		}
		k++;
	}
	return swit;
}

void queens(int i){
	int j;

	if (i == N && promising(i)) {
		ans++;
	}

	if (promising(i)){
		for (j=1; j<=N; j++){
			col[i+1] = j;
			queens(i+1);
		}
	}
}

int main(){

	cin >> N;

	queens(0);

	cout << ans << endl;

	return 0;
}