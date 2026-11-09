/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:10:24 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/21 18:50:14 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)

{
	int i = 0;
	char str[] = "tutoyer";
	ft_str_alpha(str);
	printf("%d",i);
}*/
