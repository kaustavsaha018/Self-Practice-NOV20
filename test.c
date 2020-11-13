#include<stdio.h>

void swap(int *p1,int *p2){  //a function to swap numbers
	int temp;
	temp=*p2;
	*p2=*p1;
	*p1=temp;
}

int main(){
	int N;
	printf("Enter the size of the array: ");
	scanf("%d", &N);
	int arr[N];
	
	int i,j;
	printf("Enter the elements of the array: \n");
	for(i=0;i<N;i++)
		scanf("%d", &arr[i]);  // taking input for the array
		
	for(i=0;i<N/2;i++){        //sorting the odd numbers in the 1st half
		if(arr[i]%2!=0){
			for(j=i+1;j<N/2;j++){
				if(arr[j]%2!=0){
					if(arr[i]>arr[j]){
						swap(&arr[i],&arr[j]);
					}
				}
			}	
		}
					
	}
	
	for(i=N/2;i<N;i++){			//sorting the even numbers in the 2nd half
		if(arr[i]%2==0){
			for(j=i+1;j<N;j++){
				if(arr[j]%2==0){
					if(arr[i]>arr[j]){
						swap(&arr[i],&arr[j]);
					}
				}
			}	
		}
					
	}
	
	printf("\nThe array is: ");  	//displaying the array elements
	for(i=0;i<N;i++){
		printf("%d ", arr[i]);
	}
		
	return 0;
}
