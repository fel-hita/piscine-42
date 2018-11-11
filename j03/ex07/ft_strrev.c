/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:28:49 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/04 04:28:25 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		len(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	char	*p_bgn;
	char	*p_end;
	char	tmp;
	int		n;

	n = len(str);
	p_bgn = str;
	p_end = str + (len(str) - 1);
	while (n > len(str) / 2)
	{
		tmp = *p_bgn;
		*p_bgn = *p_end;
		*p_end = tmp;
		p_bgn++;
		p_end--;
		n--;
	}
	return (str);
}
