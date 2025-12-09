// MENU ASSIGNMENT HOÀN CHỈNH
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Hàm dọn buffer
void clear_input()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

// ======= Chức năng hỗ trợ cho Case 8: Sắp xếp thông tin sinh viên =======
typedef struct
{
    char name[100];
    double score;
    char grade[16];
} Student;

void classifyStudent(Student *s)
{
    if (s->score >= 9.0)
        strcpy(s->grade, "Xuat sac");
    else if (s->score >= 8.0)
        strcpy(s->grade, "Gioi");
    else if (s->score >= 6.5)
        strcpy(s->grade, "Kha");
    else if (s->score >= 5.0)
        strcpy(s->grade, "Trung binh");
    else
        strcpy(s->grade, "Yeu");
}

int compareScoreDesc(const void *a, const void *b)
{
    const Student *s1 = (const Student *)a;
    const Student *s2 = (const Student *)b;
    if (s1->score < s2->score)
        return 1; // s2 before s1 => descending
    if (s1->score > s2->score)
        return -1;
    return 0;
}

void chucNang8(void)
{
    int n;
    printf("Nhap so luong sinh vien: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("So luong khong hop le.\n");
        clear_input();
        return;
    }
    clear_input();

    Student *arr = malloc(sizeof(Student) * n);
    if (!arr)
    {
        printf("Cap phat bo nho that bai.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nNhap ten sinh vien %d: ", i + 1);
        if (fgets(arr[i].name, sizeof(arr[i].name), stdin) == NULL)
            arr[i].name[0] = '\0';
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Nhap diem sinh vien %d: ", i + 1);
        while (scanf("%lf", &arr[i].score) != 1)
        {
            printf("Nhap sai. Nhap lai diem: ");
            clear_input();
        }
        clear_input();
        classifyStudent(&arr[i]);
    }

    // Sap xep giam dan theo diem
    qsort(arr, n, sizeof(Student), compareScoreDesc);

    printf("\n===== DANH SACH SINH VIEN (DIEM GIAM DAN) =====\n");
    printf("%-3s %-30s %-6s %-12s\n", "STT", "Ho ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++)
    {
        printf("%-3d %-30s %-6.2f %-12s\n", i + 1, arr[i].name, arr[i].score, arr[i].grade);
    }

    free(arr);
}

int main(void)
{
    int choice;

    do
    {
        printf("\n===== XÂY DỰNG MENU =====\n");
        printf("1. Kiểm tra số nguyên / số nguyên tố / số chính phương\n");
        printf("2. Tìm UCLN và BCNN của 2 số\n");
        printf("3. Tính tiền Karaoke\n");
        printf("4. Tính tiền điện\n");
        printf("5. Đổi tiền VND -> USD\n");
        printf("6. Tính lãi suất vay trả góp\n");
        printf("7. Vay tiền mua xe\n");
        printf("8. Sắp xếp thông tin sinh viên\n");
        printf("0. Thoát\n");
        printf("Mời bạn chọn chức năng: ");
        scanf("%d", &choice);

        switch (choice)
        {
        //=================================================================
        case 1: // Kiểm tra số nguyên / nguyên tố / chính phương
        {
            int x;
            printf("Nhập x: ");
            scanf("%d", &x);

            // Kiểm tra số nguyên
            printf("%d là số nguyên\n", x);

            // Kiểm tra số nguyên tố
            int check = 1;
            if (x < 2)
                check = 0;
            else
            {
                for (int i = 2; i * i <= x; i++)
                {
                    if (x % i == 0)
                    {
                        check = 0;
                        break;
                    }
                }
            }
            if (check)
                printf("%d là số nguyên tố\n", x);
            else
                printf("%d không phải số nguyên tố\n", x);

            // Kiểm tra số chính phương
            int can = sqrt(x);
            if (can * can == x)
                printf("%d là số chính phương\n", x);
            else
                printf("%d không phải số chính phương\n", x);
            break;
        }

        //=================================================================
        case 2: // UCLN – BCNN
        {
            int a, b;
            printf("Nhập a: ");
            scanf("%d", &a);
            printf("Nhập b: ");
            scanf("%d", &b);

            int x = a, y = b;

            // UCLN
            while (x != y)
            {
                if (x > y)
                    x -= y;
                else
                    y -= x;
            }

            int UCLN = x;
            int BCNN = (a * b) / UCLN;

            printf("UCLN = %d\n", UCLN);
            printf("BCNN = %d\n", BCNN);
            break;
        }

        //=================================================================
        case 3: // Tính tiền karaoke
        {
            int gio_vao, phut_vao, gio_ra, phut_ra;
            printf("Nhập giờ vào (giờ phút): ");
            scanf("%d %d", &gio_vao, &phut_vao);
            printf("Nhập giờ ra (giờ phút): ");
            scanf("%d %d", &gio_ra, &phut_ra);

            int vao = gio_vao * 60 + phut_vao;
            int ra = gio_ra * 60 + phut_ra;

            int tong = ra - vao;
            if (tong <= 0)
            {
                printf("Thời gian không hợp lệ.\n");
                break;
            }

            int tien = 30000;
            if (tong > 60)
                tien += ((tong - 60 + 29) / 30) * 10000;

            printf("Tổng thời gian: %d phút\n", tong);
            printf("Tiền phải trả: %d VND\n", tien);
            break;
        }

        //=================================================================
        case 4: // Tính tiền điện
        {
            int kw;
            printf("Nhập số kW tiêu thụ: ");
            scanf("%d", &kw);

            int tien;
            if (kw <= 50)
                tien = kw * 1000;
            else
                tien = 50 * 1000 + (kw - 50) * 1200;

            printf("Tiền điện: %d VND\n", tien);
            break;
        }

        //=================================================================
        case 5: // Đổi tiền
        {
            int vnd;
            printf("Nhập số tiền VND: ");
            scanf("%d", &vnd);

            int usd = vnd / 23000;
            int du = vnd % 23000;

            printf("Đổi được: %d USD và %d VND dư\n", usd, du);
            break;
        }

        //=================================================================
        case 6: // Lãi suất trả góp
        {
            double vay, lai_nam, lai_thang, goc_thang, du_no;
            int thang;

            printf("Nhập số tiền vay: ");
            scanf("%lf", &vay);
            printf("Nhập lãi suất năm (%%): ");
            scanf("%lf", &lai_nam);
            printf("Nhập số tháng vay: ");
            scanf("%d", &thang);

            lai_thang = lai_nam / 12 / 100;
            goc_thang = vay / thang;
            du_no = vay;

            printf("\nThang\tGốc\t\tLãi\t\tTổng\t\tDư nợ\n");

            for (int i = 1; i <= thang; i++)
            {
                double lai = du_no * lai_thang;
                double tong = goc_thang + lai;
                du_no -= goc_thang;

                printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",
                       i, goc_thang, lai, tong, du_no);
            }
            break;
        }

            //=================================================================
        case 7: // Vay tiền mua xe
        {
            double car_price, down, rate;
            int months, method;

            printf("Giá xe: ");
            if (scanf("%lf", &car_price) != 1)
            {
                clear_input();
                break;
            }

            printf("Trả trước: ");
            if (scanf("%lf", &down) != 1)
            {
                clear_input();
                break;
            }

            if (down > car_price)
                down = car_price;

            // Lãi suất cố định 15%
            rate = 15.0;
            printf("Lãi suất năm (%%): %.2lf\n", rate);

            printf("Tháng vay: ");
            scanf("%d", &months);

            printf("Chọn phương thức (1.Gốc đều / 2.Annunity): ");
            scanf("%d", &method);

            double loan = car_price - down;
            double m_rate = rate / 12 / 100;

            printf("Tháng\tGốc\t\tLãi\t\tTrả\t\tDư nợ\n");

            if (method == 1)
            {
                double goc = loan / months;
                double du = loan;
                for (int i = 1; i <= months; i++)
                {
                    double lai = du * m_rate;
                    double tra = goc + lai;
                    du -= goc;
                    if (du < 1e-6)
                        du = 0;
                    printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", i, goc, lai, tra, du);
                }
            }
            else if (method == 2)
            {
                double tra;
                if (m_rate == 0)
                    tra = loan / months;
                else
                {
                    tra = loan * m_rate / (1 - pow(1 + m_rate, -months));
                }

                double du = loan;
                for (int i = 1; i <= months; i++)
                {
                    double lai = du * m_rate;
                    double goc = tra - lai;
                    du -= goc;
                    if (du < 1e-6)
                        du = 0;
                    printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", i, goc, lai, tra, du);
                }
            }
            else
                printf("Lựa chọn không hợp lệ!\n");

            break;
        }
        //=================================================================
        case 8: // Sắp xếp thông tin sinh viên
        {
            struct sinhvien
            {
                int MaSv;
                char hoten[100];
                float diem;
                char hocluc[16];
            };

            struct sinhvien sv;

            printf("Nhap ma sinh vien: ");
            scanf("%d", &sv.MaSv);

            printf("Nhap ho ten: ");
            getchar(); // loại bỏ ký tự newline còn lại
            fgets(sv.hoten, sizeof(sv.hoten), stdin);
            sv.hoten[strcspn(sv.hoten, "\n")] = '\0'; // bỏ ký tự xuống dòng

            printf("Nhap diem: ");
            scanf("%f", &sv.diem);

            if (sv.diem < 0 || sv.diem > 10)
            {
                printf("Diem khong hop le!\n");
                strcpy(sv.hocluc, "Khong hop le");
            }
            else if (sv.diem >= 9)
            {
                strcpy(sv.hocluc, "Xuat sac");
            }
            else if (sv.diem >= 8)
            {
                strcpy(sv.hocluc, "Gioi");
            }
            else if (sv.diem >= 6.5)
            {
                strcpy(sv.hocluc, "Kha");
            }
            else if (sv.diem >= 5)
            {
                strcpy(sv.hocluc, "Trung binh");
            }
            else
            {
                strcpy(sv.hocluc, "Yeu");
            }

            printf("\n--- Thong tin sinh vien ---\n");
            printf("Ma SV: %d\n", sv.MaSv);
            printf("Ho ten: %s\n", sv.hoten);
            printf("Diem: %.2f\n", sv.diem);
            printf("Hoc luc: %s\n", sv.hocluc);
        }
        break;

        //=================================================================
        case 0:
        {
            printf("Thoát chương trình...\n");
            break;
        }
        default:
        {
            printf("Lựa chọn không hợp lệ!\n");
        }
        }

    } while (choice != 0);

    return 0;
}