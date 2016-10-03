/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 13:54:02 by cgay              #+#    #+#             */
/*   Updated: 2015/03/03 13:54:03 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if (size == 0)
		return (NULL);
	m = (void *)malloc(size);
	if (m != NULL)
	{
		ft_bzero(m, size);
		return (m);
	}
	return (NULL);
}
