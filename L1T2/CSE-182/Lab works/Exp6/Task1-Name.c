#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char **name;
    char *name_part;
    int n;

    printf("How many parts do you have in your name?\n");
    scanf("%d", &n);

    printf("Enter your name: ");
    for (int i=0 ; i<n ; i++) {
        scanf("%s", name_part);
        name = name + *name_part;
    }

    printf("%s\n", *name);

    return 0;
}
