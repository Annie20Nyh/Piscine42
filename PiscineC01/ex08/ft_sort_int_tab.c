void	ft_sort_int_tab(int *tab, int size)

{
	int	i;	
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
	j = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			tmp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = tmp;
		}
		j++;
	}
	i++;
	}
}

#include <unistd.h>
int	main(void)
{
	int tab[] = {3, 1, 2};
	char c1 = tab[0] + '0';
	char c2 = tab[1] + '0';
	char c3 = tab[2] + '0';
	ft_sort_int_tab(tab, 3);
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	return (0);
}
