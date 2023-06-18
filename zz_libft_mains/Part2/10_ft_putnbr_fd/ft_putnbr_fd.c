/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:42 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:32:56 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: output integer to given file
** SINOPSE : inteiro de saída para determinado arquivo
**
** DESCRIPTION:
** 		Outputs the integer ’n’ to the given file descriptor.
**
** DESCRIÇÃO:
** 		Emite o inteiro 'n' para o descritor de arquivo fornecido.
*/

#include <unistd.h>
#include "ft_putnbr_fd.h"
#include "ft_putchar_fd.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
