#include <stdio.h>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main(){
	int N;
	int a;
	scanf("%d", &N);

	for (int i=0; i<N; i++){
		scanf("%d", &a);

		if (a==0){
			if (pq.empty()){printf("0\n");}
			else {
				printf("%d\n", pq.top());
				pq.pop();
				}
		}
		else {
			pq.push(a);
		}
	}
	return 0;
}