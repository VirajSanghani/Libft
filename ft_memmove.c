/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:42:38 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 14:42:42 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	if (src > dst)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	return (dst);
}
