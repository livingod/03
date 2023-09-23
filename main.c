#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    char b;
    int i;
    int j; 
    
    printf("enter a character: ");
    scanf("%c",&c);
    
    b = c + 1;
    i = c + 1;
    j = c;
    printf("the next character of %c (%i) is %c (%i)\n", c,j,b,i);
    
  system("PAUSE");	
  return 0;
}
