#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
    //learning how to read in binary files

    FILE *fp = fopen(argv[1], "rb");

    int a = fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    int16_t program[size/4];

    fread(program, 4, size/4, fp);
    fclose(fp);
    
    printf("fseek returned: %d\n", a);
    printf("ftell returned: %d\n", size);
    int i = 0;
    for (;i < size/4; i++)
        printf("%x\n", program[i]);       
    
    return 0;
}
