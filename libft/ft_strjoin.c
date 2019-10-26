/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 01:18:48 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:19:22 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len_of_both_str(char *s1, char *s2)
{
	int		a;
	int		len;

	a = 0;
	while (s1[a])
		a++;
	len = a;
	a = 0;
	while (s2[a])
		a++;
	len = len + a;
	return (len);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		a;
	int		len;

	len = len_of_both_str((char*)s1, (char*)s2);
	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	a = 0;
	while (s1[a])
	{
		new[a] = s1[a];
		a++;
	}
	len = a;
	a = 0;
	while (s2[a])
	{
		new[len + a] = s2[a];
		a++;
	}
	new[len + a] = '\0';
	return (new);
}
