/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:58:49 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/16 21:00:09 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	swap_loop(int **tab, int **second, int *size, int initial_size)
{
	while (!(**tab <= **second))
	{
		ft_swap(*tab, *second);
		if (*size != initial_size)
		{
			*tab = *tab - 1;
			*second = *second - 1;
			*size = *size + 1;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*second;
	int	initial_size;

	initial_size = size;
	while (size - 1 > 0)
	{
		second = tab + 1;
		if (*tab <= *second)
		{
			tab++;
			size--;
		}
		else
		{
			swap_loop(&tab, &second, &size, initial_size);
		}
	}
}

/*
#include <stdio.h>

void	ft_putstr(int *ptr, int size)
{
	while (size > 0)
	{
		printf("%d, ", *ptr);
		ptr++;
		size--;
	}
	printf("\n");
}

int	ft_strlen(int *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(void)
{
	int	nbr[] = {8, 2, 20, 69, 42, 1, -5, 1, 2, 40, 12314, 231 , 4, 35, 4, 5};
	int	*ptr = &nbr[0];
	int size = ft_strlen(ptr);

	ft_putstr(ptr, size);
	ft_sort_int_tab(nbr, size);
	ft_putstr(ptr, size);
}
*/
