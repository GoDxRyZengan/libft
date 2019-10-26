/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:48:54 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/26 04:34:29 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*chaine;

	if (!(chaine = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	chaine->content = content;
	chaine->next = NULL;
	return (chaine);
}
