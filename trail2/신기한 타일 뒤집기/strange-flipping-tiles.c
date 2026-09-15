#include <stdio.h>

int main() {
    int n, line[200000]={0};
    scanf("%d", &n);
    int cur = 10000;
    int x;
    char c;
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x, &c);
        if(c=='L'){
            for(int j = 0; j<x; j++){
                line[cur--] = 1;
            }
            cur++;
        }
        else{
            for(int j = 0; j<x; j++){
                line[cur++] = 2;
            }
            cur--;
        }
    }
    int white = 0, black = 0;
    for(int j = 0; j<200000; j++){
        if(line[j]==2) black++;
        else if(line[j]==1) white++;
    }

    printf("%d %d", white, black);
    
    // Please write your code here.
    return 0;
}