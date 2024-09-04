/*
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
        printf("%d",arr[i]);
    return 0;
}
*/
// we can also take input using loops.//
/*
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter the element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf(" element is %d",arr[3]);
    return 0;
}
*/
//we can also print the whole array using loops.//
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter element number%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

