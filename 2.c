#include<stdio.h>
int main(){
	int rows,colum,i,j,largest;
	printf("enter the array of rows:");
	scanf("%d",&rows);
	printf("enter the number of colum:");
	scanf("%d",&colum);
	
	int arr[rows][colum];
	printf("enter the array elements:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<colum;j++){
			printf("enter [%d][%d] elements :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<colum;j++){
			if(arr[i][j]>largest){
				largest=arr[i][j];
			}
		}
	}
    printf("the largest elements is: %d\n",largest);
}
