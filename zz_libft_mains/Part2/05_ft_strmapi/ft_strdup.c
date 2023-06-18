/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:16:11 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:29:45 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
** SINOPSE : salvar uma cópia de uma string (com malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
**
** DESCRIÇÃO:
** 		A função strdup() aloca memória suficiente para uma cópia da string
**  's1', faz a cópia e retorna um ponteiro para ela. O ponteiro pode
**  posteriormente ser usado como um argumento para a função free(3).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strlen.h"
#include "ft_memcpy.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!(s2))
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
