/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:46:48 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:50:39 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*set1;
	char	*p;
	int		end;
	char	*s1;
	int		i;

	set1 = (char *)set;
	s1 = (char *)s;
	i = 0;
	if (!s || !set)
		return (0);
	while (s1 && (ft_strchr(set1, s1[i])))
		i++;
	end = ft_strlen(s1);
	while (s1 && end >= i && (ft_strchr(set1, s1[end])))
		end--;
	if (!(p = ft_substr(s1, i, end - i + 1)))
		return (0);
	return (p);
}
