/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:22:08 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/13 11:13:36 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_isascii(int c)
{
	unsigned char	a;

	a = c;
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}
