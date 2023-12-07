#include<stdio.h>
#include<stdarg.h>
#include<math.h>

int min(int n,...)
{
    int min=0;
    va_list ptr;
    va_start(ptr,n);
    min=*ptr;
    for(int i=0;i<n;i++)
    {
        if (min >= *ptr){min = *ptr;va_arg(ptr,int);}
        else{va_arg(ptr,int);}
    }
    va_end(ptr);
    return min;
}
int main()
{
    printf("so nho nhat trong cac so la:%d",min(6,5,8,9,4,3,12));
    
}