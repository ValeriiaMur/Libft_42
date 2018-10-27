/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuradia <vmuradia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:01:33 by vmuradia          #+#    #+#             */
/*   Updated: 2018/10/27 14:58:34 by vmuradia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		words;
	char		**res;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_cntwrd(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		res[i] = (char *)malloc(sizeof(char) * (ft_strdellen(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			res[i][j++] = *s++;
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

#include <stdio.h>

int main()
{
	printf("%s", *ft_strsplit("hello", 'a'));

}
