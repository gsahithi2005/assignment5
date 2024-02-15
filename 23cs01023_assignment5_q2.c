#include<stdio.h>
int main(){
    int x,y,count,z;
    printf("enter a dividend,divisor:");
    scanf("%d%d",&x,&y);
    if(x<y){
        printf("remainder=%d,quotient=0",x);
    }
    else{
    for(count=0;z>0;++count){
        z=x-y;
        x=z;
    }
    printf("remainder=%d,quotient=%d",z,count);}
    
    return 0;
}