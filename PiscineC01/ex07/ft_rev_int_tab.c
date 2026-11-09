/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anniraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:13:30 by anniraha          #+#    #+#             */
/*   Updated: 2026/10/13 22:37:37 by anniraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)

{
	int	debut;
	int	fin;
	int	temp;

	debut = 0;
	fin = size -1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab [fin];
		tab[fin] = temp;
		debut ++;
		fin --;
	}
}
