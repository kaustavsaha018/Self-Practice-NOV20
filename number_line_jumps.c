#include<stdio.h>
int main(){
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    int i;
    for(i=0;i<=10000;i++){
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2){
            printf("YES");
            break;
        }
        if(i==9999){
            printf("NO");
        }
    }
    
    return 0;
}
