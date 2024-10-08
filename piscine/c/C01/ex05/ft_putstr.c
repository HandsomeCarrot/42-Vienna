/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:46:54 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/15 11:27:27 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str > 0)
	{
		ft_putchar(*str);
		str++;
	}
}

/*
int	main(void)
{
	char	str[] = "Hello World!";
	char	*ptr;

	ptr = &str[0];
	ft_putstr(ptr);
}
*/
