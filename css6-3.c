#include <stdio.h>

int main() {
	//khai bao mat khau cho truoc
    int matkhau = 9;
    int sonhapvao;
    //nguoi dung nhap mat khau
    do {
        printf("nhap mat khau: ");
        scanf("%d", &sonhapvao);
        //kiem tra mat khau co trung khong
    } while (sonhapvao != matkhau); 
    // bao dung neu mat khau dung
    printf("so ban nhap trung voi so cho truoc: %d\n",matkhau);
    
    return 0;
}    


