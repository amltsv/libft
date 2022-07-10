/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 23:40:50 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:10 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
	c == '\v' || c == '\f' || c == '\r');
}

int		ft_atoi(const char *str)
{
	int					sign;
	unsigned long int	res;

	sign = 1;
	res = 0;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str != '\0') && ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}
