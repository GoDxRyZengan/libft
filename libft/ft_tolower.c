/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:08:01 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/13 11:17:59 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_tolower(int c)
{
	unsigned char	a;

	a = c;
	if (a > 64 && a < 91)
		a = a + 32;
	return (a);
}
