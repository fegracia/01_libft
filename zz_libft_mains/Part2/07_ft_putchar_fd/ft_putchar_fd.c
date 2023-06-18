/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:32 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:31:14 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdio.h>
** SYNOPSIS: output a character to given file
** SINOPSE : saída de um caractere para determinado arquivo
**
** DESCRIPTION:
** 		The fputc() function writes the character c (converted to an 'unsigned
**	char') to the output stream pointed to by stream.
** 	[42 PDF] Outputs the character ’c’ to the given file descriptor
**
** DESCRIÇÃO:
** 		A função fputc() escreve o caractere c (convertido em um 'unsigned
** 	char') para o fluxo de saída apontado por stream.
** 	[42 PDF] Emite o caractere 'c' para o descritor de arquivo fornecido.
*/

#include <unistd.h>
#include "ft_putchar_fd.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
