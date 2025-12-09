// Bài 1:Xây dựng chương trình đếm nguyên âm và phụ âm trong chuỗi
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Xin mời nhập vào chuỗi: ");
    gets(s);
    int i = 0;
    int n = 0;
    int p = 0;
    // khi giá trị cuối cùng của mảng != null
    while (s[i++] != '\0')
    {
        // Nếu s[i] = 'a' hoặc 'i' hoặc 'e' hoặc 'u' hoặc 'o' thì n++
        // ngược lại p++
    }
    printf("Chuỗi '%s' có chứa: %d nguyên âm và %d phụ âm", s, n, p);
    return 0;

// Bài 2:Xây dựng chương trình đăng nhập bằng USERNAME và PASSWORD
#include <stdio.h>
#include <string.h>

    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    // Mời người dùng nhập vào username và password
    if (user == userSys && pass == passSys)
    {
        printf("Đăng nhập thành công\n", user, pass);
    }
    else
    {
        printf("Đăng nhập thất bại\n", user, pass);
    }

// Bài 3:Cho chuỗi bất kì
#include <stdio.h>
#include <string.h>

    char s[100];
    int freq[256] = {0};
    int i;
    printf("Nhập chuỗi: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[(unsigned char)s[i]++];
    }
    printf("Các ký tự xuất hiện hơn 2 lần: ");

    int found = 0;
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 2)
        {
            printf("%c ", i);
            found = 1;
        }
    }

    if (!found)
        printf("Không có ký tự nào xuất hiện hơn 2 lần");

    return 0;
}
