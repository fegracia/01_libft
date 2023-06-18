/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:38 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 18:41:28 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower case to upper case letter conversion
** SINOPSE : conversão de letras minúsculas para maiúsculas
**
** DESCRIPTION:
** 		The toupper() function converts a lower-case letter to the corresponding
**	upper-case letter.
**
** DESCRIÇÃO:
** 		A função toupper() converte uma letra minúscula em sua correspondente letra 
** maiúscula.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
