/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/27 13:08:12 by cgay              #+#    #+#             */
/*   Updated: 2015/06/27 13:08:13 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/client.h"
#include "../../libft/libft.h"

void		read_msg(char *buf)
{
	char	*p;

	read(0, buf, BUF_SIZE);
	if ((p = ft_strstr(buf, "\n")) != NULL)
		*p = 0;
	else
		buf[BUF_SIZE] = 0;
}

int			read_serveur(int sock, char *buf)
{
	int		n;

	n = 0;
	if ((n = recv(sock, buf, BUF_SIZE, 0)) < 0)
		exit_error("Recv");
	buf[n] = 0;
	return (n);
}

void		write_server(int sock, char *buf)
{
	if (send(sock, buf, ft_strlen((char *)buf), 0) < 0)
		exit_error("Send");
}
