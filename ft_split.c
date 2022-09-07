#include <stdlib.h>
#include <stdio.h>


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

	if (!str)
		return (NULL);
	count = counter(str,c);
	split = (char **) malloc(count * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	x = 0;
	while (str[x]) //---
	{
		while (str[x] == c)
			x++;
		if (str[x])
		{
			split[i] = microsoft_word(str, c, x);
			i++;
		}
		while (str[x] != c && str[x])
			x++;			
	}	
	split[i] = 0;
	return (split);
}
/*

#include <stdio.h>

int	main()
{
	char str[100] = "asd___asd__asdasdas__asd_asdasdsad__a";
	char x = '_';
	char **result;
	int	i = 0;
	result = ft_split(str,x);
	while (result[i])
	{
		printf("split[%d] = %s\n",i,result[i]);
		i++;
	}
}*/
