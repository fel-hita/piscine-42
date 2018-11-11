/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 02:47:49 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/05 00:45:37 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
