#include <iostream>
// #include "List.cpp"
// #include "String.cpp"

using namespace std;


int main(void){
	char word[100];
	char* cam = (char*) "CAMBRIDGE";
	char answer[100];
	int cnt = 0;
	
	cin.getline(word, 100);

	// cout << word[0] << "\n" << cam[3] << endl;

	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			if ((word[i] != cam[j])){

				answer[cnt] = word[i];
				cnt++;
				cout<<cnt;
				
			}
		}
	}

	answer[cnt-1] = '\0';

	cout << answer;

	return 0;
}