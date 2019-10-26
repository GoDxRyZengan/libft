/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:13:02 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:17:40 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	int				b;

	b = 0;
	a = c;
	while (s[b])
	{
		if (s[b] == a)
			return ((char*)&s[b]);
		b++;
	}
	if (a == '\0')
		return ((char*)&s[b]);
	return (0);
}
