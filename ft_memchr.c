/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:23:10 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/03 13:31:09 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	unsigned const char	*str;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n && str[i] != ch)
		i++;
	if (str[i] == ch)
		return ((void*)s + i);
	return (0);
}
