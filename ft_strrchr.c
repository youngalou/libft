/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:39:41 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/05 09:28:35 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == c)
			res = i;
		i++;
	}
	if (str[i] == c)
		res = i;
	if (res != 0)
		return ((char*)str + res);
	return (0);
}
