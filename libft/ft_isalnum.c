/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:15:22 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/13 11:12:26 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_isalnum(int c)
{
	unsigned char	a;

	a = c;
	if ((a > 47 && a < 58) || (a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	return (0);
}
