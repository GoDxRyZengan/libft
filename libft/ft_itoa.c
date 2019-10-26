/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:21:19 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 19:45:00 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				lenght(long int n)
{
	long int	a;

	a = 0;
	if (n == 0)
		a++;
	else if (n < 0)
	{
		a++;
		n = n * -1;
	}
	while (n > 0)
	{
		a++;
		n = n / 10;
	}
	return (a);
}

char			*for_a_0(char *str)
{
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	a;

	a = n;
	i = lenght(a);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (a == 0)
		return ((str = for_a_0(str)));
	if (a < 0)
	{
		str[0] = '-';
		a = a * -1;
	}
	while (a > 0)
	{
		str[i] = 48 + (a % 10);
		a = a / 10;
		i--;
	}
	return (str);
}
