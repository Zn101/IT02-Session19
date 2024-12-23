#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char fullName[50];
    int age;
    char phoneNumber[50];
};

typedef struct sinhVien sinhVien;

void sortByName(sinhVien SinhVien[], int n);

void printSV(sinhVien SinhVien[], int n);

int main() {
    sinhVien SinhVien[5] = {
        {1, "Nguyen Van A", 18, "123456789"},
        {2, "Nguyen Van B", 18, "123456789"},
        {3, "Nguyen Van C", 18, "123456789"},
        {4, "Nguyen Van D", 18, "123456789"},
        {5, "Nguyen Van E", 18, "123456789"}
    };
    int n = 5; 
    sortByName(SinhVien, n);
    printSV(SinhVien, n);
}

void sortByName(sinhVien SinhVien[], int n) {
    sinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(SinhVien[i].fullName, SinhVien[j].fullName) > 0) {
                temp = SinhVien[i];
                SinhVien[i] = SinhVien[j];
                SinhVien[j] = temp;
            }
        }
    }
}

void printSV(sinhVien sinhVien[], int n) {
    printf("Danh sach sinh vien:\n");
        for (int i = 0; i < n; i++) {
            printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
                sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
        }
}
