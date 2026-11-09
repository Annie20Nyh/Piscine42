/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:07:23 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/25 16:33:41 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	j;

	i = 0;
	if (to_find [0] == '\0')
		return (str);
	while (str [i] != '\0')
	{
		j = 0;
		while (str [i + j] == to_find [j] && to_find [j] != '\0')
		{
			j ++;
			if (to_find [j] == '\0')
				return (&str [i]);
		}
		i ++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	 main(void)

{
	char  str[] = "mama va ou marhe ";
	char to_find [] = "va";
	char *t;
	t = ft_strstr (str, to_find);
	printf("%s\n", t);
	return(0);
}*/
