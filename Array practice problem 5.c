// Taking input from user and printing the reverse of the number.//
#include<stdio.h>
int main()
{
    int arr[9];
    for(int i=0;i<=8;i++){
        printf("Enter the element number%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=8;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}
// The output will be 987654321//
