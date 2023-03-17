#include "stdio.h"

enum {
	CHAR = 1,
	FLOAT = 4,
	DOUBLE = 8,
	L_DOUBLE = 16,
	INT = 4,
	S_INT = 2,
	L_INT = 8,
};

const char *name[] = {
	[CHAR] = "char",
	[FLOAT] = "float",
	[DOUBLE] = "double",
	[L_DOUBLE] = "long double",
	[INT] = "int",
	[S_INT] = "short int",
	[L_INT] = "long int",
};

#define __func(x, y)\
void sizeof_##y##_##x(void) {\
   y x a;\
   printf("size of %s: %ld\n", name[sizeof(a)], sizeof(a));\
}

#define func(x) __func(x,)
#define long_func(x) __func(x, long)
#define short_func(x) __func(x, short)
#define long_func(x) __func(x, long)

func(char);
func(float);
func(double);
long_func(double);
func(int);
short_func(int);
long_func(int);

int main(void)
{
	// TODO: find a way to cope up with this __ shit
	sizeof__char();
	sizeof__float();
	sizeof__double();
	sizeof_long_double();
	sizeof__int();
	sizeof_short_int();
	sizeof_long_int();

	return 0;
}