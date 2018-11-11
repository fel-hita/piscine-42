/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:05:11 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/16 01:06:41 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*argvconcater(int size, char *concat, int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while ((i < size - 1) && j < argc)
	{
		while (*argv[j] != '\0')
		{
			concat[i] = *argv[j];
			i++;
			argv[j]++;
		}
		j++;
		if (i < size - 1)
		{
			concat[i] = '\n';
			i++;
		}
	}
	concat[i] = '\0';
	return (concat);
}

int		argvlen(int argc, char **argv)
{
	int i;
	int j;
	int len;

	j = 0;
	i = 1;
	len = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		j = 0;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;
	int		size;

	size = argvlen(argc, argv);
	size = size + (argc - 1);
	concat = malloc(size * sizeof(char));
	return (argvconcater(size, concat, argc, argv));
}
