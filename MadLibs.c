//Programmed By : Yegetaneh Firew -> github.com/lijnati
//Date : 2/23/2023, 11:11AM

#include <stdio.h>

int main()
{
    char color[20];
    char plularNoun[20];
    char celebrity[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    
    printf("Enter a Plular-noun: ");
    scanf("%s", plularNoun);
    
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);
    
   printf("Roses are %s\n", color);
   printf("%s are blue\n", plularNoun);
   printf("I love %s \n", celebrity);
    
    return 0;
}