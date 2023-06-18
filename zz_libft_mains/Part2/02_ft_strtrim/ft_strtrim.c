/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:01:40 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:27:04 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
** SINOPSE : "aparar" o início e o fim da string com os caracteres especificados
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
**
** DESCRIÇÃO:
** 		Aloca (com malloc(3)) e retorna uma cópia de 's1' com os caracteres
**  especificados em 'conjunto' removidos do início e do final da string.
*/

#include <stdio.h>
#include "ft_strtrim.h"
#include "ft_strchr.h"
#include "ft_substr.h"
#include "ft_strlen.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
