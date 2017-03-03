/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:33:39 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/03 10:58:41 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*tempdst;
	unsigned const char	*tempsrc;

	i = 0;
	tempdst = (unsigned char*)dst;
	tempsrc = (unsigned const char*)src;
	while (tempsrc[i] != c && i < n)
	{
		tempdst[i] = tempsrc[i];
		i++;
	}
	if (i < n)
		return (dst + i + 1);
	return (0);
}
