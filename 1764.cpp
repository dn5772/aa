#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define N 500000
int n, m, k;

int main(){
    int i, j, com, count=0;

    scanf("%d %d\n", &n, &m);
    if ((n-m)>0)
        k=m;
    else
        k=n;
    vector<string> d(n), b(m), a(k);
    char *tmp;

    for (i=0; i<n; i++){
        cin >> d[i];
    }
    
    for (i=0; i<m; i++){
        cin >> b[i];
    }
	
	sort(d.begin(), d.end());
    sort(b.begin(), b.end());

    for (i=0; i<n; i++)
        for (j=0; j<m; j++){
            com = d[i].compare(b[j]);
            if (com < 0){break;}

            if (com == 0){
                a[count++] = d[i];
                break;
            }
        }
    
    printf("%d\n", count);

    for (i=0; i<count; i++)
        cout << a[i] << endl;
    
   return 0;
}