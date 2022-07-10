/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 23:41:34 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:05 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int ch)
{
	if (ft_isalpha(ch))
		return (ft_isalpha(ch));
	else if (ft_isdigit(ch))
		return (1);
	else
		return (0);
}
