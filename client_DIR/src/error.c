/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/27 13:08:01 by cgay              #+#    #+#             */
/*   Updated: 2015/06/27 13:08:02 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/client.h"
#include "../../libft/libft.h"

void	exit_error(char *str)
{
	ft_putstr("\x1B[31m");
	ft_putstr(str);
	ft_putstr(" error\033[0m\n");
	exit(-1);
}
