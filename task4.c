#include<stdio.h>
int main() {
    printf("Food Delivery System\n");
    int Resturantopen,itemAvailable,BalanceSufficent;
    printf("Is the resturant open(1/0):");
    scanf("%d",&Resturantopen);
    if(Resturantopen==1){
        printf("Resturant is open");
        printf("is your needed items are available(1/0):");
        scanf("%d",&itemAvailable);
        if(itemAvailable==1){
            printf("is balncesufficient(Y/N):");
            scanf("%d",&BalanceSufficent);
            if (BalanceSufficent==1)
            {
                printf("Approprate user status");
            }else{
                printf("Insufficient Balance");
            }
            
        }else{
            printf("Required items not available");
        }
    }else{
        printf("Times over resturant close");
    }
    return 0;
}
