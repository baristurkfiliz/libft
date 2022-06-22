#include <string.h>
#include <stdio.h>



int	main(void)
{
	char src1[12] = "selam";
	char src2[12] = "el";

	char	*src = strnstr(src1, src2, 12);
	printf("src1 = %s\nsrc2 = %s\nsrc = %s",src1, src2, src);
	return 0;

}
