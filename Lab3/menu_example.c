#include <stdio.h>
#include <stdlib.h>

// Hàm hiển thị menu
void hienThiMenu() {
    printf("\n========== MENU CHINH ==========\n");
    printf("1. Cong hai so\n");
    printf("2. Tru hai so\n");
    printf("3. Nhan hai so\n");
    printf("4. Chia hai so\n");
    printf("5. Thoat\n");
    printf("================================\n");
    printf("Nhap lua chon cua ban: ");
}

// Các hàm xử lý
float cong(float a, float b) {
    return a + b;
}

float tru(float a, float b) {
    return a - b;
}

float nhan(float a, float b) {
    return a * b;
}

float chia(float a, float b) {
    if (b == 0) {
        printf("Loi: Khong the chia cho 0!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int luaChon;
    float so1, so2, ketQua;

    while (1) {
        hienThiMenu();
        scanf("%d", &luaChon);

        if (luaChon == 5) {
            printf("Cam on da su dung chuong trinh. Tam biet!\n");
            break;
        }

        if (luaChon >= 1 && luaChon <= 4) {
            printf("Nhap so thu nhat: ");
            scanf("%f", &so1);
            printf("Nhap so thu hai: ");
            scanf("%f", &so2);

            switch (luaChon) {
                case 1:
                    ketQua = cong(so1, so2);
                    printf("Ket qua: %.2f + %.2f = %.2f\n", so1, so2, ketQua);
                    break;
                case 2:
                    ketQua = tru(so1, so2);
                    printf("Ket qua: %.2f - %.2f = %.2f\n", so1, so2, ketQua);
                    break;
                case 3:
                    ketQua = nhan(so1, so2);
                    printf("Ket qua: %.2f x %.2f = %.2f\n", so1, so2, ketQua);
                    break;
                case 4:
                    ketQua = chia(so1, so2);
                    printf("Ket qua: %.2f / %.2f = %.2f\n", so1, so2, ketQua);
                    break;
            }
        } else {
            printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    }

    return 0;
}
