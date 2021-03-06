/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 23:51:25 by kkhabour          #+#    #+#             */
/*   Updated: 2019/04/08 23:56:29 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *p;

	p = s1;
	while (*s1)
		s1++;
	while (n && *s2)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = 0;
	return (p);
}
