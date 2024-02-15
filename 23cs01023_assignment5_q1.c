#include<stdio.h>
int main(){
    int x,count,sum,i,k,z,j;
    int p[10];
printf("Enter a Number:");
scanf("%d",&x);
count=0;
for(i=0;x>0;i++){
    p[i]=x%10;
    x=x/10;
    count++;
} 
for(i=0;i<count;i++){
    for(j=0;j<count;j++){
        if(p[i]==p[j] && i!=j && i<j){
            p[j]=0;
            }
        }
    }
sum=0;
for (z=0;z<count;z++){
    sum=sum+p[z];
}
printf("%d",sum);
return 0;
}