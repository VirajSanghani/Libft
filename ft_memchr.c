/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:38:26 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 14:39:12 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned int	i;

	tmp = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&tmp[i]);
		i++;
	}
	return (NULL);
}
