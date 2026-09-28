#include<stdio.h>
int main() {
    printf("Mobile Data Package\n");
    int balance;
    printf("Enter Balance:");
    scanf("%d",&balance);
    if(balance<500){
        printf("Low Balance");
    }else if(balance>=500 && balance<=2000){
        printf("Sufficient Balance");
    }else{
        printf("Premium Balance");
    }
    return 0;
}
