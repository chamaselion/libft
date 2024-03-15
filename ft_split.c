
#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*strndup(const char *s, size_t n)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (0);
	ft_memcpy(dup, s, n);
	dup[n] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int			word_count;
	char		**result;
	int			i;
	const char	*start;

void normbs(char const *s, char c)
{
    while (*s && *s == c)
        s++
    start = s;
    while(*s && *s != c)
        s++;
}

	if (!s)
		return (0);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (0);
	i = 0;
	while (*s && i < word_count)
	{
		normbs(s, c);
		result[i++] = strndup(start, s - start);
		if (!result[i - 1])
		{
			while (i--)
				free(result[i]), free(result);
			return (0);
		}
	}
    return (result[i] = 0, result);
}
