/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid_directions_fixed.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:03:04 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:27:45 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_up(int grid[4][4], int start_pos, int nbr, int nbr_opposite)
{
	int	current_nbr;

	if (nbr == 4)
	{
		current_nbr = 1;
		while (current_nbr < 5)
		{
			grid[start_pos / 10 + (current_nbr - 1)]
			[start_pos % 10] = current_nbr;
			current_nbr++;
		}
	}
	else if (nbr == 1)
	{
		grid[0][start_pos % 10] = 1;
		if (nbr_opposite == 2)
		{
			grid[3][start_pos % 10] = 3;
		}
		else if (nbr_opposite == 3)
		{
			grid[3][start_pos % 10] = 2;
		}
	}
}

void	col_down(int grid[4][4], int start_pos, int nbr, int nbr_opposite)
{
	int	current_nbr;

	if (nbr == 4)
	{
		current_nbr = 1;
		while (current_nbr <= 4)
		{
			grid[start_pos / 10 - (current_nbr - 1)]
			[start_pos % 10] = current_nbr;
			current_nbr++;
		}
	}
	else if (nbr == 1)
	{
		grid[3][start_pos % 10] = 1;
		if (nbr_opposite == 2)
		{
			grid[0][start_pos % 10] = 3;
		}
		else if (nbr_opposite == 3)
		{
			grid[0][start_pos % 10] = 2;
		}
	}
}

void	row_left(int grid[4][4], int start_pos, int nbr, int nbr_opposite)
{
	int	current_nbr;

	if (nbr == 4)
	{
		current_nbr = 1;
		while (current_nbr <= 4)
		{
			grid[start_pos / 10]
			[start_pos % 10 + (current_nbr - 1)] = current_nbr;
			current_nbr++;
		}
	}
	else if (nbr == 1)
	{
		grid[start_pos / 10][0] = 1;
		if (nbr_opposite == 2)
		{
			grid[start_pos / 10][3] = 3;
		}
		else if (nbr_opposite == 3)
		{
			grid[start_pos / 10][3] = 2;
		}
	}
}

void	row_right(int grid[4][4], int start_pos, int nbr, int nbr_opposite)
{
	int	current_nbr;

	if (nbr == 4)
	{
		current_nbr = 1;
		while (current_nbr <= 4)
		{
			grid[start_pos / 10]
			[start_pos % 10 - (current_nbr - 1)] = current_nbr;
			current_nbr++;
		}
	}
	else if (nbr == 1)
	{
		grid[start_pos / 10][3] = 1;
		if (nbr_opposite == 2)
		{
			grid[start_pos / 10][0] = 3;
		}
		else if (nbr_opposite == 3)
		{
			grid[start_pos / 10][0] = 2;
		}
	}
}
