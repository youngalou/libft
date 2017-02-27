/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 09:53:56 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/27 13:28:40 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dupl;

	i = 0;
	dupl = (char*)malloc(sizeof(dupl) * ft_strlen(str));
	while (str[i])
	{
		dupl[i] = str[i];
		i++;
	}
	free(dupl);
	return (dupl);
}
