// your name surname and age from user
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    char z[100];
    
    printf("enter your name;\n");
    scanf("%s",&x);
    
    printf("enter your surname;\n");
    scanf("%s",&z);
    
    printf("your name and surname; %s %s",x, z);

    return 0;
}
