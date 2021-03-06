/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 02:02:38 by akhoucha          #+#    #+#             */
/*   Updated: 2017/11/29 02:14:06 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i1;
	int j2;

	i1 = 0;
	j2 = 0;
	while (s1[i1])
		i1++;
	while (s2[j2] && j2 < (int)n)
	{
		s1[i1] = s2[j2];
		i1++;
		j2++;
	}
	s1[i1] = '\0';
	return (s1);
}
