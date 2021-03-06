/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 10:57:22 by vsanghan          #+#    #+#             */
/*   Updated: 2018/05/03 14:29:37 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	size_t			max_size;
	size_t			i;
	size_t			ni;

	if (!s)
		return (0);
	i = (size_t)start - 1;
	ni = 0;
	max_size = i + 1 + len;
	newstr = ft_strnew(len);
	if (!newstr)
		return (0);
	while (++i < max_size)
		newstr[ni++] = s[i];
	newstr[ni] = 0;
	return (newstr);
}
