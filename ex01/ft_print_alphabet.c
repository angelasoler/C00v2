/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:47:24 by asoler            #+#    #+#             */
/*   Updated: 2022/02/02 23:29:01 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int		index;

	index = 97;
	while (index <= 122)
	{
		letter = index;
		write(1, &letter, 1);
		index++;
	}
}

// 97 é a representação decimal do simbolo 'a' na tabela ascii