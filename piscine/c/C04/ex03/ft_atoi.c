/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:24:30 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/28 18:16:55 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (str[*pos] < '0' || str[*pos] > '9')
		return (2);
	return (ms % 2);
}

int	get_num_len(char *str, int pos)
{
	int	len;

	len = 0;
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		len++;
		pos++;
	}
	return (len);
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

int	ft_atoi(char *str)
{
	int	pos;
	int	res;
	int	ms;
	int	num_len;

	pos = 0;
	res = 0;
	ms = minuses(str, &pos);
	if (ms == 2)
		return (0);
	num_len = get_num_len(str, pos);
	while (num_len > 1)
	{
		res += (power(10, num_len - 1)) * (str[pos] - 48);
		num_len--;
		pos++;
	}
	res += str[pos] - 48;
	if (ms == 1)
		res = -res;
	return (res);
}

/* #include <stdio.h>

int	main(void)
{
	char str[] = "abc0----ad";

	printf("%d", ft_atoi(str));
} */