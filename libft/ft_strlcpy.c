/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:05:55 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 19:47:16 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int			b;
	int			a;

	a = 0;
	b = ft_strlen((char*)src);
	if ((dstsize == 0) || (dstsize - 1 == 0))
		return (b);
	while (dstsize - 1 > 0 && src[a])
	{
		dst[a] = src[a];
		a++;
		dstsize--;
	}
	dst[a] = '\0';
	return (b);
}
