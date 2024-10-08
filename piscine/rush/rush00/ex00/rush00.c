/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:57:04 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:26:21 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	vertical_lines(int x, int y, int x_counter, int y_counter)
{
	if ((x_counter == x && y_counter == 1)
		|| (x_counter == x && y_counter == y)
		|| (x_counter == 1 && y_counter == 1)
		|| (x_counter == 1 && y_counter == y))
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	horizontal_lines(int x, int x_counter)
{
	if (x_counter == 1 || x_counter == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	line_decider(int x, int y, int x_counter, int y_counter)
{
	if (y_counter == 1 || y_counter == y)
	{
		vertical_lines(x, y, x_counter, y_counter);
	}
	else
	{
		horizontal_lines(x, x_counter);
	}
}

void	rush00(int x, int y)
{
	int	x_counter;
	int	y_counter;

	x_counter = 1;
	y_counter = 1;
	while (y_counter <= y)
	{
		while (x_counter <= x)
		{
			line_decider(x, y, x_counter, y_counter);
			x_counter++;
		}
		ft_putchar('\n');
		x_counter = 1;
		y_counter++;
	}
}
