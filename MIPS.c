#include <stdio.h>

int abs(int n)
{
    if(n > 0){
        return n;
    }else {
        return n * -1;
    }
}

int strlength(char *string){

    int i = 0;
    while(string[i] != '\0'){
        printf("%c", string[i]);
        i++;
    }
    return i;
    
}

int main(void)
{
    int a = 10;
    int b = -4;

    char name[10] = {"yong hun"};

    printf("abs(a) = %d\n", abs(a));
    printf("abs(b) = %d\n", abs(b));

    printf("strlen(name) = %d\n", strlength(name));

    return 0;
}