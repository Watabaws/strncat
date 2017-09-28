#include <stdio.h>
#include <string.h>

void demo_func(){
    printf("\\DEMO FOR STR(N)CAT FUNCTION//\n\n");

    char str1[16] = "Hi there,";
    char * str2 = "world";

    printf("String 1 is: %s\n", str1);
    printf("String 2 is: %s\n", str2);
    printf("Can I get uhhh concactenate?\n");
    printf("After running this line of code: \n\t char * newstr = strcat(str1, str2);\n");

    char * newstr = strcat(str1, str2);
    printf("Our new string is: %s\n\n", newstr);

    printf("Wait what about strncat...? \n\n");
    printf("Oh word, so that takes an additional argument \"n\" that limits the number of bites it takes from the second input!\n\n");

    printf("For example, if we run our function again, but this time make n = to 3[char * newnewstr = strncat(str1, str2,3);] we get...");

    char new_str1[16] = "Hi there,";
    char * new_str2 = "world";
    char * newnewstr = strncat(new_str1, new_str2, 3);
    printf("newnewstr is now: %s \n\n\n", newnewstr);

    printf("//IMPORTANT NOTES\\\n\n");
    printf("\t-What this is basically doing is reassigning the concactenated string to the first argument. For this reason you have to make sure of two things:\n");
    printf("\t\t *The first argument is a variable with enough space allocated so that it can fit the FULL CONCACTENATED STRING.");
    printf("\t\t *If you want to reuse the first variable with that same value, make sure to copy over the value. When doing the second demo (strncat) I needed to make new variables, since str1 was no longer Hi there; it was Hi there world.");
}

int main(){
    demo_func();

    return 0;
}
