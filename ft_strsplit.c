/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:35:52 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/09 14:29:19 by lyoung           ###   ########.fr       */
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
		while (s[i] != c)
			i++;
		while (s[i] == c)
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
	int		a;
	int		b;
	char	**tab;

	i = 0;
	a = 0;
	if (!s)
		return (0);
	tab = (char**)malloc(count_words(s, c) + 1);
	if (!tab)
		return (0);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] && a < count_words(s, c))
	{
		 b = 0;
		 tab[a] = (char*)malloc(count_letters(s, c, i));
		 while (s[i] != c && s[i] != '\0')
		 {
			 tab[a][b] = s[i];
			 b++;
			 i++;
		 }
		 while (s[i] == c && s[i] != '\0')
			 i++;
		 a++;
	}
	tab[a] = 0;
	return (tab);
}
