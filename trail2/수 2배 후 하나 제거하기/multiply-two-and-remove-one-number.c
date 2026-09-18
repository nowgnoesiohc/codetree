#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int n;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_score = INT_MAX;

    // 1. 2배로 만들 원소 인덱스 i 선택
    for (int i = 0; i < n; i++) {
        // 2. 제거할 원소 인덱스 j 선택
        for (int j = 0; j < n; j++) {
            int temp[100];
            int temp_cnt = 0;

            // 새로운 배열 구성
            for (int k = 0; k < n; k++) {
                if (k == j) continue; // 제거할 원소는 스킵

                if (k == i) {
                    temp[temp_cnt++] = arr[k] * 2;
                } else {
                    temp[temp_cnt++] = arr[k];
                }
            }

            // 3. 인접한 원소 간 차의 절댓값 합 계산
            int current_score = 0;
            for (int k = 0; k < temp_cnt - 1; k++) {
                current_score += abs(temp[k] - temp[k + 1]);
            }

            // 4. 최솟값 갱신
            if (current_score < min_score) {
                min_score = current_score;
            }
        }
    }

    printf("%d\n", min_score);

    return 0;
}