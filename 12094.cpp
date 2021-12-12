#include <iostream>
#include <algorithm>

#define up 0
#define down 1
#define left 2
#define rigt 3

using namespace std;

int N, maxn=0, bord[21][21];
int mov_x[4] = {0, 0, -1, 1};
int mov_y[4] = {-1, 1, 0, 0};

void move(int i){

}

void game (int a, int *bord_mov){
	int check[21][21], bord_ans[21][21];

	if (a == N+1){return;}

	for (int i=0; i<4; i++){
		
		for (int x=1; x<=N; x++){
			for (int y=1; y<=N; y++){
				int xx = x+mov_x[i];
				int yy = y+mov_y[i];

				if ((xx<1 && N<xx) && (yy<1 && N<yy)){
					bord_ans[y][x] = bord[y][x];
					break;
				} else {
					while (bord_ans[yy][xx]==0)
					{
						xx =+ mov_x[i];
						yy =+ mov_y[i];
					}

					// if (bord)
					

				}
			}
		}
	}
}

int main(){
	cin >> N;

	for (int i=1; i<=N; i++){
		for (int j=1; j<=N; j++){
			cin >> bord[i][j];
			if (bord[i][j] > maxn){maxn = bord[i][j];}
		}
	}

	game (0, bord[21]);

	cout << maxn << endl;

}