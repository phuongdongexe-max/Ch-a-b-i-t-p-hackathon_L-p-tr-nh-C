#include <stdio.h>
int main() {
    int arr[100];
    int size = 0;
    int choice;
    int i, j;
    int temp;
    int max, min;
    int sum = 0;
    int value;
    int pos;
    int found;
    int search;
    int prime_number;
    int prime;
    int minIndex;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap so phan tu va gia tri cho mang.\n");
        printf("2. In ra gia tri cac phan tu trong mang.\n");
        printf("3. Tim gia tri lon nhat va nho nhat.\n");
        printf("4. In ra tong cua cac gia tri phan tu.\n");
        printf("5. Them phan tu vao cuoi mang.\n");
        printf("6. Xoa phan tu tai mot vi tri cu the.\n");
        printf("7. Sap xep (Bubble Sort).\n");
        printf("8. Tim kiem (Linear Search).\n");
        printf("9. In ra toan bo so nguyen to.\n");
        printf("10. Sap xep (Selection Sort).\n");
        printf("11. Thoat.\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so phan tu (n): ");
                scanf("%d", &size);
                printf("Nhap %d phan tu:\n", size);
                for (i = 0; i < size; i++) {
                	printf ("Nhap gia tri cho phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    max = arr[0];
                    min = arr[0];
                    for (i = 1; i < size; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    printf("Max: %d\n", max);
                    printf("Min: %d\n", min);
                }
                break;
            case 4:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    sum = 0;
                    for (i = 0; i < size; i++) {
                        sum = sum + arr[i];
                    }
                    printf("Tong: %d\n", sum);
                }
                break;
            case 5:
                if (size >= 100) {
                    printf("Mang da day.\n");
                } else {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[size] = value;
                    size++;
                    printf("Da them.\n");
                }
                break;
            case 6:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    printf("Nhap vi tri can xoa (0 den %d): ", size - 1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= size) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (i = pos; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Da xoa.\n");
                    }
                }
                break;
            case 7:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    for (i = 0; i < size - 1; i++) {
                        for (j = 0; j < size - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    printf("Da sap xep (Bubble Sort).\n");
                }
                break;
            case 8:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &found);
                    search = 0;
                    for (i = 0; i < size; i++) {
                        if (arr[i] == found) {
                            search = 1;
                            break;
                        }
                    }
                    if (search == 1) {
                        printf("Phan tu %d nam o vi tri %d trong mang.\n", found, i);
                    } else {
                        printf("Phan tu %d khong ton tai.\n", found);
                    }
                }
                break;
            case 9:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    prime = 0;
                    printf("Cac so nguyen to: ");
                    for (i = 0; i < size; i++) {
                        if (arr[i] <= 1) {
                            prime_number = 0;
                        } else {
                            prime_number = 1;
                            for (j = 2; j <= arr[i] / 2; j++) {
                                if (arr[i] % j == 0) {
                                    prime_number = 0;
                                    break;
                                }
                            }
                        }
                        if (prime_number == 1) {
                            printf("%d ", arr[i]);
                            prime = 1;
                        }
                    }
                    if (prime == 0) {
                        printf("Khong co so nguyen to nao.\n");
                    } else {
                        printf("\n");
                    }
                }
                break;
            case 10:
                if (size == 0) {
                    printf("Mang rong.\n");
                } else {
                    for (i = 0; i < size - 1; i++) {
                        minIndex = i;
                        for (j = i + 1; j < size; j++) {
                            if (arr[j] < arr[minIndex]) {
                                minIndex = j;
                            }
                        }
                        temp = arr[minIndex];
                        arr[minIndex] = arr[i];
                        arr[i] = temp;
                    }
                    printf("Da sap xep (Selection Sort).\n");
                }
                break;
            case 11:
                printf("Da thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon tu 1-11.\n");
        }
    } while (choice != 11);
    return 0;
}
