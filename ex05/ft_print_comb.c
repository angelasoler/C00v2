/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:22:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/04 14:01:28 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit[4];

	digit[0] = '0';
	digit[3] = '\n';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write(1, digit, 3);
				if (digit[0] < '7')
				{
					write(1, ", ", 2);
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
