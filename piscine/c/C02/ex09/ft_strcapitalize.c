/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:31:26 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/22 13:16:37 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*change_word(char *str, int *position)
{
	int	first_letter;

	first_letter = 1;
	while ((str[*position] >= '0' && str[*position] <= '9')
		|| (str[*position] >= 'A' && str[*position] <= 'Z')
		|| (str[*position] >= 'a' && str[*position] <= 'z'))
	{
		if (first_letter == 1
			&& (str[*position] >= 'a' && str[*position] <= 'z'))
		{
			str[*position] = str[*position] - 32;
			first_letter = 0;
		}
		else if (first_letter == 1)
		{
			first_letter = 0;
		}
		else if (str[*position] >= 'A' && str[*position] <= 'Z')
		{
			str[*position] = str[*position] + 32;
		}
		++*position;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	position;
	int	new_word;

	position = 0;
	new_word = 0;
	while (str[position] != '\0')
	{
		if ((str[position] >= '0' && str[position] <= '9')
			|| (str[position] >= 'A' && str[position] <= 'Z')
			|| (str[position] >= 'a' && str[position] <= 'z'))
		{
			new_word = 1;
		}
		if (new_word == 1)
		{
			change_word(str, &position);
		}
		position++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[] = "saLut, comment tu vas ?
	 42MoTs quaRante-deux; cinquante+et+un";
	printf("Before: %s\n\n", string);

	ft_strcapitalize(string);
	printf("After: %s", string);
}*/