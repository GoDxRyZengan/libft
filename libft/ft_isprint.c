/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:32:33 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/18 01:41:14 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isprint(int c)
{
	unsigned char	a;

	a = c;
	if (a > 31 && a < 127)
		return (1);
	return (0);
}
