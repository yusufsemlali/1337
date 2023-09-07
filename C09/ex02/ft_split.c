/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:09:53 by ysemlali          #+#    #+#             */
/*   Updated: 2023/09/05 15:10:00 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	next_separator_found(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		while (str[i] && next_separator_found(sep, str[i]))
			i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != '\0')
			x++;
		while (str[i] && !next_separator_found(sep, str[i]))
			i++;
	}
	return (x);
}

int	ft_word_len(char *sep, char *str)
{
	int	i;

	i = 0;
	while (str[i] && !next_separator_found(sep, str[i]))
		i++;
	return (i);
}

char	*copy_strings(char *sep, char *str)
{
	int		i;
	int		word_len;
	char	*word;

	i = 0;
	word_len = ft_word_len(sep, str);
	word = malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		x;
	int		word_count;
	char	**strings;

	i = 0;
	x = 0;
	word_count = count_words(str, charset);
	strings = (char **)malloc(sizeof(char *) * word_count + 1);
	if (!strings)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] && next_separator_found(charset, str[i]))
			i++;
		if (str[i] != '\0')
		{
			strings[x] = copy_strings(charset, str + i);
			x++;
		}
		while (str[i] && !next_separator_found(charset, str[i]))
			i++;
	}
	strings[x] = 0;
	return (strings);
}
/*
int	main(void)
{
	char	*input_string;
	char	*separator_chars;
	char	**result;
	int		i;

	input_string = "  ";
	separator_chars = " ";
           i = 0;
    result = ft_split(input_string, separator_chars);
    while( result[i])
    {
        printf("[%s]", result[i]);
        i++;
    }
    printf("%s", result[i]);

	return (0);
}
*/
