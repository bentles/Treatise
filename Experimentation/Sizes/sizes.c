#include <stdio.h>

int main()
{
    int a = 12;
    printf("a char is %ld bytes\n", sizeof(char));
    printf("an int is %ld bytes\n", sizeof(a));
    printf("an float is %ld bytes\n", sizeof(float));
    printf("a double is %ld bytes\n", sizeof(double));
    printf("a short int is %ld bytes\n", sizeof(short int));
    printf("a long int is %ld bytes\n", sizeof(long int));
    printf("a long long int is %ld bytes\n", sizeof(long long int));
    printf("a long double is %ld bytes\n", sizeof(long double));
    printf("a pointer is %ld bytes\n", sizeof(void*));
    return 0;
}
