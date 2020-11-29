//You are in charge of the cake for a child's birthday. 
//You have decided the cake will have one candle for each year of their total age.
//They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(max==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

