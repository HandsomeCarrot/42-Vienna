/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:53:42 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:47 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write_array

void	print(int grid[4][4]);

//valid_board

int	count_row(int grid[4]);

int	count_col(int grid[4][4], int row);

int	valid_board(int grid[4][4]);

//all_permutations

int	permutation(void);

//fill_rows

void	write_row(int grid[4][4], int permutation[24][2][4], int row, int pos_row);

int	fill_rows(int grid[4][4], int **input, int row, int permutation[24][2][4]);