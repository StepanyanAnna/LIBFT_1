/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:49:34 by annstepa          #+#    #+#             */
/*   Updated: 2022/03/28 16:27:47 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*var;

	var = malloc(count * size);
	{
		if (var != NULL)
		{
			ft_memset(var, 0, count * size);
		}
		return (var);
	}
}
