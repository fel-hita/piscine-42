/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 18:50:06 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/18 03:31:36 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*arr;

	i = 0;
	arr = malloc((ac + 1) * sizeof(*arr));
	while (i < ac)
	{
		arr[i].size_param = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char				*ft_strdup(char *src)
{
	char	*dst;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dst = (char*)malloc((len + 1) * sizeof(*src));
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst - len);
}
