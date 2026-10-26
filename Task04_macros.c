#include <stdio.h>
#define SQUARE(x) (((x) * (x)))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
static int square_int(int x)
{
return x * x;
}
int main(void)
{
int a = 3;
int b = 4;
printf("SQUARE(a + b) = %d\n", SQUARE(a + b));
printf("MAX(a, b) = %d\n", MAX(a, b));
printf("square_int(a + b) = %d\n", square_int(a + b));
return 0;
}
