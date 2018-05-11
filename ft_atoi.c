/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 15:01:05 by vsanghan          #+#    #+#             */
/*   Updated: 2018/05/10 22:45:57 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int	sign;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v' ||
				*str == '\t' || *str == '\r' || *str == '\f')
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num = num + (*str - '0');
		++str;
	}
	return (sign * num);
}
