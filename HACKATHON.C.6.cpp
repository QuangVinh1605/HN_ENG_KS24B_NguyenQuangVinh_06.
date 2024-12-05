#include <stdio.h>
#include <math.h> 
int main(){
	int arr[100];
	int n,choice;
	do{
	printf("MENU\n");
	printf("1.nhap so phan tu va gia tri cho mang\n");
	printf("2.in ra cac phan tu trong mang theo dang(arr[0])=1,arr[1]=5\n");
	printf("3. dem so luong cac so hoan hao trong mang\n");
	printf("4. tim gia tri nho thu 2 trong mang,khong duoc sap xep\n");
	printf("5.them mot phan tu ngau nhien vao trong mang\n");
	printf("6.xoa phan tu\n");
	printf("7.sap xep mang theo thu tu tang dan\n");
	printf("8.tim kiem phan tu\n");
	printf("9.sap xep lai mang va tim xem mang co bao nhieu so le, bao nhieu so chan\n");
	printf("10.kiem tra xem mang co phai mang tang dan hay khong\n");
	printf("11.thoat\n"); 
	printf("moi ban nhap lua chon:");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			printf("moi ban nhap vao so phan tu cua mang:");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
					printf("moi ban nhap vao phan tu arr[%d] cua mang:",i);
					scanf("%d",&arr[i]);
				}
			
			break;
		}
		case 2:{
			for(int i=0;i<n;i++){
				printf("arr[%d]=%d,",i,arr[i]);
				printf("\n");
			}
			break;
		}
		case 3:{
			int n_perfect;
			int tong=1;
			for(int i=2;i<=sqrt(n_perfect);i++){
			if(n_perfect%i==0){
				tong+=i;
				if(i != n_perfect/i){
					tong+=n/i;
					return 1;
				}
				return 0;
			}
			
		}
		if(tong==n_perfect||n!=1){
		
			
		}
			
			break;
		}
		case 4:{
			int min=arr[0]; 
			for(int i=0;i<n;i++){
				if(arr[i]<arr[0]){
					min=arr[i];
				}
			}
			break;
		}
		case 5:{
			int n_join;
			int position1;
			printf("moi ban nhap vao phan tu ma ban muon them vao mang");
			scanf("%d",&n_join);
			
			
			break;
		}
		case 6:{
			int position2;
			printf("moi ban nhap vao vi tri phan tu ma ban muon xoa: ");
			scanf("%d",&position2);
			for(int i=position2-1;i<n-1;i++){
				arr[i]=arr[i+1];
				
			}n--;
			printf("mang sau khi da xoa la: ");
			for (int i=0;i<n;i++){
				printf("arr[%d]=%d ",i,arr[i]);
			}
			printf("\n");
			
			break;
		}
		case 7:{
			for(int i=0;i<n;i++){
				if(arr[i]>arr[i+1]){
					int temp= arr[i+1];
					arr[i+1]=arr[i];
					arr[i]=temp;
				}
				printf("mang sau khi da sap xep la: ");
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]);
				}
			}
			break;
		}
		case 8:{
			int n_search;
			int flag=-1;
			printf("moi ban nhap vao mot phan tu: ");
			scanf("%d",&n_search);
			for(int i=0;i<n;i++){
				if(arr[i]==n_search){
					flag=1;
					printf("phan tu co ton tai trong mang");
				}
			}
			if(flag==-1){
				printf("phan tu khong ton tai trong mang");
			}
			
			break;
		}
		case 9:{
			
			break;
		}
		case 10:{
			
			break;
		}
		default :
			printf("lua chon khong hop le, vui long chon lai");
	
		
	}
}while(choice!=11);
return 0;
}
