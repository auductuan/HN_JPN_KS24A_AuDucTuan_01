#include <stdio.h>
int main(){
	int arr[100];
	int choice, n;
	int value;
	int del;
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
				if(n > 0){
					int max = arr[0];
					for(i = 1; i < n; i++){
						if(arr[i] > max){
							max = arr[i];
						}
					}
					printf("Gia tri lon nhat la: %d\n", max);
				}
				break;
			case 4: 
			     int sum;
			     for(int i =0; i < n; i++){
			     	
				 }
			 
			 
			    break;
			case 5:
				if(n < 100){
				   printf("Nhap gia tri cua phan tu can them: ");
				   scanf("%d", &value);
				   arr[n++]= value;
				   printf("Phan tu da duoc them \n");
				}else{
					printf("Mang da day");
				}
				break;
			case 6:
				printf("Nhap phan tu muon xoa: \n");
				scanf("%d", &value);
				found = 0;
				for(int i = 0; i < n; i++){
					if(arr[i]==value){
						del 
					
					}
				}
				
				
				break;
			case 7:
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

