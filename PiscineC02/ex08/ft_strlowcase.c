/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:23:11 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/21 20:51:20 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}
/*int main ()
{
	char str [] = "aNNIE";
	ft_strlowcase(str);
	printf("%s\n",str);

	return (0);
}*/
