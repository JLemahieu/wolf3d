/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:57:02 by jlemahie          #+#    #+#             */
/*   Updated: 2017/11/28 17:39:40 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		ft_putchar(s[i]);
		i++;
	}
}
