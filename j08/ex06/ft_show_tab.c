/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:19:16 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/18 08:26:00 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void		ft_show_tab(struct s_stock_par *par)
{
	int		i;

	while (par->str)
	{
		i = 0;
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while (par->tab[i])
		{
			ft_putstr(par->tab[i]);
			ft_putchar('\n');
			i++;
		}
		par++;
	}
}

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void		min_checker(void)
{
	char	*t;
	int		i;

	i = 0;
	t = "-2147483648";
	while (i <= 10)
	{
		ft_putchar(t[i]);
		i++;
	}
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		min_checker();
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}
