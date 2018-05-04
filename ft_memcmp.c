/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:39:24 by vsanghan          #+#    #+#             */
/*   Updated: 2018/05/03 14:33:28 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*m1;
	unsigned char			*m2;

	if (n == 0)
		return (0);
	m1 = (unsigned char*)s1;
	m2 = (unsigned char*)s2;
	while (n > 1 && *m1 == *m2)
	{
		(void)*m1++;
		(void)*m2++;
		n -= 1;
	}
	return ((unsigned char)(*m1) - (unsigned char)(*m2));
}
