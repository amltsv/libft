/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:22:24 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:33:23 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;
	size_t	count;
	char	*p;

	s1 = (char *)s;
	if (!s)
		return (0);
	count = ft_strlen(s1) - start;
	if (ft_strlen(s1) < start)
		count = 0;
	if (count > len)
		count = len;
	i = 0;
	if (!(p = (char *)malloc(count + 1)))
		return (0);
	while (count > i)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
