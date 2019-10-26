/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:40:19 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 20:19:12 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	int				d;
	unsigned char	a;
	unsigned char	*b;

	d = 0;
	b = (unsigned char*)s;
	a = c;
	while (b[d] != '\0' && n > 0)
	{
		if (b[d] == a)
			return (b + d);
		d++;
		n--;
	}
	return (NULL);
}
