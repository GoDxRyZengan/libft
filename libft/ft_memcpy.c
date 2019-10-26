/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:46:42 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:15:18 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*tmp1;
	int				a;

	a = 0;
	tmp1 = (unsigned char*)src;
	tmp = dst;
	while (len > 0)
	{
		tmp[a] = tmp1[a];
		len--;
		a++;
	}
	return (dst);
}
