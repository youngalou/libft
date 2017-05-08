/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:29:47 by lyoung            #+#    #+#             */
/*   Updated: 2017/04/17 14:04:43 by lyoung           ###   ########.fr       */
=======
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:29:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/03 17:33:15 by jkalia           ###   ########.fr       */
>>>>>>> f24caabbbbdab54f8ea2f512e94e6929c753b92a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, size_t len)
{
	char		*dst;
	char		*cdst;

	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	cdst = dst;
	len++;
	while (--len > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (cdst);
}
