// finding the biggest element of the array.//
/*#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int max=arr[0];
    for(int i=1;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf(" the biggest element is %d",max);
    return 0;
}
*/
// finding the smallest element of the array.//
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int min=arr[0];
    for(int i=1;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf(" the smallest element is %d",min);
    return 0;
}
