#include <stdio.h>
#include <string.h>

int main()
{

    char noun[90];
    char verb[90];
    char adj1[90];
    char adj2[90];

    printf("Enter the noun: ");
    fgets(noun, sizeof(noun), stdin);
    strtok(noun, "\n");
    
    printf("Enter the verb: ");
    fgets(verb, sizeof(verb), stdin);
    strtok(verb, "\n");

    printf("Enter the adj1: ");
    fgets(adj1, sizeof(adj1), stdin);
    strtok(adj1, "\n");

    printf("Enter the adj2: ");
    fgets(adj2, sizeof(adj2), stdin);
    strtok(adj2, "\n");

    printf("One day there is a boy in 19 his name is %s.", noun);
    printf(" %s love coding so he is %s a website using a computer", noun, verb);
    printf(" so %s is %s and %s, bro is fantastic!!\n", noun, adj1, adj2);

    return 0;
}