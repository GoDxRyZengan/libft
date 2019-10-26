/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucoulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:59:33 by hucoulon          #+#    #+#             */
/*   Updated: 2019/10/15 20:38:46 by hucoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				i;

	i = 0;
	a = c;
	while (s[i])
		i++;
	if (a == '\0')
		return ((char*)&s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char*)&s[i]);
		i--;
	}
	return (0);
}
