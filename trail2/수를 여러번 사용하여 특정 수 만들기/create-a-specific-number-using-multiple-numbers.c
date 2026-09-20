#include <stdio.h>

int a, b, c;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    
    int max_val = 0;
    
    // a를 i번, b를 j번 더하는 모든 경우의 수 확인
    for (int i = 0; i * a <= c; i++) {
        for (int j = 0; i * a + j * b <= c; j++) {
            int current = i * a + j * b;
            if (current > max_val) {
                max_val = current;
            }
        }
    }
    
    printf("%d\n", max_val);
    
    return 0;
}