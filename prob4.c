#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b,temp;
    printf("value for a : ");
    scanf("%d",&a);
    printf("value for b : ");
    scanf("%d",&b);
    swap(&a,&b);

    printf("elements before swapping a=%d ,b=%d \n",b,a);
    printf("elements after swapping a=%d, b=%d \n",a,b);

    return 0;

}
