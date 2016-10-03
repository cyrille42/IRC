/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/27 13:09:24 by cgay              #+#    #+#             */
/*   Updated: 2015/06/27 13:09:25 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/serveur.h"
#include "../../libft/libft.h"

void		init_fds(t_serveur *serveur, int actual)
{
	int		i;

	i = 0;
	FD_ZERO(&(serveur->rdfs));
	FD_SET(STDIN_FILENO, &(serveur->rdfs));
	FD_SET(serveur->sock, &(serveur->rdfs));
	while (i < actual)
		FD_SET(serveur->clients[i++].sock, &(serveur->rdfs));
}

void		init_serveur(t_serveur *serveur, int sock)
{
	int		i;

	i = 0;
	serveur->sock = sock;
	serveur->max = sock;
	while (i < MAX_CLIENTS)
	{
		serveur->clients[i].name = NULL;
		i++;
	}
}

int			create_serveur(int port)
{
	int					sock;
	t_sockaddr_in		sin;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == -1)
		exit_error("Socket");
	sin.sin_family = AF_INET;
	sin.sin_port = htons(port);
	sin.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(sock, (const struct sockaddr *)&sin, sizeof(sin)) == -1)
		exit_error("Bind");
	if (listen(sock, MAX_CLIENTS) == -1)
		exit_error("Listen");
	return (sock);
}
