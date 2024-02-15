#include<stdio.h>
int main(){
    int array[10],temp,i,j;
    printf("enter 10 numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++){
            if(array[j]>array[j+1]){
                temp =array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("The ascending order of elements after sorting is:");
    for(i=0;i<10;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}