/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:19 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:28:16 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: find length of string
** SINOPSE : retorna o comprimento de uma string
**
** DESCRIPTION:
** 		The strlen() function computes the length of the string s.
**
** DESCRIÇÃO:
** 		A função strlen() calcula o comprimento de uma string s.
*/

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}
