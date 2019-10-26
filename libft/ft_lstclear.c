/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 06:03:18 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/26 20:48:51 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *lst;
	if (lst)
	{
		while (tmp)
		{
			tmp_next = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = tmp_next;
		}
		*lst = NULL;
	}
}
