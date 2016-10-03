/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 17:25:42 by cgay              #+#    #+#             */
/*   Updated: 2015/03/02 17:25:43 by cgay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	while (tmp != NULL)
	{
		del(tmp->content, tmp->content_size);
		tmp = tmp->next;
	}
	*alst = NULL;
}
