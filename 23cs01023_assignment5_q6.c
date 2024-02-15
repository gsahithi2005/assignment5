#include<stdio.h>
#define N 10
int main(){
    char ch[N]="abcdefghi";
    char s[50];
    int j;
    printf("Enter a string: ");
    scanf("%s",s);
    for (int i=0;s[i]!='\0';i++){
        for (j=0;j<N-1;j++)
        {    if (s[i]==ch[j])
              break;     }
        if (j==N-1)
          {  printf("The entered string cannot be made from the given character array");
            return 0;  }
    }
    printf("The entered string can be made from the given character array");
    return 0;
}