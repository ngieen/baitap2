#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct {
    int length;
    int *array;
} Array_Typedef;

int xuatmang(int a[],int n)
{
	int i=0;
	for( i=0; i<n ;i++){
        printf("gia tri thu %d:%d\n",i+1,a[i]);
    }
    printf("\n");	
}

int themgiatri(int a[],int n,int vitri,int giatri)
{
	int i=0;
	int b[1000];
	if(vitri<0||vitri>n)
	{
		printf("vi tri khong hop le\n");
	}
	else 
	{
		
		for( i=vitri-1; i<n ;i++)
		{
		b[i]=a[i];
		}
		++n;
		a[vitri-1]=giatri;
		for( i=vitri; i<n ;i++)
		{
		a[i]=b[i-1];
		}
		
	}
}

int suagiatri(int a[],int n,int vitri,int giatri) 
{
    if (vitri < 0 || vitri >= n) {
        printf("vi tri khong hop le\n");
    }

    a[vitri-1] = giatri;

}

int xoagiatri(int a[],int n,int vitri) {
    int i=0;
	if(vitri<0||vitri>n)
	{
		printf("vi tri khong hop le\n");
	}
    for (i = vitri; i < n; ++i) {
        a[i-1] = a[i];
    }
	n--;
}

int main()
{
	int i=0,choice,vitri,giatri;
    Array_Typedef arr;
    printf("nhap vao kich thuoc mang: ");
    scanf("%d",&arr.length);
    arr.array = (int *) malloc(sizeof(int) *arr.length);

    for( i=0; i<arr.length ;i++){
        printf("nhap gia tri thu %d: ",i+1);
        scanf("%d",&arr.array[i]);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1. Xuat mang\n");
        printf("2. Them gia tri\n");
        printf("3. Sua gia tri\n");
        printf("4. Xoa gia tri\n");
        printf("5. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
			case 1:
                xuatmang(arr.array,arr.length);
                break;
            case 2:
                printf("vi tri can them la: ");
				scanf("%d",&vitri);
				printf("gia tri la: ");
				scanf("%d",&giatri);
                themgiatri(arr.array,arr.length,vitri,giatri);
                break;
            case 3:
                printf("vi tri can sua la: ");
				scanf("%d",&vitri);
				printf("gia tri la: ");
				scanf("%d",&giatri);
                suagiatri(arr.array,arr.length,vitri,giatri);
                break;
            case 4:
                printf("vi tri can xoa la: ");
                scanf("%d",&vitri);
                xoagiatri(arr.array,arr.length,vitri);
                break;
            case 5:
                break;
            default:
                printf("khong hop le, chon tu 1 toi 5.\n");
        }
    } while (choice != 5);
    
	free(arr.array);

    return 0;
   
}
