/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 01:21:46 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/22 20:52:42 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			check_cara(char c, char const *set)
{
	int		a;

	a = 0;
	while (set[a])
	{
		if (set[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		a;
	int		b;
	int		c;

	c = 0;
	b = ft_strlen(s1);
	a = 0;
	if (!(new = (char*)malloc(sizeof(char) * (b + 1))))
		return (NULL);
	while ((check_cara(s1[a], set)) == 1 && s1[a])
		a++;
	while ((check_cara(s1[b - 1], set)) == 1 && (&s1[b - 1] != &s1[0]))
		b--;
	while (a < b)
	{
		new[c] = s1[a];
		c++;
		a++;
	}
	new[c] = '\0';
	return (new);
}
