/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:36 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:32:25 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: output string to given file with newline
** SINOPSE : string de saída para determinado arquivo com nova linha
**
** DESCRIPTION:
** 		Outputs the string ’s’ to the given file descriptor, followed by a
**	newline.
**
** DESCRIÇÃO:
** 		Emite a string 's' para o descritor de arquivo fornecido, seguido por
** 	uma nova linha.
*/

#include <unistd.h>
#include "ft_putchar_fd.h"
#include "ft_putstr_fd.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
