#include<stdio.h>
main(){
	int rows,column;
	printf("enter no of rows :");
	scanf("%d",&rows);
	printf("enter no of column :");
	scanf("%d",&column);
	
	int y[rows][column],x[column][rows];
	printf(" enter the array  elements :\n");
	
	int i,j,transpose;
	
	
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("enter y[%d][%d] :",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
	      x[j][i]=y[i][j];
    	}
    }
    for(i=0;i<column;i++){
		for(j=0;j<rows;j++){
	      printf("%d",x[i][j]);
    	}
    	printf("\n");
    }
}
