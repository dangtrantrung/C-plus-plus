#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* unconstchar(const char* s) {
    if(!s)
      return NULL;
    int i;
    char* res = NULL;
    res = (char*) malloc(strlen(s)+1);
    if(!res){
        fprintf(stderr, "Memory Allocation Failed! Exiting...\n");
        exit(EXIT_FAILURE);
    } else{
        for (i = 0; s[i] != '\0'; i++) {
            res[i] = s[i];
        }
        res[i] = '\0';
        return res;
    }
}
int main() {
    const char* str="hello c++";
    printf("%s",str);

    const char* s = "this is bikash";
    char* p = unconstchar(s);
    printf("%s",p);
    free(p);
}