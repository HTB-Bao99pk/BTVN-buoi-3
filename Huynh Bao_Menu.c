#include<stdio.h>
int main(){
	int choice, ngay, thang, nam, so;
	printf("=========MENU=========\n");
	printf("Nhap lua chon cua ban:\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:{
    	printf("Nhap vao ten cua ban:\n");
	    char ten[100];
	    scanf("%s",&ten);
     	
		printf ("Nhap vao ngay sinh cua ban:\n");
	    scanf("%d",&ngay);
	
		printf ("Nhap vao thang sinh cua ban:\n");
	    scanf("%d",&thang);

		printf ("Nhap vao nam sinh cua ban:\n");
	    scanf("%d",&nam);
		break;
		
	case 2:{
		printf("Kiem tra chan le cua 1 so:\n");
		printf("Hay nhap 1 so:\n");
		scanf("%d",&so);
		if(so%2==0){
			printf("%d la so chan\n",so);
		}else{
			printf("%d la so le\n",so);
		}
		break;
	}
	case 3:{
		printf("EXIT\n");
		break;
	}
}
}
}

