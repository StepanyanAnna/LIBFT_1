/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:50:56 by annstepa          #+#    #+#             */
/*   Updated: 2022/03/29 16:04:46 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	charec;

	str = (unsigned char *)s;
	charec = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == charec)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
