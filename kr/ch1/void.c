
#include<stdio.h>
int main(void)
{
	printf("%lu\n", sizeof(int));
    int a[2] = {1, 2};
    void *ptr = &a;
    printf("%p\n", ptr);
    ptr = ptr + sizeof(int);	// void is considered to be size of 1 byte here.
    printf("%p\n", ptr);
    printf("%d",  * (int *) ptr);
    return 0;
}
