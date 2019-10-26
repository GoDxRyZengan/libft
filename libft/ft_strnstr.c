/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 01:21:07 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:45:12 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	int		b;
	char	*d;

	d = (char*)haystack;
	a = 0;
	if (needle[a] == '\0')
		return (d);
	while (a < len && d[a])
	{
		b = 0;
		if (d[a] == needle[b])
		{
			while ((d[a + b] == needle[b]) && (a + b < len) && d[a + b] != '\0')
			{
				if (needle[b + 1] == '\0')
					return (d + a);
				b++;
			}
		}
		a++;
	}
	return (NULL);
}
