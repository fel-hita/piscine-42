/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:51:30 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/13 23:10:54 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int n;
	int *tab;

	n = min;
	if (min >= max)
		return (0);
	else
	{
		tab = malloc((max - min) * sizeof(int));
		while (n < max)
		{
			*tab = n;
			tab++;
			n++;
		}
		return (tab - (max - min));
	}
}
