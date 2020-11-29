#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int i,arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int j,factor;
    for(i=0;i<size;i++){
        j=1,factor=0;
        while(factor<=arr[i]){
            factor=j*5;
            j++;
        }
        
        if(factor-arr[i]<3 &&arr[i]>=35){
            arr[i]=factor;
        }
    }
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
