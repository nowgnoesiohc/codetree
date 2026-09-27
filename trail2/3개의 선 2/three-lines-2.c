#include <stdio.h>

int n;
int x[20], y[20];

// 선택한 3개의 선으로 모든 점을 지날 수 있는지 검사
int check(int t1, int v1, int t2, int v2, int t3, int v3) {
    for (int i = 0; i < n; i++) {
        int covered = 0;
        // t == 0 이면 세로선(x = v), t == 1 이면 가로선(y = v)
        if ((t1 == 0 && x[i] == v1) || (t1 == 1 && y[i] == v1)) covered = 1;
        if ((t2 == 0 && x[i] == v2) || (t2 == 1 && y[i] == v2)) covered = 1;
        if ((t3 == 0 && x[i] == v3) || (t3 == 1 && y[i] == v3)) covered = 1;

        // 3개의 선 중 어느 것에도 포함되지 않는 점이 있다면 실패
        if (!covered) return 0;
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    // 3개의 선 각각에 대해 (종류 2가지 x 위치 11가지 = 22가지) 대입
    for (int t1 = 0; t1 < 2; t1++) {
        for (int v1 = 0; v1 <= 10; v1++) {
            for (int t2 = 0; t2 < 2; t2++) {
                for (int v2 = 0; v2 <= 10; v2++) {
                    for (int t3 = 0; t3 < 2; t3++) {
                        for (int v3 = 0; v3 <= 10; v3++) {
                            if (check(t1, v1, t2, v2, t3, v3)) {
                                printf("1\n");
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("0\n");
    return 0;
}