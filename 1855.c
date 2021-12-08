#include <stdio.h>
#include <string>

int main(){
    int k;
    scanf("%d\n", &k);
	int cnt=k-1;
    char k0[200];
    scanf("%s", k0);

    for (int i=0; i<k; i++){
		for (int j=0; j<strlen(k0)/k; j++){
			if (j%2){
				putchar(k0[j*k+cnt]);
			} else{putchar(k0[j*k+i]);}
		}
		cnt--;
	}
	return 0;
}