#include <stdio.h>
#include <string.h>

int main() {

    char name[200];
    char name1[] = "bob";

    printf("Hello world!\n");
    printf("What is my name?\n");
    fflush(stdout);
    scanf("%s", &name);

    if (strcmp(name, name1) == 0) {

        printf("Hey Bob how's it going?");

    }
    else {

        printf("My name is %s\n", &name);

    }

    return 0;

}
