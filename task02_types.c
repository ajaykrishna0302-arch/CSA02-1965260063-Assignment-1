#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void)
{
printf("sizeof(short) = %zu bytes; USHRT_MAX = %u\n",
sizeof(short), (unsigned)USHRT_MAX);
printf("sizeof(int) = %zu bytes; INT_MAX = %d\n",
sizeof(int), INT_MAX);
printf("sizeof(long) = %zu bytes; LONG_MAX = %ld\n",
sizeof(long), LONG_MAX);
printf("sizeof(long long) = %zu bytes; LLONG_MAX = %lld\n",
sizeof(long long), LLONG_MAX);
printf("sizeof(float) = %zu bytes; FLT_DIG = %d\n",
sizeof(float), FLT_DIG);
printf("sizeof(double) = %zu bytes; DBL_DIG = %d\n",
sizeof(double), DBL_DIG);
printf("sizeof(uint16_t) = %zu bytes; maximum = 65535\n",
sizeof(uint16_t));

return 0;
}
