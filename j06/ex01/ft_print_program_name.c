/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:26:20 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 05:57:18 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;

	n = argc;
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		argv[0]++;
		n++;
	}
	ft_putchar('\n');
	return (0);
}
