/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:56 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:30:32 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: create new string from modifying string with specified function
** SINOPSE : cria uma nova string a partir da modificação da string com a função
** especificada
**
** DESCRIPTION:
** 		Applies the function ’f’ to each character of the string ’s’ to create
**	a new string (with malloc(3)) resulting from successive applications of ’f’.
**
** DESCRIÇÃO:
** 		Aplica a função ’f’ a cada caractere da string ’s’ para criar uma nova
**	string (com malloc(3)) resultante de aplicações sucessivas de 'f'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strdup.h"

char	*ft_strmapi(const char *s, char f(unsigned int, char))
{
	unsigned int	i;
	char			*dup;

	if (!s)
		return (NULL);
	dup = ft_strdup(s);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = f(i, s[i]);
		i++;
	}
	return (dup);
}
