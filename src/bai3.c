#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// --- INTERFACE BẮT BUỘC - KHÔNG ĐỔI CHỮ KÝ HÀM ---
void lamMoMaTran(int src[][MAX_COLS], int dest[][MAX_COLS], int row, int col);

#ifndef UNIT_TEST
int main() {
    int row, col;
    int src[MAX_ROWS][MAX_COLS];
    int dest[MAX_ROWS][MAX_COLS];

    printf("Nhap so hang (row > 0) va so cot (col > 0): ");
    scanf("%d %d", &row, &col);

    if (row <= 0 || col <= 0 || row > MAX_ROWS || col > MAX_COLS) {
        printf("Kich thuoc ma tran khong hop le!\n");
        return 0;
    }

    printf("Nhap cac phan tu ma tran anh goc (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("  src[%d][%d] = ", i, j);
            scanf("%d", &src[i][j]);
        }
    }

    lamMoMaTran(src, dest, row, col);

    printf("\n--- KET QUA LAM MO ANH (BOX BLUR 3x3) ---\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d ", dest[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#endif

// --- SINH VIÊN VIẾT CODE CỦA HÀM DƯỚI ĐÂY ---
// Bộ lọc Box Blur 3x3: Tính trung bình các ô lân cận hợp lệ trong phạm vi ma trận
void lamMoMaTran(int src[][MAX_COLS], int dest[][MAX_COLS], int row, int col) {
    if (row <= 0 || col <= 0) return;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int tong = 0;
            int count = 0;
            for (int r = i - 1; r <= i + 1; r++) {
                for (int c = j - 1; c <= j + 1; c++) {
                    if (r >= 0 && r < row && c >= 0 && c < col) {
                        tong += src[r][c];
                        count++;
                    }
                }
            }
            dest[i][j] = (count > 0) ? (tong / count) : 0;
        }
    }
}
