/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:03:43 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 04:07:57 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;

	n = argc - 1;
	while (n > 0)
	{
		while (*argv[n] != '\0')
		{
			ft_putchar(*argv[n]);
			argv[n]++;
		}
		n--;
		ft_putchar('\n');
	}
}
