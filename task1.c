
#include <stdio.h>
#include <limits.h>

typedef unsigned short meter_t;

unsigned int consumption(meter_t previous, meter_t current)
{
    return (meter_t)(current - previous);
}

int main(void)
{
    printf("Maximum meter reading: %u\n", (unsigned)USHRT_MAX);

    printf("Normal consumption: %u units\n",
           consumption(1200, 1530));

    printf("Rollover consumption: %u units\n",
           consumption(65400, 120));

    return 0;
}
