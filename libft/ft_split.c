/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:38:24 by annstepa          #+#    #+#             */
/*   Updated: 2022/04/06 17:55:28 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	word_length(const char *str, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

size_t	words_counter(const char *str, char c)
{
	size_t	counter;
	int		i;

	i = 0;
	counter = 0;
	while (str[i] && str[i] == c)
		i++;
	if (str[i] && str[i] != c)
	{
		while (str[i] && str[i] != c)
			i++;
		counter++;
	}
	return (counter);
}

char	**ft_split(char const *str, char c)
{
	char	**s1;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	s1 = malloc(sizeof(char *) * (words_counter(str, c) + 1));
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			k = 0;
			s1[j] = malloc(sizeof(char *) * (word_length(str, i, c) + 1));
			while (str[i] && str[i] != c)
				s1[j][k++] = str[i++];
			s1[j++][k] = '\0';
		}
	}
	s1[j] = NULL;
	return (s1);
}
/*int main()
{
	char *str;
	char **m;

	str = "something uninteresting";
	m = ft_split(str, ' ');

	int i = 0;
	while (m[i])
		printf("%s\n", m[i++]);

	return (9);
}*/
