// C Program To Reverse a Number

#include <stdio.h>
int main()
{
	int num = 4562;
    int rev_num = 0;
	while (num > 0)
	{
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	printf("%d", rev_num);
	return 0;
}
