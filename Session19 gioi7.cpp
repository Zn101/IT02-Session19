#include <stdio.h>
#include <string.h>

struct sinhVien {
	int id;
	char fullName[50];
	int age;
	char phoneNumber[50];
};

typedef struct sinhVien sinhVien;

void deleteSV(int id, sinhVien sinhVien[], int *n);

void printSV(sinhVien sinhVien[], int n);

int main() {
    sinhVien SinhVien[5] = {
        {1, "Nguyen Van A", 18, "123456789"},
        {2, "Nguyen Van B", 18, "123456789"},
        {3, "Nguyen Van C", 18, "123456789"},
        {4, "Nguyen Van D", 18, "123456789"},
        {5, "Nguyen Van E", 18, "123456789"}
    };
    int n = 5;
    int idDelete;
    printSV(SinhVien, n);
    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &idDelete);
    deleteSV(idDelete, SinhVien, &n);
    printSV(SinhVien, n);
}

void printSV(sinhVien sinhVien[], int n) {
    printf("Danh sach sinh vien:\n");
        for (int i = 0; i < n; i++) {
            printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
                sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
        }
}

void deleteSV(int id, sinhVien SinhVien[], int *n) {
    int i, found = 0;
    for (i = 0; i < *n; i++) {
        if (SinhVien[i].id == id) {
            found = 1;
            for (int j = i; j < *n - 1; j++) {
                SinhVien[j] = SinhVien[j + 1];
            }
            (*n)--;
            break;
        }
    }
    if (found==0) {
        printf("Sinh vien khong ton tai trong danh sach.\n");
    }
}
