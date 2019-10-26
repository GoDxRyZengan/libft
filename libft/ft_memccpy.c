/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:46:59 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/26 20:22:21 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp1;
	int				a;

	a = 0;
	tmp1 = (unsigned char*)src;
	tmp = dst;
	while (n > 0)
	{
		tmp[a] = tmp1[a];
		if (tmp[a] == (unsigned char)c)
			return (dst + a + 1);
		n--;
		a++;
	}
	return (NULL);
}
