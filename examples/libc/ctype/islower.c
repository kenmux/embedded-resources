// Pulled from musl libc, locale support removed

#include <ctype.h>
#undef islower

int islower(int c)
{
	return (unsigned)c-'a' < 26;
}
