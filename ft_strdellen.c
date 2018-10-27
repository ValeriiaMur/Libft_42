/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdellen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuradia <vmuradia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:13:22 by vmuradia          #+#    #+#             */
/*   Updated: 2018/10/26 10:05:38 by vmuradia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strdellen(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}
