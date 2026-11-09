/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:00:39 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/24 14:13:02 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1 [] = "Abi";
	char s2 [] = "abc";
	printf("%d\n",ft_strcmp(s1,s2));
	return (0);
}*/
