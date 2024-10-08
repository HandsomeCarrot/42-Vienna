/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:12:36 by vpoka             #+#    #+#             */
/*   Updated: 2024/10/09 14:17:29 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of digits in an integer.
 *
 * This function calculates the number of digits required to represent
 * the given integer `n`. It handles both positive and negative integers.
 * If it is negative it adds one for the minus sign.
 *
 * @param n The integer whose digits are to be counted.
 * @return The number of digits in the integer `n`.
 */
static int	count_digits(int n)
{
	int	result;

	result = 0;
	if (n == INT_MIN)
		result = 11;
	else
	{
		if (n < 0)
		{
			result++;
			n = -n;
		}
		while (n > 9)
		{
			n /= 10;
			result++;
		}
		result++;
	}
	return (result);
}

/**
 * @brief Converts an integer to a string representation.
 *
 * This static function takes an integer and converts it to its string
 * representation, storing the result in the provided destination buffer.
 *
 * @param dst The destination buffer where the string representation of the
 *  integer will be stored.
 * @param n The integer to be converted to a string.
 * @param pos The current position in the destination buffer where the next
 *  character should be placed.
 */
static void	convert(char *dst, int n, int pos)
{
	if (n == INT_MIN)
	{
		dst[1] = '2';
		convert(dst, 147483648, pos);
	}
	else if (n < 0)
		convert(dst, -n, pos);
	else if (n > 9)
	{
		convert(dst, (n / 10), pos - 1);
		convert(dst, (n % 10), pos);
	}
	else
		dst[pos] = ('0' + n);
}

/**
 * @brief Converts an integer to a null-terminated string.
 *
 * This function takes an integer value and converts it to a string
 * representation. The resulting string is dynamically allocated and
 * must be freed by the caller to avoid memory leaks.
 *
 * @param n The integer to be converted.
 * @return A pointer to the newly allocated string representing the integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*result;
	int		digits;

	digits = count_digits(n);
	result = malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	convert(result, n, digits - 1);
	if (n < 0)
		*result = '-';
	result[digits] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	int n = 0;
	printf("%d\n", count_digits(n));
	printf("%d\n", n);
	printf("%s\n", ft_itoa(n));
}*/
