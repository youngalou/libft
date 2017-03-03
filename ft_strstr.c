/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:57:03 by lyoung            #+#    #+#             */
/*   Updated: 2017/03/03 14:39:29 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!little)
		return ((char*)big);
	while (big[i] && little[j])
	{
		if (big[i] == little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char*)big + i - j);
	return (0);
}
