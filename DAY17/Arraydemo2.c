#include<stdio.h>
int main()
{
    int a[]={2,1,5,4,3};
    printf("Before sorting:");
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)//*(&a+1)-a
    {
        printf("%d",a[i]);
    }
    return 0; 
    // 2 1 5 4 3 2<1
    // 2 1 5 4 3 2<5
    //5  1 2 4 3 2<4
    // 5 1 4 2 3 2<3
    // 5 1 4 3 2 
    
}