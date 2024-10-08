/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:33:25 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/25 14:53:16 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	base_based(char *base)
{
	int	cur_char_pos;
	int	pos;

	cur_char_pos = 0;
	pos = 0;
	while (base[cur_char_pos] != '\0')
	{
		if (base[cur_char_pos] == '-' || base[cur_char_pos] == '+')
			return (0);
		pos = cur_char_pos + 1;
		while (base[pos] != '\0')
		{
			if (base[pos] == base[cur_char_pos])
				return (0);
			pos++;
		}
		cur_char_pos++;
	}
	return (cur_char_pos);
}

void	write_nbrs(int nbr, char *base, int base_size)
{
	if (nbr == 0)
		return ;
	write_nbrs((nbr / base_size), base, base_size);
	if (nbr % base_size < 0)
		write(1, &base[(nbr % base_size) * (-1)], sizeof(char));
	else
		write(1, &base[nbr % base_size], sizeof(char));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (nbr == 0)
	{
		write(1, base, 1);
		return ;
	}
	base_size = base_based(base);
	if (base_size < 2)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	write_nbrs(nbr, base, base_size);
}

/* #include <stdio.h>

int	main(void)
{
	char	base1[] = "01234567";
	int		nbr1;

	nbr1 = -2147483648;
	ft_putnbr_base(nbr1, base1);
	printf("\n-20000000000\n");



	char	base2[] = "01234567";
	int		nbr2;

	nbr2 = -648;
	ft_putnbr_base(nbr2, base2);
	printf("\n-1210\n");



	char	base3[] = "01234567";
	int		nbr3;

	nbr3 = 0;
	ft_putnbr_base(nbr3, base3);
	printf("\n0\n");



	char	base4[] = "0123456789ABCDEF";
	int		nbr4;

	nbr4 = 2147483647;
	ft_putnbr_base(nbr4, base4);
	printf("\n7FFFFFFF\n");



	char	base5[] = "01";
	int		nbr5;

	nbr5 = 42;
	ft_putnbr_base(nbr5, base5);
	printf("\n101010\n");
} */
