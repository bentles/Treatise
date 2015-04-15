#include <stdio.h>
#include <inttypes.h>

char *itoa(int n)
{
	static char retbuf[25];
	sprintf(retbuf, "%d", n);
	return retbuf;
}

int main(int argc, char *argv[])
{
    //learning how to read in binary files

    FILE *fp = fopen(argv[1], "rb");

    int a = fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    
    int16_t program[size/2];

    fread(program, 2, size/2, fp);
    fclose(fp);
    
    printf("fseek returned: %d\n", a);
    printf("ftell returned: %d\n", size);
    int i = 0;
    for (;i < size/2; i++)
        printf("%d\n", program[i]);

    printf("returning an array!\n");
    i = 1111111111111111111111111;
	char *p1, *p2;
	p1 = itoa(i);
	i = i + 10;
	p2 = itoa(i);
	printf("old i = %s, new i = %s\n", p1, p2);
    
    return 0;
}


