/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:56:09 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/28 18:16:49 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_based(char *base)
{
	int	cur_char_pos;
	int	pos;

	cur_char_pos = 0;
	pos = 0;
	while (base[cur_char_pos] != '\0')
	{
		if (base[cur_char_pos] == '-' || base[cur_char_pos] == '+'
			|| base[cur_char_pos] == ' ')
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

int	minuses(char *str, int *pos)
{
	int	ms;

	ms = 0;
	while (str[*pos] == ' ' || str[*pos] == '\t' || str[*pos] == '\n'
		|| str[*pos] == '\v' || str[*pos] == '\f' || str[*pos] == '\r')
		(*pos)++;
	while (str[*pos] == '-' || str[*pos] == '+')
	{
		if (str[*pos] == '-')
			ms++;
		(*pos)++;
	}
	return (ms % 2);
}

int	len_char(char *str, char *base, int pos, int decider)
{
	int	len;
	int	base_value;

	if (decider == 0)
	{
		len = 0;
		while (str[pos] != '\0')
		{
			len++;
			pos++;
		}
		return (len);
	}
	else
	{
		base_value = 0;
		while (str[pos] != base[base_value] && base[base_value] != '\0')
		{
			base_value++;
		}
		if (str[pos] == base[base_value])
			return (base_value);
	}
	return (-1);
}

int	power(int base, int pow)
{
	int	res;

	res = base;
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		res *= base;
		pow--;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num_len;
	int	base_size;
	int	ms;
	int	pos;
	int	res;

	pos = 0;
	res = 0;
	ms = minuses(str, &pos);
	if (ms == 2)
		return (0);
	num_len = len_char(str, base, pos, 0);
	base_size = base_based(base);
	if (base_size < 2)
		return (0);
	while (num_len >= 1)
	{
		if (len_char(str, base, pos, 1) < 0)
			return (0);
		res += (len_char(str, base, pos++, 1) * power(base_size, --num_len));
	}
	if (ms == 1)
		res = res * (-1);
	return (res);
}

/* int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_atoi_base(av[1], av[2]));
	}
	return (0);
} */
