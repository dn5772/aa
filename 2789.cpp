#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	char* cam = (char*) "CAMBRIDGE";

	while (1){
		char a = getchar();
		if (a == '\n'){
			return 0;
		}
		for (int i=0; i<10; i++){
			if (!(a == cam[i])){
				putchar(a);
			}
		}
	}

}