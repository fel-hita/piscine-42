/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:28:25 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/18 05:48:25 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

void				ft_putnbr(int nb);

void				ft_putchar(char c);

void				ft_putstr(char *str);

char				**ft_split_whitespaces(char *str);

char				*ft_strdup(char *src);

int					ft_strlen(char *str);

void				ft_show_tab(struct s_stock_par *par);

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

#endif
