#include<stdio.h>

//Declare a 3x4 multidimensional array. 
//Receive values for each element from user. 
//Find the smallest value in the multidimensional array, display its index and value, use array access operator []. 
//Find the largest value in the multidimensional array, display its index and value.

int main(){
	
	int array[3][4];
	int i,j;
	printf("Enter values of array:");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nArray:{");
	for(i=0;i<3;i++){
		printf("{");
	   for(j=0;j<4;j++){
	   	    
	   		printf("%d",array[i][j]);
		    if(j<3){
			printf(",");
		  }
		  
	   }
	   printf("}");
	   if(i<2){
	   	printf(",");
	   }
	}
	printf("}\n");
	int min_index[2];
	int max_index[2];
	int min=array[0][0];
	int max=array[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(array[i][j]<min){
				min=array[i][j];
				min_index[0]=i;
				min_index[1]=j;
			}
			if(array[i][j]>max){
				max=array[i][j];
				max_index[0]=i;
				max_index[1]=j;
			}
		}
	}
	
	printf("Minimum value:%d and index of minimum value:[%d][%d]\n",min,min_index[0],min_index[1]);
	printf("Maximum value:%d and index of maximum value:[%d][%d]\n",max,max_index[0],max_index[1]);
	
	
	return 0;
}
