/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:28:10 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/22 14:22:36 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int a;

	a = 0;
	while (s[a])
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
	ft_putchar_fd('\n', fd);
}
