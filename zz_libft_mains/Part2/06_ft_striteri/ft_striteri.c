/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:03:51 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:30:53 by fgracia          ###   ########.fr       */
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
** 		A função ft_striteri percorre uma string s e aplica uma função f a cada
** 	caractere da string, passando o índice do caractere e um ponteiro para o
**	próprio caractere como argumento.
*/

#include <stdio.h>
#include "ft_striteri.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
