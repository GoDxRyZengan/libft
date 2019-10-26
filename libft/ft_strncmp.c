/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:24:48 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:20:39 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	res;

	res = 0;
	a = 0;
	if (n == 0)
		return (0);
	while (n > a && (s1[a] != '\0' || s2[a] != '\0'))
	{
		if (s1[a] == s2[a])
			a++;
		else
		{
			res = (unsigned char)s1[a] - (unsigned char)s2[a];
			return (res);
		}
	}
	return (res);
}
