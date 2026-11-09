/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:00:39 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/29 00:26:57 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((s1[i] - s2[i]));
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%d\n",ft_strncmp("abc","aby",3));
	return (0);
}*/
