/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:26:30 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 19:58:20 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *p_dest;
	char *p_src;

	p_dest = dest;
	p_src = src;
	while (*p_dest)
	{
		p_dest++;
	}
	while (*p_src)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
	}
	*p_dest = '\0';
	return (dest);
}
