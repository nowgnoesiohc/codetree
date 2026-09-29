#include <stdio.h>

char inp[3][4];
int board[3][3];
int won[10][10]; // won[p][q] : 팀 {p, q}가 이겼는지 여부 (p < q)

void check_line(int x, int y, int z) {
    // 1종류만 등장한 경우 (개인 승리)
    if (x == y && y == z) return;
    
    // 3종류 모두 다른 경우
    if (x != y && y != z && x != z) return;
    
    // 정확히 2종류가 등장한 경우
    int p, q;
    if (x == y) {
        p = x; q = z;
    } else if (x == z) {
        p = x; q = y;
    } else { // y == z
        p = y; q = x;
    }
    
    // 팀 구성 번호를 정렬하여 p < q 형태로 저장
    if (p > q) {
        int temp = p;
        p = q;
        q = temp;
    }
    
    won[p][q] = 1;
}

int main() {
    int i, j;
    
    for (i = 0; i < 3; i++)
        scanf("%s", inp[i]);
        
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            board[i][j] = inp[i][j] - '0';
            
    // 1. 가로 3줄 검사
    for (i = 0; i < 3; i++) {
        check_line(board[i][0], board[i][1], board[i][2]);
    }
    
    // 2. 세로 3줄 검사
    for (j = 0; j < 3; j++) {
        check_line(board[0][j], board[1][j], board[2][j]);
    }
    
    // 3. 대각선 2줄 검사
    check_line(board[0][0], board[1][1], board[2][2]);
    check_line(board[0][2], board[1][1], board[2][0]);
    
    // 이긴 팀 개수 세기 (중복 없음)
    int ans = 0;
    for (i = 1; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            if (won[i][j]) {
                ans++;
            }
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}