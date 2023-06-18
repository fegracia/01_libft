/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:44 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:26:35 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
** SINOPSE : localizar um caractere em string (primeira ocorrência)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the functions 
**  locate the terminating `\0'.
**
** DESCRIÇÃO:
** 		A função strchr() localiza a primeira ocorrência de 'c' (convertida em um
**  char) na string apontada por 's'. O caractere terminado em NULO é considerado 
**  como parte da string, portanto, se 'c' é `\0', a função localiza a terminação `\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
