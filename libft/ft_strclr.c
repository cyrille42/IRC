/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 18:22:44 by cgay              #+#    #+#             */
/*   Updated: 2015/02/23 18:22:48 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	length;

	if (s == NULL)
		return ;
	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		s[i] = '\0';
		i++;
	}
}
