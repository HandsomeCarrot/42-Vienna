/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:36:24 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 19:40:47 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_pos;
	int	f_pos;
	unsigned char	a;
	unsigned char	b;

	str_pos = 0;
	f_pos = 0;
	while (str[str_pos] != '\0')
	{
		a = str[str_pos];
		b = to_find[f_pos];
		while ((a == b)
			&& (to_find[f_pos] != '\0') && (str[str_pos] != '\0'))
		{
			f_pos++;
			str_pos++;
			a = str[str_pos];
			b = to_find[f_pos];
		}
		if (to_find[f_pos] == '\0')
			return (str + a - b);
		f_pos = 0;
		str_pos++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[30] = "abcdefghijklmnoptrstuvwxyzpqt";
	char str2[3] = "qtt";

	printf("%s\n", strstr(str1, str2));
	printf("%s\n", ft_strstr(str1, str2));

	return (0);
} */