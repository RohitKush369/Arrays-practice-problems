// Take marks of 10 students as input. print the index of the marks less than 35//
/*
#include<stdio.h>
int main()
{
    int marks[10]={34,45,76,87,35,23,97,90,56,74};
    for(int i=0;i<=9;i++){
        printf("Enter the marks of student %d\n",i+1);
      scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
    if(marks[i]<35){
            printf("%d\n",i);
    }
    }
    return 0;
}
*/
// we can also print the address of the elements of the array.//
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
for(int i=0;i<=4;i++){
    printf("%p\n",&arr[i]);// Address in array is continuous.//
}
return 0;
}




