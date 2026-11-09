/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 23:20:18 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/21 19:58:36 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 32 && str[i] < 126))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*int main (void)
{
	int i = 0;
	char str [] = "\1";
	i = ft_str_is_printable(str);
	printf("%d\n",i);

}*/
