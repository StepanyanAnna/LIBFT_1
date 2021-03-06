/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:40:28 by annstepa          #+#    #+#             */
/*   Updated: 2022/03/30 15:01:59 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((char *)b)[count] = 0;
		count++;
	}
}
