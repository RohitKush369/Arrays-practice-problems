 /*#include<stdio.h>
int main()
{
int arr[5];
arr[0]=1;
arr[1]=2;
arr[2]=3;
arr[3]=4;
arr[4]=5;
printf("%d",arr[3]);
return 0;
}
*/

/*
#include<stdio.h>
int main()
{
char arr[5];
arr[0]='A';
arr[1]='B';
arr[2]='C';
arr[3]='D';
arr[4]='E';
printf("%c",arr[3]);
return 0;
}
*/
//we can take input from user also.//
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter first element");
    scanf("%d",&arr[0]);
    printf("Enter Second element");
     scanf("%d",&arr[1]);
    printf("Enter third element");
     scanf("%d",&arr[2]);
    printf("Enter fourth element");
     scanf("%d",&arr[3]);
    printf("Enter fifth element");
     scanf("%d",&arr[4]);
    printf("%d",arr[3]);
    return 0;
}
