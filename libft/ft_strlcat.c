/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:45:46 by annstepa          #+#    #+#             */
/*   Updated: 2022/03/30 21:24:33 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	j = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dest_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dest_len)
		return (src_len + dstsize);
	else
	{
		while (src[j] && (dest_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dest_len + j) == dstsize && dest_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dest_len);
	}
}
