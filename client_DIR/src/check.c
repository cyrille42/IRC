/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/27 13:07:41 by cgay              #+#    #+#             */
/*   Updated: 2015/06/27 13:07:42 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/client.h"
#include "../../libft/libft.h"

int			check_name(char *name)
{
	int		i;

	i = 0;
	while (name[i])
	{
		if (ft_isprint(name[i]) && name[i] != ' ')
			i++;
		else
			return (0);
	}
	return (1);
}

char		*name(void)
{
	int		n;
	char	*buf;

	buf = malloc(sizeof(char) * 1024);
	ft_putstr("Enter your name: ");
	while ((n = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[n - 1] = '\0';
		if ((ft_strlen(buf) < 10 && ft_strlen(buf) > 0) && check_name(buf))
			return (buf);
		else
			ft_putstr("Wrong name.\nEnter your name: ");
	}
	return (NULL);
}
