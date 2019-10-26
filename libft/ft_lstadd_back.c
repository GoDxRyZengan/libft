/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 05:50:40 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/26 20:45:50 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (*alst == NULL)
	{
		lst->next = new;
		new->next = NULL;
	}
	else
	{
		while (lst->next)
			lst->next = lst;
		lst->next = new;
		new->next = NULL;
	}
}
