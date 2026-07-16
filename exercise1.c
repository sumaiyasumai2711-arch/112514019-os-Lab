#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Current Directory\n");
    system("pwd");

    printf("\nFiles\n");
    system("ls -l");

    printf("\nCreating Directory\n");
    system("mkdir Demo");

    printf("\nListing Files Again\n");
    system("ls");

    printf("\nRemoving Directory\n");
    system("rm Demo");
 
    return 0;

}