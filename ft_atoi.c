/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 15:01:05 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 17:24:36 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int i;
	int	sign;
	int	ans;

	i = 0;
	sign = 1;
	while (c[i] == ' ' || c[i] == '\n' || c[i] == '\t'
		|| c[i] == '\r' || c[i] == '\v' || c[i] == '\f')
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(c[i]))
	{
		ans = (ans * 10) + (c[i] - 48);
		i++;
	}
	return (ans * sign);
}
