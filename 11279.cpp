#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main(){
	int N, a;
	cin >> N;

	for (int i=0; i<N; i++){
		cin >> a;

		if (a==0){
			if (pq.empty()){cout<<"0"<<endl;}
			else {
				cout<<pq.top()<<endl;
				pq.pop();
				}
		}
		else {
			pq.push(a);
		}
	}
	return 0;
}