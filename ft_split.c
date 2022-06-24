#include <stdlib.h>
#include <stdio.h>



int	check_seperator(char s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}
int	counter(const char *str, char c)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (str[0] != c)
		result = 1;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			if (str[i] != c && str[i])
			{
				result++;
			}
		}
		i++;
	}
	return (result + 1);
}
int	ftstrlen(const char *str, char c, int i)
{
	int result;

	result = 0;
	while (str[i] != c)
	{
		result++;
		i++;
	}
	return (result + 1);
}
char	*microsoft_word(const char *str, char c, int i)
{
	int	len;
	char	*word;
	int	x;

	x = 0;
	len = ftstrlen(str, c, i);
	word = (char *) malloc(len);
	while (str[i] != c)
	{
		word[x] = str[i];
		i++;
		x++;
	}
	word[x] = 0;
	return (word);
}
char	**ft_split(const char *str, char c)
{
	int	count;
	char	**split;
	int	i;
	int	x;

	count = counter(str,c);
	split = (char **) malloc(count * sizeof(char *));
	i = 0;
	x = 0;
	while (str[x])
	{
		while (check_seperator(str[x], c))
			x++;
		if (str[x])
		{
			split[i] = microsoft_word(str, c, x);
			i++;
		}
		while (!check_seperator(str[x], c))
			x++;			
	}	
	split[i] = 0;
	return (split);
}
int	main()
{
	char str[100] = "asd___asdasd_asd__asd___asd_";
	char x = '_';
	char **result;
	int	i = 0;
	result = ft_split(str,x);
	while (result[i])
	{
		printf("split[%d] = %s",i,result[i]);
		i++;
	}
}

