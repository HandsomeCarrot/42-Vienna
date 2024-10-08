/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:11:11 by skroboth          #+#    #+#             */
/*   Updated: 2024/07/24 21:26:59 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_outside(int x, int y, int vertical_counter)
{
	int	horizontal_counter;

	horizontal_counter = 1;
	while (horizontal_counter <= x)
	{
		if (horizontal_counter == 1 && vertical_counter == 1)
			ft_putchar('A');
		else if (horizontal_counter == x && vertical_counter == 1)
			ft_putchar('C');
		else if (horizontal_counter == 1 && vertical_counter == y)
			ft_putchar('A');
		else if (horizontal_counter == x && vertical_counter == y)
			ft_putchar('C');
		else
			ft_putchar('B');
		horizontal_counter++;
	}
}

void	write_inside(int x)
{
	int	counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
			ft_putchar('B');
		else if (counter == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		counter++;
	}
}

void	rush03(int x, int y)
{
	int	vertical_counter;

	vertical_counter = 1;
	while (vertical_counter <= y)
	{
		if (vertical_counter == 1 || vertical_counter == y)
		{
			write_outside(x, y, vertical_counter);
			ft_putchar('\n');
		}
		else
		{
			write_inside(x);
			ft_putchar('\n');
		}
		vertical_counter++;
	}
}
