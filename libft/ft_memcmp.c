/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 22:20:42 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:14:41 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				a;
	int				res;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	a = 0;
	if (n == 0)
		return (0);
	while (n > 0 && ((ss1[a] != '\0') || (ss2[a] != '\0')))
	{
		if (ss1[a] != ss2[a])
		{
			res = ss1[a] - ss2[a];
			return (res);
		}
		a++;
		n--;
	}
	return (0);
}
