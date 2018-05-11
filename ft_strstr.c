/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 13:54:27 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 13:55:09 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (big[i] == little[i] && big[i] == '\0')
		return ((char*)&big[i]);
	while (big[i] != '\0')
	{
		j = i;
		while (big[j] == little[j - i] && big[j] != '\0')
			j++;
		if (little[j - i] == '\0')
		{
			return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
