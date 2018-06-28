/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcernea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 17:10:28 by vcernea           #+#    #+#             */
/*   Updated: 2016/10/21 17:10:30 by vcernea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_numbers(void)
{
	char l;

	l = '0';
	while (l <= '9')
	{
		ft_putchar(l);
		l = l + 1;
	}
}