#include <stdio.h>

int n;
int x1;
int x2;
int line[201]={0};

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1, &x2);
        for(int j =x1; j<x2; j++){
            line[j+100]++;
        }
    }
    int max = 0;
    for(int i=1; i<=200; i++){
        if(max<line[i]) max = line[i];
    }
    printf("%d", max);
    return 0;
}