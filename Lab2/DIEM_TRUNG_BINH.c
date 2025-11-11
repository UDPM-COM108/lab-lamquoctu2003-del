//BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
#include <stdio.h>


int main() {
    float toan, ly, hoa, trungBinh;

    // Nhập điểm các môn
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    trungBinh = (toan + ly + hoa) / 3;

    // Xuất kết quả
    printf("Diem trung binh = %.2f\n", trungBinh);

    return 0;
}

