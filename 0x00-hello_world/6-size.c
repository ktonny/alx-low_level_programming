/*size of types*/
#include <stdio.h>
int main(void)
{
	int i;
	char c;
	long int l;
	long long ll;
	float fl;
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int:  %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(fl));
	return (0);
}
