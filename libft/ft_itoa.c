/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:20:08 by annstepa          #+#    #+#             */
/*   Updated: 2022/04/08 15:50:06 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	get_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ret_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	return (len + get_len(n));
}

int	is_minus(int n)
{
	int	minus;

	minus = 0;
	if (n < 0)
		minus = 1;
	return (minus);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		minus;

	if (n == 0)
		return ("0");
	if (n == -2147483648LL)
		return ("-2147483648LL");
	len = ret_len(n);
	minus = is_minus(n);
	s = malloc(sizeof(char) * (len + 1));
	s[len--] = '\0';
	while (n > 0)
	{
		s[len--] = '0' + (n % 10);
		n = n / 10;
	}
	if (minus)
		s[0] = '-';
	return (s);
}
