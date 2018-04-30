/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:28:54 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 13:29:03 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (big[i] == little[i] && big[i] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0' && i <= l)
	{
		j = i;
		while (big[j] == little[j - i] && big[j] != '\0' && j < l)
			j++;
		if (little[j - i] == '\0')
		{
			return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
