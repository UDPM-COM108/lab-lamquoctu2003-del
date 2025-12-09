
#include <stdio.h>
// định nghĩa hàm
void nhapmang(int a[5])
{
    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[5])
{
    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
}
int main()
{
    int a[5];
    printf("nhập mảng: ");
    nhapmang(a);
    printf("xuất mảng: ");
    xuatmang(a);
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 6 == 0)
        {
            printf("xuất các phần tử chia hết cho 6: %d\n", a[i]);
        }
    }
    return 0;

// BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
#include <stdio.h>
#include <stdio.h>

    int n, i;
    int a[100];
    int sum = 0, count = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    // Nhập mảng
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    // Tính tổng và đếm số chia hết cho 3
    for (i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            sum += a[i];
            count++;
        }
    }
    // Kết quả
    if (count == 0)
    {
        printf("Khong co phan tu nao chia het cho 3.\n");
    }
    else
    {
        float tbc = (float)sum / count;
        printf("Trung binh cac so chia het cho 3 la: %.2f\n", tbc);
    }
    return 0;

// BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
#include <stdio.h>
#include <stdio.h>

    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    // Nhap mang
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Giả sử phần tử đầu tiên là max và min
    int max = a[0];
    int min = a[0];
    // Tìm max và min
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    // In kết quả
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
    return 0;
}
