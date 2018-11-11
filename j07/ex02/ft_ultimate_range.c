/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:05:22 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/16 01:06:14 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int n;
	int *p;

	n = min;
	if (min >= max)
		return (0);
	else
	{
		p = malloc((max - min) * sizeof(int*));
		*range = p;
		while (n < max)
		{
			*p = n;
			p++;
			n++;
		}
	}
	return (max - min);
}
