/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:14:32 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 19:47:50 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	c;

	b = (ft_strlen((char*)src));
	a = (ft_strlen(dst));
	printf("%lu\n", a);
	printf("%lu\n", b);
	if (a > dstsize - 1)
		return (dstsize + b);
	c = 0;
	while ((dstsize - 1) > (a + c) && src[c])
	{
		dst[a + c] = src[c];
		c++;
	}
	dst[a + c] = '\0';
	return (b + a);
}

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int		main(void)
{
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[10] = 'a';
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	write(1, "\n", 1);
	write(1, dest, 15);
}