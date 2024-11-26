#include <stdio.h>

int namnhuan(int nam) {
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        return 1; 
    }
    return 0;  
}


int ngaytrongthang(int thang, int nam) {
    int ngaytrongthang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // thang2 la nam nhuan
    if (thang == 2 && namnhuan(nam)) {
        return 29;  
    }

    return ngaytrongthang[thang - 1];  
}

int main() {
    int nam, thang;

    // nhap nam thang
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang: ");
    scanf("%d", &thang);

    // dieu kien
    if (thang < 1 || thang > 12) {
        printf("thang khong ho le.\n");
    } else {
        // tinh so ngay
        int ngay = ngaytrongthang(thang, nam);
        printf("so ngya trong thang %d nam %d là: %d ngay\n", thang, nam,ngay);
    }

    return 0;
}

