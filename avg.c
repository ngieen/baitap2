#include<stdio.h>
#include<stdarg.h>
#include<math.h>

int avg(float n,...)
{
    float avg=0,sum=0;
    int x=0;
    va_list ptr;
    va_start(ptr,n);
    avg =*ptr;
    for(int i=0;i<n;i++)
    {
        x+=1;
        sum += va_arg(ptr,int);
    }
    avg=sum/x;
    va_end(ptr);
    return avg;
}
int main()
{
    printf("trung binh cong cac so la:%d",avg(3,3,6,4,4,3,12));
    
}