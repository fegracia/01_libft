/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:41 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:12:10 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: upper case to lower case letter conversion
** SINOPSE : conversão de letras maiúsculas para minúsculas
**
** DESCRIPTION:
** 		The tolower() function converts an upper-case letter to the
**	corresponding lower-case letter.
**
** DESCRIÇÃO:
** 		A função tolower() converte uma letra maiúscula para sua letra
** 	minúscula correspondente.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
