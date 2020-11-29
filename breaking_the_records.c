#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size],max,min,count1=0,count2=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
            count1++;
        }
        if(min>arr[i]){
            min=arr[i];
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    return 0;
}
