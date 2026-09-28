#include <stdio.h>

int n;
int x[101], y[101];

// 4개 값 중 최댓값을 구하는 함수
int max4(int a, int b, int c, int d) {
    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    return (max1 > max2) ? max1 : max2;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int min_m = n; // 최댓값 M의 최솟값을 저장할 변수

    // x = a (짝수 직선)
    for (int a = 2; a <= 100; a += 2) {
        // y = b (짝수 직선)
        for (int b = 2; b <= 100; b += 2) {
            int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

            // N개의 점에 대해 4개 구역 개수 세기
            for (int i = 0; i < n; i++) {
                if (x[i] > a && y[i] > b) q1++;      // 1사분면 (우상)
                else if (x[i] < a && y[i] > b) q2++; // 2사분면 (좌상)
                else if (x[i] < a && y[i] < b) q3++; // 3사분면 (좌하)
                else if (x[i] > a && y[i] < b) q4++; // 4사분면 (우하)
            }

            // 4개 구역 중 가장 많은 점의 개수
            int current_max = max4(q1, q2, q3, q4);

            // M의 최솟값 갱신
            if (current_max < min_m) {
                min_m = current_max;
            }
        }
    }

    printf("%d\n", min_m);

    return 0;
}