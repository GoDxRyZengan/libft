/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 20:41:37 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/22 18:23:56 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			count_word(char const *s, char c)
{
	int		a;
	int		b;

	b = 0;
	a = 0;
	if (s[a] == '\0')
		return (b = 0);
	while (s[a] == c)
		a++;
	if (s[a] != '\0')
		b++;
	while (s[a])
	{
		if (s[a] == c && (s[a + 1] != c && s[a + 1] != '\0'))
			b++;
		a++;
	}
	return (b);
}

char		*make_split(char const *s, char c, int index)
{
	int		a;
	char	*new;

	a = 0;
	while (s[index + a] != c)
		a++;
	if (!(new = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	a = 0;
	while (s[index + a] != c && s[index + a])
	{
		new[a] = s[index + a];
		a++;
	}
	new[a] = '\0';
	return (new);
}

int			check_first_cara(char const *s, char c)
{
	int		index;

	index = 0;
	while (s[index] == c && s[index] != '\0')
		index++;
	return (index);
}

char		**ft_split(char const *s, char c)
{
	int		b;
	int		a;
	char	**tab;

	a = 0;
	if (!s)
		return (NULL);
	b = count_word(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (b + 1))))
		return (NULL);
	b = 0;
	a = check_first_cara(s, c);
	while (s[a])
	{
		if (s[a] != c)
		{
			tab[b] = make_split(s, c, a);
			while (s[a + 1] != c && s[a + 1] != '\0')
				a++;
			b++;
		}
		a++;
	}
	tab[b] = NULL;
	return (tab);
}
