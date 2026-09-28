#include<stdio.h>
int main() {
    printf("Hospital Appointment");
    int app_ment,Dr_avb,r_completed;
    printf("You have appointment to Doctor(1/0)=");
    scanf("%d",&app_ment);
    if(app_ment==1){
        printf("Is Doctor availabl(1/0)=");
        scanf("%d",&Dr_avb);
        if(Dr_avb==1){
            printf("Is registration completed(1/0)=");
            scanf("%d",&r_completed);
            if(r_completed==1){
                printf("The patient can meet the doctor");
            }else{
                printf("Complete your registration first");
            }
        }else{
            printf("Doctor is not available wait");
        }
    }else{
        printf("Take appointment First");
    }
    return 0;
}
