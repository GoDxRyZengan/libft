/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:05:51 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/13 11:10:23 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_isdigit(int c)
{
	unsigned char	a;

	a = c;
	if (a > 47 && a < 58)
		return (1);
	return (0);
}
