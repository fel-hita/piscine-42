/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:59:43 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/17 08:53:30 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		words_calculator(char *str)
{
	int words;
	int i;
	int flag;

	flag = 0;
	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			flag = 0;
			i++;
		}
		else
		{
			if (flag == 0)
				words++;
			flag = 1;
			i++;
		}
	}
	return (words);
}

int		len_calculator(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split_helper(char **splited, int words, char *str, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < words)
	{
		size = len_calculator(str);
		splited[i] = malloc(size * sizeof(char));
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		while (*str != '\t' && *str != '\n' && *str != ' ' && *str != '\0')
		{
			splited[i][j] = *str;
			str++;
			j++;
		}
		if (j != 0)
		{
			splited[i][j] = '\0';
		}
		j = 0;
		i++;
	}
	return (splited);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		words;
	int		size;
	char	**splited;

	i = 0;
	j = 0;
	size = 0;
	words = 0;
	words = words_calculator(str);
	if (words > 0)
	{
		splited = malloc((words + 1) * sizeof(char*));
		splited[words] = 0;
		return (ft_split_helper(splited, words, str, size));
	}
	else
	{
		splited = malloc(sizeof(char*));
		splited[0] = 0;
	}
	return (splited);
}
