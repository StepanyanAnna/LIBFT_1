/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:09:36 by annstepa          #+#    #+#             */
/*   Updated: 2022/03/30 19:53:10 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict str, size_t n)
{
	size_t	i;

	i = 0;
	if ((dst != NULL || str != NULL) && n > 0)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)str)[i];
			i++;
		}
	}
	return (dst);
}
