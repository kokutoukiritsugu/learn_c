#include <stdio.h>
#include <limits.h>

int main() {
    printf("char max %d\n", SCHAR_MAX);
    printf("char min %d\n", SCHAR_MIN);
    printf("short max %d\n", SHRT_MAX);
    printf("short min %d\n", SHRT_MIN);
    printf("int max %d\n", INT_MAX);
    printf("int min %d\n", INT_MIN);
    printf("long max %ld\n", LONG_MAX);
    printf("long min %ld\n", LONG_MIN);
    printf("long long max %lld\n", LONG_LONG_MAX);
    printf("long long min %lld\n", LONG_LONG_MIN);
    printf("unsigned char %u\n", UCHAR_MAX);
    printf("unsigned int %u\n", UINT_MAX);
    printf("unsigned short %u\n", USHRT_MAX);
    printf("unsigned long %lu\n", ULONG_MAX);
    printf("unsigned long long %llu\n", ULONG_LONG_MAX);

    printf("char max %d\n", (unsigned char) ~0);
    printf("char max %d\n", (unsigned int) ~0 >> 1);
    printf("char max %lld\n", (unsigned long long) ~0 >> 1);

    return 0;
}