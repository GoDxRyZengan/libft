/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:42:38 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:52:38 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*tmp;

	tmp = b;
	a = 0;
	while (len > a)
	{
		tmp[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
