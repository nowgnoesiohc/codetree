#include <stdio.h>

#define MAX_SIZE 200005
#define OFFSET 100000

// 각 위치별 상태 (0: 미칠함, 1: 흰색, 2: 검은색, 3: 회색)
int white_cnt[MAX_SIZE];
int black_cnt[MAX_SIZE];
int color[MAX_SIZE];

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        scanf("%d %c", &x, &dir);

        if (dir == 'L') {
            for (int j = 0; j < x; j++) {
                int pos = cur - j;
                white_cnt[pos]++;
                
                // 이미 회색(3)이 된 타일은 색이 더 이상 변하지 않음
                if (color[pos] != 3) {
                    if (white_cnt[pos] >= 2 && black_cnt[pos] >= 2) {
                        color[pos] = 3; // 회색
                    } else {
                        color[pos] = 1; // 흰색
                    }
                }
            }
            cur = cur - (x - 1); // 마지막으로 칠한 위치로 이동
        } 
        else if (dir == 'R') {
            for (int j = 0; j < x; j++) {
                int pos = cur + j;
                black_cnt[pos]++;
                
                // 이미 회색(3)이 된 타일은 색이 더 이상 변하지 않음
                if (color[pos] != 3) {
                    if (white_cnt[pos] >= 2 && black_cnt[pos] >= 2) {
                        color[pos] = 3; // 회색
                    } else {
                        color[pos] = 2; // 검은색
                    }
                }
            }
            cur = cur + (x - 1); // 마지막으로 칠한 위치로 이동
        }
    }

    // 결과 집계
    int white = 0, black = 0, gray = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (color[i] == 1) white++;
        else if (color[i] == 2) black++;
        else if (color[i] == 3) gray++;
    }

    printf("%d %d %d\n", white, black, gray);

    return 0;
}