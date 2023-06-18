/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:26 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 23:55:53 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <strings.h>
** SYNOPSIS: write zeroes to a byte string
** SINOPSE : escrever zeros em uma string de bytes
**
** DESCRIPTION:
** 		The bzero() function writes n zeroed bytes to the string s. If n is
**	zero, bzero() does nothing.
**
** DESCRIÇÃO:
** 		A função bzero() escreve 'n' bytes zerados em uma string 's'. Se 'n' é
** zero, bzero() não faz nada.
*/

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*clean;
	size_t	i;

	i = 0;
	clean = s;
	while (i < n)
	{
		clean[i] = 0;
		i++;
	}
}
