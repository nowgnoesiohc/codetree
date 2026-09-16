#include <stdio.h>

int a[101];
int b[101];
int c[101];

int loc[4];

int swap(int n, int m){
    int tmp = loc[n];
    loc[n] = loc[m];
    loc[m] = tmp;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }
    int max = 0; // 최댓값
    for (int i = 1; i <= 3; i++) {
        int score = 0;
        // 처음에 돌 넣기
        for(int j = 1; j <= 3; j++){
            if(i==j) loc[j] = 1;
            else loc[j] = 0;
        }

        for(int j = 0; j < n ; j++){
            swap(a[j], b[j]);
            if(loc[c[j]] == 1) score++;
        }

        if(score > max) max = score;
    }
    printf("%d", max); 
    
    return 0;
}