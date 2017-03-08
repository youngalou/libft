/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 09:42:38 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/08 15:04:34 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		count++;
	}
	return (count);
}

int		count_letters(const char *s, char c, int i)
{
	int		count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	i = 0;
	j = 0;
	len = 0;
	if (!s)
		return (0);
	tab = (char**)malloc(count_words(s, c));
	if (!tab)
		return (0);
	while (s[i] && j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		len = count_letters(s, c, i);
		tab[j] = ft_strsub(s, i, len);
		if (!tab[j])
			return (0);
		i = i + len;
		j++;
	}
	return (tab);
}
