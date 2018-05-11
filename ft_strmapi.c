/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:02:21 by vsanghan          #+#    #+#             */
/*   Updated: 2018/05/03 14:26:11 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			siz;
	char			*newstr;

	if (!s || !f)
		return (0);
	siz = ft_strlen(s);
	newstr = ft_strnew(siz);
	if (!newstr)
		return (0);
	i = -1;
	while (++i < siz)
		newstr[i] = f(i, s[i]);
	return (newstr);
}
