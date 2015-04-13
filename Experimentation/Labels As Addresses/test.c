//#include <inttypes.h>

int main()
{
    //  int64_t i64;
    int i;    
    void * a = &&test;
    int size = sizeof(a);
    //int size2 = sizeof(i64);
    int size3 = sizeof(i);

test:
    i = 1;
    return 0;
}
