#include <stdio.h>
#include <string.h>
#define LuongCB 1500000

struct Nhanvien {
    char MaNv[20];
    char Hoten[50];
    int songaycong;
    long luong;
};

// Tính lương dựa trên số ngày công
long tinhLuong(int ngay)
{
    if (ngay == 25) {
        return LuongCB * 25;
    } else if (ngay < 25) {
        return LuongCB * ngay;
    } else {
        int du = ngay - 25;
        return LuongCB * 25 + du * 2;
    }
}

// Xuất thông tin nhân viên
void xuatNhanvien(struct Nhanvien nv)
{
    printf("%-10s %-20s %-12d %-15ld\n", nv.MaNv, nv.Hoten, nv.songaycong, nv.luong);
}

// Sắp xếp tăng dần theo số ngày công
void sapxepTangdan(struct Nhanvien a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].songaycong > a[j].songaycong) {
                struct Nhanvien tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    struct Nhanvien nv[5];
    
    // Nhập thông tin 5 nhân viên
    for (int i = 0; i < 5; i++) {
        printf("\n--- Nhân viên %d ---\n", i + 1);
        printf("Nhập mã nhân viên: ");
        scanf("%19s", nv[i].MaNv);
        getchar();
        printf("Nhập họ tên: ");
        fgets(nv[i].Hoten, sizeof(nv[i].Hoten), stdin);
        // Xóa ký tự newline từ fgets
        nv[i].Hoten[strcspn(nv[i].Hoten, "\n")] = '\0';
        printf("Nhập số ngày công: ");
        scanf("%d", &nv[i].songaycong);
        nv[i].luong = tinhLuong(nv[i].songaycong);
    }
    
    // Sắp xếp theo số ngày công tăng dần
    sapxepTangdan(nv, 5);
    
    // Xuất thông tin
    printf("\n===== Danh sách nhân viên (theo ngày công tăng dần) =====\n");
    printf("%-10s %-20s %-12s %-15s\n", "Mã NV", "Họ tên", "Ngày công", "Lương");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        xuatNhanvien(nv[i]);
    }
    
    return 0;
}
