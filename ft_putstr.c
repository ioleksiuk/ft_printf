/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:56:19 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/03/24 13:48:40 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_putstr(char const *s, t_pf *a)
{
	if (s)
		while (*s)
		{
			write(1, s, 1);
			s++;
			a->i++;
		}
}
