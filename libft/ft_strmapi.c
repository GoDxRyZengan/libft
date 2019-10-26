/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:19:00 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/21 15:41:16 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	int		a;
	char	*new;

	a = ft_strlen(s1);
	if (!(new = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	a = 0;
	while (s1[a])
	{
		new[a] = f(a, s1[a]);
		a++;
	}
	new[a] = '\0';
	return (new);
}
