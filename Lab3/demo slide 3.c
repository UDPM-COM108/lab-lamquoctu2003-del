#include <stdio.h>

int main() {

    // double dtb;
    // printf("Nhap diem trung binh");
    // scanf("%lf", &dtb);
    // if(dtb >= 9){
    //     printf("xuat sac");
    // }else if(dtb>=8){
    //    printf("gioi");
    // }else if(dtb>=7){
    //     printf("kha");
    // }else if(dtb>=5){
    //     printf("trung binh");
    // }else if(dtb<5){
    //     printf("yeu!!!");
    // }
    
   
   printf("Viet nam co bao nhieu dan toc anh em:\n");
   printf("a. 52\nb. 53\nc. 54\nd. 55\n");
   printf("Xin moi ban chon dap an ( a , b , c , d): ");
   char Dapan;
    scanf("%c", &Dapan);
    switch(Dapan){
        case'a':
            printf("Sai roi ban oi !!!");
            break;
        case'b':
            printf("Dung roi ban oi !!!");
            break;
        case'c':
            printf("Sai roi ban oi !!!");
            break;
        case'd':
            printf("Sai roi ban oi !!!");
            break;
        default:
            printf("Dap an khong hop le !!!");
    }
    return 0;
}        
