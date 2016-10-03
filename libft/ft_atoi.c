/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:22:19 by cgay              #+#    #+#             */
/*   Updated: 2015/02/23 18:22:20 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int a;
	int nb;

	a = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v'
				|| *str == '\t' || *str == '\r' || *str == '\f')
		++str;
	if (*str == '-')
	{
		a = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10;
		nb = nb + (*str - '0');
		++str;
	}
	return (a * nb);
}
