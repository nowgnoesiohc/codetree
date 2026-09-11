#include <stdio.h>
#define MAX_N 100

int n;
int distance;
char direction;
int line[3000]={0};

int main() {
    scanf("%d", &n);
    int now = 1000;
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &distance, &direction);
        if(direction=='L'){
            for(int j = 0; j< distance; j++){
                now--;
                line[now]++;
            }
        }
        else{
            for(int j = 0; j< distance; j++){
                line[now]++;
                now++;
            }
        }
        // printf("%d %d\n", i, now);
        // for(int j = 989; j<= 1002; j++) printf("%d ", line[j]);
        // printf("\n");

    }
    int cnt = 0;
    for(int i=0;i<=2002;i++){
        if(line[i]>=2) cnt++;
    }
    
    printf("%d", cnt);
    return 0;
}