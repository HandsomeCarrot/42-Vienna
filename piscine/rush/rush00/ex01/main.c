/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:18:06 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:26:29 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y);

int	main(void)
{
	rush01(1, 5);
	ft_putchar('\n');
	rush01(5, 1);
	ft_putchar('\n');
	rush01(12, 20);
	return (0);
}
