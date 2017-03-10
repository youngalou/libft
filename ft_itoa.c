/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:29:35 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/09 11:00:58 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (2);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = count_digits(n);
	str = (char*)malloc(len);
	nb = n;
	if (!str)
		return (0);
	len--;
	str[len] = '\0';
	len--;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
