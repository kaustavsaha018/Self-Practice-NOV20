#include<stdio.h>
int main(){
    int house_start_pos,house_end_pos;
    scanf("%d %d",&house_start_pos,&house_end_pos);
    int apple_tree_pos,orange_tree_pos;
    scanf("%d %d",&apple_tree_pos,&orange_tree_pos);
    int apples_falled,oranges_falled;
    scanf("%d %d",&apples_falled,&oranges_falled);
    int apples_pos[apples_falled];
    int oranges_pos[oranges_falled];
    for(int i=0;i<apples_falled;i++){
        scanf("%d",&apples_pos[i]);
        apples_pos[i]=apples_pos[i]+apple_tree_pos;
    }
    for(int i=0;i<oranges_falled;i++){
        scanf("%d",&oranges_pos[i]);
        oranges_pos[i]=oranges_pos[i]+orange_tree_pos;
    }
    int apple_count=0,orange_count=0;
    for(int i=0;i<apples_falled;i++){
        if(apples_pos[i]>=house_start_pos && apples_pos[i]<=house_end_pos){
            apple_count++;
        }
    }
    for(int i=0;i<oranges_falled;i++){
        if(oranges_pos[i]>=house_start_pos && oranges_pos[i]<=house_end_pos){
            orange_count++;
        }
    }
    printf("%d\n%d",apple_count,orange_count);
    return 0;
}
