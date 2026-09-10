#include <stdio.h>

int n;
int a, b;
int line[101]={0};

int main() {
    int i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        for(j = a; j <= b; j++){
            line[j]++;
        }
    }
    int max = 0;
    for(i = 1; i <= 100; i++){
        if(max<line[i]) max = line[i];
    }
    
    printf("%d", max);

    return 0;
}