#include <stdio.h>
#include <string.h>
int main(){
    int n, m, i, j, a, count=0;
    scanf("%d %d", &n, &m);
    if ((n-m)>0)
        a=m;
    else
        a=n;
    
    char nn[n][21], nm[m][21], e[a][21], tmp[21];
    
    for (i=0; i<n; i++)
        scanf("%s", nn[i]);
    
    for (i=0; i<m; i++)
        scanf("%s", nm[i]);
    
    for (i=n; i!=0; i--)
        for (j=m; j!=0; j--){
            if (!strcmp(nn[i-1], nm[j-1])){
                count++;
                strcpy(e[count-1], nn[i-1]);
                break;
            }
        }
    
    
    for (i=0; i<count; i++)
        for (j=count-1; j>i; j--)
            if (strcmp(e[j-1], e[j])>0){
                strcpy(tmp, e[j-1]);
                strcpy(e[j-1], e[j]);
                strcpy(e[j], tmp);
            }
    
    printf("%d\n", count);
    for (i=0; i<count; i++)
        printf("%s\n", e[i]);
    
   return 0;
}
