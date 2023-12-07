#include<stdio.h>
#include<stdarg.h>
#include<math.h>

int max(int n,...)
{
    int max=0;
    va_list ptr;
    va_start(ptr,n);
    for(int i=0;i<n;i++)
    {
        if (max <= *ptr){max = *ptr;va_arg(ptr,int);}
        else{va_arg(ptr,int);}
    }
    va_end(ptr);
    return max;
}
int main()
{
    printf("so lon nhat trong cac so la:%d",max(6,5,8,9,4,3,12));
    
}