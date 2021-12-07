#include <stdio.h>
#include <queue>

using namespace std;

priority_queue<unsigned long> pq;

int main(){
	int N;
	unsigned long a;
	scanf("%d", &N);

	for (int i=0; i<N; i++){
		scanf("%ld", &a);

		if (a==0){
			if (pq.empty()){printf("0\n");}
			else {
				printf("%ld", pq.top());
				pq.pop();
				}
		}
		else {
			pq.push(a);
		}
	}
	return 0;
}