/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:16 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/16 22:32:43 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character inclusive)
** SINOPSE : teste de caracteres de impressão (incluindo caractere de espaço)
**
** DESCRIPTION:
** 		The isprint() function tests for any printing character, including space
**	(` ').
**
** DESCRIÇÃO:
** 		A função isprint() testa qualquer caractere de impressão, incluindo espaço
**	(` ').
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
