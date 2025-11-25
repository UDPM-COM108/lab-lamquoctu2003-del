#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bai1()
{
    double dtb;
    printf("\n--- BAI 1: PHAN LOAI KET QUA HOC TAP ---\n");
    printf("Nhap diem trung binh: ");
    if (scanf("%lf", &dtb) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }
    if (dtb >= 9)
        printf("Xuat sac\n");
    else if (dtb >= 8)
        printf("Gioi\n");
    else if (dtb >= 7)
        printf("Kha\n");
    else if (dtb >= 5)
        printf("Trung binh\n");
    else
        printf("Yeu\n");
}

void giaiPTBac1()
{
    double a, b, x;
    printf("\n--- GIAI PHUONG TRINH BAC 1: ax + b = 0 ---\n");
    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }
    if (a == 0)
    {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    }
    else
    {
        x = -b / a;
        printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
    }
}

void giaiPTBac2()
{
    double a, b, c, delta, x1, x2;
    printf("\n--- GIAI PHUONG TRINH BAC 2: ax^2 + bx + c = 0 ---\n");
    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }
    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }
    printf("Nhap c: ");
    if (scanf("%lf", &c) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Nhap khong hop le.\n");
        return;
    }

    if (a == 0)
    {
        /* Chuyen ve phuong trinh bac 1 */
        if (b == 0)
        {
            if (c == 0)
                printf("Phuong trinh vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        }
        else
        {
            x1 = -c / b;
            printf("Phuong trinh co 1 nghiem: x = %2f\n", x1);
        }
        return;
    }

    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem rieng biet: \n");
        printf("x1 = %2f\n", x1);
        printf("x2 = %2f\n", x2);
    }
}

int main(void)
{
    int chon = -1;
    do
    {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Bai 1 - Phan loai diem\n");
        printf("2. Bai 2 - Giai phuong trinh bac 1\n");
        printf("3. Bai 3 - Giai phuong trinh bac 2\n");
        printf("0. Thoat\n");
        printf("Moi ban chon chuc nang: ");
        if (scanf("%d", &chon) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Nhap khong hop le. Vui long nhap so.\n");
            chon = -1;
            continue;
        }

        switch (chon)
        {
        case 1:
            bai1();
            break;
        case 2:
            giaiPTBac1();
            break;
        case 3:
            giaiPTBac2();
            break;
        case 0:
            printf("Dang thoat chuong trinh...\n");
            break;
        default:
            printf("Lua chon khong hop le, vui long chon lai!\n");
            break;
        }
    } while (chon != 0);

    return 0;
}
