#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        return 1;
    }
    // POR STDOUT --> fprintf(stdout, "Hello, World!\n");
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    return 0;
}
