/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:45 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:31:54 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: output string to given file
** SINOPSE : string de saída para determinado arquivo
**
** DESCRIPTION:
** 		Outputs the string ’s’ to the given file descriptor.
**
** DESCRIÇÃO:
** 		Emite a string 's' para o descritor de arquivo fornecido.
*/

#include <unistd.h>
#include "ft_putstr_fd.h"
#include "ft_putchar_fd.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
