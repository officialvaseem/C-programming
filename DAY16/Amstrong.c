#include<stdio.h>
#include<math.h>
int CountDigit(int n)
{
    int count=0;
    for(int i=n;i>0;i=i/10)
    {
        count++;
    }
    return count;
}
int main()
{
    int n=1634;
    int rem=0;sum=0;
    int temp=n;
    int digitCount=CountDigit(n);

    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        sum=sum+pow(rem,4);
        temp=temp/10;
    }
    (n==sum)?printf("yes"):printf("noo");
    return 0;
}