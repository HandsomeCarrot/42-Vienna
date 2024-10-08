/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid_structure.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:32:52 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:55 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_start_pos(int pos)
{
	if (pos <= 5)
	{
		/*grid[0][pos - 1];*/
		return (100 + pos - 1);
	}
	else if (pos >= 6 && pos <= 9)
	{
		/*grid[3][pos - 5];*/
		return (230 + pos - 5);
	}
	else if (pos >= 10 && pos <= 13)
	{
		/*grid[pos - 9][0];*/
		return (300 + (10 * (pos - 9)));
	}
	else if (pos >= 14 && pos <= 17)
	{
		/*grid[pos - 13][3];*/
		return (403 + (10 * (pos - 13)));
	}
	return (0);
}

int	get_opposit_nbr(int pos)
{
	if (pos <= 5)
		pos += 4;
	else if (pos >= 6 && pos <= 9)
		pos -= 4;
	else if (pos >= 10 && pos <= 13)
		pos += 4;
	else if (pos >= 14 && pos <= 17)
		pos -= 4;
	return (pos);
}
