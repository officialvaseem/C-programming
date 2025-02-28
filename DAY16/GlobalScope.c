#include<stdio.h>
int global=5;
void display()
{
    printf("%d\n",global);


}
int main()
{
    printf("Before changing within main:");
    display();
    printf("After change within:");
    global=10;
    display();

    
}