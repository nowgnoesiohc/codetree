#include <stdio.h>

int n, k;
int a, b;
int block[101]={0};

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d %d", &a, &b);
        for(int j = a; j<=b; j++){
            block[j]++;
        }
    }
    int max=0;
    for(int i=1; i<=n; i++){
        if(max<block[i]) max = block[i];
    }
    
    printf("%d", max);
    return 0;
}