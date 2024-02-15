#include<stdio.h>
int main(){
    int n,sum=0;
    char c;
    while (1){
        printf("Provide the  number\n");
        scanf("%d",&n);
        if (n%2==0)
           sum+=n;
        while (1){
        printf("Do you want to continue?\n");
        scanf(" %c",&c);
        if (c=='y'||c=='Y')
            break;
        else if (c=='n'||c=='N')
         {   printf("The sum is: %d",sum);
            return 0;  }
        else
            printf("Invalid character is entered\nEnter y or n\n");
        }
    } 
    return 0;
}