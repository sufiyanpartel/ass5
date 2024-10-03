#include<stdio.h>
int main(){
	int size;
	printf("enter the array of array");
	scanf("%d",&size);
	
	int arr[size],i,negative=0;
	printf("enter the eliments :\n");
	for(i=0;i<size;i++){
	printf("a[%d]=", i);
	scanf("%d",&arr[i]);
	}
    printf("negative element array :");
    for(i=0;i<size;i++){
    	if(arr[i]<0){
    	   printf("%d",arr[i]);
		}
	}	
}
