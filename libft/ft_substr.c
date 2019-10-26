/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 01:22:06 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/22 14:20:59 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	a;

	a = 0;
	while (s[start + a] && a < len)
		a++;
	if (!(new = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	a = 0;
	while (s[start + a] && a < len)
	{
		new[a] = s[start + a];
		a++;
	}
	new[a] = '\0';
	return (new);
}
