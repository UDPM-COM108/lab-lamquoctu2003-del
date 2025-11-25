// Bai1:TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
#include <stdio.h>
#include <math.h>
int main()
{
    int min, max;
    int i;
    float tong = 0, bienDem = 0, trungBinh;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    i = min;
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            tong += i;
            bienDem++;
        }
        i++;
    }
    if (bienDem > 0)
    {
        trungBinh = tong / bienDem;
        printf("Trung binh cac so chia het cho 2 la: %.2f\n", trungBinh);
    }
    else
    {
        printf("Khong co so nao chia het cho 2 trong khoang nay.\n");
    }
    return 0;

// Bai2:Xac dinh so nguyen
#include <stdio.h>
#include <math.h>
    int x;
    int count = 0;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (x <= 1)
    {
        printf("khong phai la so nguyen to: %d\n", x);
        return 0;
    }
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("day la so nguyen to: %d.\n", x);
    }
    else
    {
        printf("day khong phai la so nguyen to: %d.\n", x);
    }
    return 0;

// bai 3:XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
#include <stdio.h>
#include <math.h>

    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("day khong phai la so chinh phuong %d.\n", x);
    }
    else {
        printf("day la so chinh phuong %d\n",x);
    }
     int can = sqrt(x);  

    if (can * can == x) {
        printf("day la so chinh phuong %d.\n", x);
    } else {
        printf("day khong phai la so chinh phuong %d.\n", x);
    }
    return 0;

    // bai4:XÂY DỰNG CHƯƠNG TRÌNH CHO CÁC BẠN TRÊN.
#include <stdio.h>
#include <math.h>

    int choice;
    do
    {
        printf("\n=== MENU CHUONG TRINH ===\n");
        printf("1. Bai 1: Tinh trung binh tong cac so tu nhien chia het cho 2 (tu min den max)\n");
        printf("2. Bai 2: Xac dinh so nguyen to\n");
        printf("3. Bai 3: Xac dinh so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            // Bài 1: Tính trung bình tổng các số tự nhiên chia hết cho 2 (số chẵn)
            int min, max;
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            if (min > max)
            {
                printf("Min phai nho hon hoac bang max!\n");
                break;
            }
            float tong = 0;
            int bienDem = 0;
            float trungBinh = 0;
            int i = min;
            while (i <= max)
            {
                if (i % 2 == 0)
                {
                    tong += i;
                    bienDem++;
                }
                i++;
            }
            if (bienDem > 0)
            {
                trungBinh = tong / bienDem;
                printf("Trung binh tong cac so chan tu %d den %d: %.2f\n", min, max, trungBinh);
            }
            else
            {
                printf("Khong co so chan nao trong khoang tu %d den %d.\n", min, max);
            }
            break;
        }
        case 2:
        {
            // Bài 2: Xác định số nguyên tố
            int x;
            printf("Nhap so nguyen x: ");
            scanf("%d", &x);

            if (x <= 1)
            {
                printf("%d khong phai la so nguyen to.\n", x);
                break;
            }

            int count = 0;
            int i;
            for (i = 2; i < x; i++)
            {
                if (x % i == 0)
                {
                    count++;
                    break; 
                }
            }
            if (count == 0)
            {
                printf("%d la so nguyen to.\n", x);
            }
            else
            {
                printf("%d khong phai la so nguyen to.\n", x);
            }
            break;
        }
        case 3:
        {
            // Bài 3: Xác định số chính phương
            int x;
            printf("Nhap so nguyen x: ");
            scanf("%d", &x);
            if (x < 0)
            {
                printf("%d khong phai la so chinh phuong (vi la so am).\n", x);
                break;
            }

            // Tối ưu: Sử dụng sqrt thay vì vòng lặp
            int sqrtX = (int)sqrt(x);
            if (sqrtX * sqrtX == x)
            {
                printf("%d la so chinh phuong (vi %d * %d = %d).\n", x, sqrtX, sqrtX, x);
            }
            else
            {
                printf("%d khong phai la so chinh phuong.\n", x);
            }
            break;
        }
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);
    return 0;
}
