/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:02:57 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:27:53 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write_grid_directions_fixed.c

void	col_down(int grid[4][4], int start_pos, int nbr, int nbr_opposite);

void	col_up(int grid[4][4], int start_pos, int nbr, int nbr_opposite);

void	row_left(int grid[4][4], int start_pos, int nbr, int nbr_opposite);

void	row_right(int grid[4][4], int start_pos, int nbr, int nbr_opposite);

//write_grid_structure.c

int	get_start_pos(int pos);

int	get_opposit_nbr(int pos);

//write_grit_numbers.c

void	love(int grid[4][4], char **input);

void	peace(int grid[4][4], int start_pos, int nbr, int nbr_opposite);

void	write1(int grid[4][4], char **input, int pos);

void	write4(int grid[4][4], char **input, int pos);

//pint.c

void	print(int grid[4][4]);