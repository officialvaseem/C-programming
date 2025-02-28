#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a)
    printf("%d\n",a);//garbage value
    float f;
    scanf("%f",&f)
    printf("%.2f\n",f);//garbage value

    char c;
    scanf("%c",&c);
    printf("%c\n",c);
    // enter key and \n both are same
    return 0;
}