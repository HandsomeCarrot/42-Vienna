/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:07:03 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:49 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_row(int grid[4])
{
	int	nbr;
	int	count;
	int	pos;

	nbr = 1;
	count = 0;
	while (nbr < 5)
	{
		pos = 0;
		while (pos < 4)
		{
			if (grid[pos] == nbr)
				count++;
			if (count > 1)
				return (0);
			pos++;
		}
		if (count != 1)
			return (0);
		count = 0;
		nbr++;
	}
	return (1);
}

int	count_col(int grid[4][4], int row)
{
	int	nbr;
	int	count;
	int	pos;

	nbr = 1;
	count = 0;
	while (nbr < 5)
	{
		pos = 0;
		while (pos < 4)
		{
			if (grid[pos][row] == nbr)
				count++;
			if (count > 1)
				return (0);
			pos++;
		}
		if (count != 1)
			return (0);
		count = 0;
		nbr++;
	}
	return (1);
}

int	valid_board(int grid[4][4])
{
	int	try;

	try = 0;
	while (try <= 3)
	{
		if (count_row(grid[try]) == 0)
			return (0);
		try++;
	}
	try = 0;
	while (try <= 3)
	{
		if (count_col(grid, try) == 0)
			return (0);
		try++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int arr[4][4] = {{3, 2, 1, 4}, {2, 1, 4, 3}, {1, 4, 3, 2}, {4, 3, 2, 1}};

	printf("%d\n", count_row(arr[0]));
	printf("%d\n", count_row(arr[1]));
	printf("%d\n", count_row(arr[2]));
	printf("%d\n", count_row(arr[3]));
	printf("\n%d\n", count_col(arr, 0));
	printf("%d\n", count_col(arr, 1));
	printf("%d\n", count_col(arr, 2));
	printf("%d\n", count_col(arr, 3));
	printf("\n%d\n", valid_board(arr));
}*/