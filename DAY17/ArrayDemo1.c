#include<stdio.h>
int main()
{
    //int a[]={1,2,3,4,5};
    //printf("%u\n",a);
   // printf("%u\n",&a);
    //printf("%u\n",&a[0]);
    //printf("%u\n",&a[1]);
   // printf("%u\n",&a[2]);
    //printf("%u\n",&a[3]);


    int a=2;
    int *p=&a;

    printf("%u",&a);
    printf("%d\n",p);
    printf("%d\n",a);
    printf("%u\n",*p);//derefencing

    return 0;
}