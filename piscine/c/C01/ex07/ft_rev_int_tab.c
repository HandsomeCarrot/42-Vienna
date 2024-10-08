/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:48:45 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/16 15:03:42 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_nbrs(int *first, int *second)
{
	int	temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end;
	int	position;

	position = 1;
	end = tab + size - 1;
	while (position <= (size / 2))
	{
		swap_nbrs(tab, end);
		tab++;
		end--;
		position++;
	}
}

/*
#include <stdio.h>

void	ft_putstr(int *ptr, int size)
{
	while (size > 0)
	{
		printf("%d", *ptr);
		ptr++;
		size--;
	}
	printf("\n");
}

int	ft_strlen(int *str)
{
	int	counter;

	counter = 0;
	while (*str > 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(void)
{
	int	nbr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	*ptr = &nbr[0];
	int size = ft_strlen(ptr);
	
	ft_putstr(ptr, size);
	ft_rev_int_tab(ptr, size);
	ft_putstr(ptr, size);
}
*/
