/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:23:02 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 20:23:10 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;
	size_t	a;

	a = 0;
	if (!(b = (void*)malloc(sizeof(*b) * (count * size))))
		return (NULL);
	b = ft_memset(b, '\0', (count * size));
	return (b);
}
