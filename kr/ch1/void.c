
#include<stdio.h>
int main(void)
{
	printf("%lu\n", sizeof(int));
    int a[2] = {1, 2};
    void *ptr = &a;
    ptr = ptr + sizeof(int);	// void is considered to be size of 1 byte here.
    printf("%d", *(int *)ptr);
    return 0;
}
