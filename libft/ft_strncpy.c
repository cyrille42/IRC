/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/09 11:59:59 by cgay              #+#    #+#             */
/*   Updated: 2015/12/02 20:53:07 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a != n)
	{
		dest[a] = src[a];
		a++;
		if (src[a] == '\0')
		{
			while (dest[a] != '\0')
			{
				dest[a] = '\0';
				a++;
			}
			return (dest);
		}
	}
	return (dest);
}
