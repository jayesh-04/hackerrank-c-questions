#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    printf("%c",ch);
    char s[100];
    scanf("%s",s);
    printf("\n%s\n",s);
    scanf("\n");
    char sen[100];
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
