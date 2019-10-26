/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:57:18 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/15 20:40:29 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_isalpha(int c)
{
	unsigned char	a;

	a = c;
	if ((a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	return (0);
}
