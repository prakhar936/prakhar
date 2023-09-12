#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{ char ch;
scanf("%c", &ch);
char s[200];
scanf("%s", s);
char sen[200];
scanf("%[^\n]s", sen);
printf("%c",ch);
printf("\n%s\n",s);
printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
