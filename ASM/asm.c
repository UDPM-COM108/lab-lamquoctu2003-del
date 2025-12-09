#include <stdio.h>

int main()
{
    int chon;
    do
    {
        printf("===== CHUONG TRINH =====\n");
        printf("1. Chuc nang 1\n");
        printf("2. Chuc nang 2\n");
        printf("3. Chuc nang 3\n");
        printf("4. Chuc nang 4\n");
        printf("5. Chuc nang 5\n");
        printf("6. Chuc nang 6\n");
        printf("7. Chuc nang 7\n");
        printf("8. Chuc nang 8\n");
        printf("9. Chuc nang 9\n");
        printf("10. Chuc nang 10\n");
        printf("0. Thoat chuong trinh\n");

        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban dang chon chuc nang 1\n");
            break;
        case 2:
            printf("Ban dang chon chuc nang 2\n");
            break;
        case 3:
            printf("Ban dang chon chuc nang 3\n");
            break;
        case 4:
            printf("Ban dang chon chuc nang 4\n");
            break;
        case 5:
            printf("Ban dang chon chuc nang 5\n");
            break;
        case 6:
            printf("Ban dang chon chuc nang 6\n");
            break;
        case 7:
            printf("Ban dang chon chuc nang 7\n");
            break;
        case 8:
            printf("Ban dang chon chuc nang 8\n");
            break;
        case 9:
            printf("Ban dang chon chuc nang 9\n");
            break;
        case 10:
            printf("Ban dang chon chuc nang 10\n");
            break;
        case 0:
            printf("Thoat chuong trinh!\n");
            break;
        default:
            printf("Lua chon cua ban khong hop le!\n");
        }

    } while (chon != 0);

    return 0;
}
