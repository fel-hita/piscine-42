/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:53:06 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 04:07:39 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (*s1 - *s2);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	else
		return (0);
}

void	print_params(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		while (*argv[n] != '\0')
		{
			ft_putchar(*argv[n]);
			argv[n]++;
		}
		ft_putchar('\n');
		n++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	j = 2;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				p = argv[j];
				argv[j] = argv[i];
				argv[i] = p;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	print_params(argc, argv);
}
