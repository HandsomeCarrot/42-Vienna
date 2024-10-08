/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:37:00 by vpoka             #+#    #+#             */
/*   Updated: 2024/08/01 10:29:52 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	size;
	long	pos;
	int		num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		size = max - min;
		*range = malloc(size * sizeof(int));
		pos = 0;
		num = min;
		while (pos < size)
		{
			range[0][pos] = num;
			num++;
			pos++;
		}
	}
	return (size);
}

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar('0' + nb);
}

int	main(void)
{
	int min = 0;
	int max = 10;

	long pos = 0;
	int *array;
	ft_ultimate_range(&array, min, max);
	long size = max - min;
	while (pos < size)
	{
		ft_putnbr(array[pos]);
		ft_putchar('\n');
		pos++;
	}
} */