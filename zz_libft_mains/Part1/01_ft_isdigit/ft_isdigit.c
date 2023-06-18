/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:06 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/16 22:26:33 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
** SINOPSE : teste de caractere de dígito decimal
**
** DESCRIPTION:
** 		The isdigit() function tests for a decimal digit character.
**
** DESCRIÇÃO:
** 		A função isdigit() testa um caractere de dígito decimal.
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
