#include <stdio.h>
 
int main () {
    //Bài 3: Giải Phương trình bậc 2
     float a, b, c;
      float delta, x1, x2;
      printf("Nhap he so a: ");
      scanf("%f" ,&a);
      printf("Nhap he so b: ");
      scanf("%f" ,&b);
      printf("Nhap he so c: ");
      scanf("%f" ,&c);
      if (a==0)
        printf("Phuong trinh thanh bx + c = 0");
      else if (a!=0)
         //Tinh delta
         if (delta < 0)
           printf("Phuong trinh vo nghiiem");
         if (delta ==0)
           printf("Phuong trinh co nghiem kep x = -b/(2*a)");
         if (delta > 0)
           printf("Phuong trinh co 2 nghiem phan biet x1 = (-b + sqrt(delta))/(2*a) va x2 = (-b - sqrt(delta))/(2*a)");
        return 0; 
      }