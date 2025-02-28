#include<stdio.h>
int main()
{
    int a=23;
    int *p;
    p=&a;

    printf("Address of a %u\n",&a);
    printf("Address of p %u\n",&p);
    printf("VALUE of a %u\n",a);
    printf("value stored in the pointer p %u\n",*p);

    return 0;
}