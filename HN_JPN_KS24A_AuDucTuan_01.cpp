#include <stdio.h>
int main(){
	int arr[100];
	int choice, n, sum;
	do{
		printf("----------------MENU-------------------\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n ");
		printf("3. Tim GTNN, GTLN trong mang\n");
		printf("4. In ra tong cua cac phan tu\n");
		printf("5. Them 1 phan tu vao cuoi mang (nguoi dung nhap phan tu moi)\n");
		printf("6. Xoa phan tu tai 1 vtri cu the (nguoi dung nhap vtri)\n");
		printf("7. sap xep mang theo thu tu giam dan\n");
		printf("8. Tim kiem phan tu nhap vao mang\n");
		printf("9. In ra toan bo so nguyen to trong mang\n");
		printf("10. Sap xep mang theo thu tu tang dan\n");
		printf("11. Thoat chuong trinh\n");
		printf("Lua chon cua ban: \n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu trong mang: \n");
				scanf("%d", &n);
				printf("Nhap gia tri cho mang: \n");
				for(int i= 0; i < n; i++){
					printf("Nhap arr [%d]: ", i);
					scanf("%d", &arr[i]);
				}
			case 2:
				for(int i= 0; i < n; i++){
					printf("Cac phan tu trong mang la: add[%d] = %d\n ", i, arr[i]);
				}
				
				break;
			case 3:
					if(n == 0){
					printf("Khong co gia tri nao trong mang!\n");
				}else{
					int max = arr[0];
					for(int i = 1; i < n; i++){
						if(arr[i] > max){
							max = arr[i];
						}
					}
					printf("Gia tri lon nhat trong mang la: %d\n",max);
					
					int min = arr[0];
					for(int i = 1; i < n; i++){
						if(arr[i] < min){
							min = arr[i];
						}
					}
					printf("Gia tri nho nhat trong mang la : %d\n",min);				
				}
				break;
			case 4: 
			    	for(int i=0; i < n; i++){
				    	sum += arr[i];
			    	}
				printf("Tong cua cac phan tu trong mang la: %d\n",sum);
			    break;	
			case 5:
				    if (n < 100) {
                    int news;
                    printf("Nhap gia tri phan tu muon them: ");
                    scanf("%d", &news);
                    arr[n] = news;
                    n++;
                    printf("Da them phan tu vao trong mang\n");
                } else {
                    printf("Mang da day \n");
                }
				break;
			case 6:
				 if (n > 0) {
                    int del;
                    printf("Nhap vi tri can xoa (%d): ", n - 1);
                    scanf("%d", &del);
                    if (del >= 0 && del < n) {
                        for (int i = del; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        printf("Da xoa phan tu tai vi tri %d\n", del);
                    } else {
                        printf("Vi tri khong hop le\n");
                    }
                } else {
                    printf("Mang khong co phan tu nao de xoa!\n");
                }
				break;
			case 7:
                if (n > 0) {
                    for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("Mang da duoc sap xep theo thu tu giam dan:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Mang khong co phan tu nao de sap xep!\n");
    }
    break;

			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			case 11: 
			    printf("Thoat chuong trinh\n");
			    break;
		}
		
	}while(choice!=11);
	return 0;
}
