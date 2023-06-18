/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:56:42 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:09:52 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string copying
** SINOPSE : cópia de string limitada por tamanho
**
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
**
** 		As funções strlcpy() e strlcat() copiam e concatenam strings respectivamente.
** Elas são projetadas para serem mais seguras, mais consistentes e menos propensas
** a erros como strncpy(3) e strncat(3) podem gerar. Ao contrário dessas funções,
** strlcpy() e strlcat() ocupam o tamanho total do buffer de memória (não apenas o
** comprimento) e garante a terminação NULL do resultado (contanto que o tamanho seja
** maior que 0 ou, no caso de strlcat(), que haja pelo menos um byte livre em *dst).
** Observe que você deve incluir um byte para o tamanho NULL. As funções strlcpy() e
** strlcat() operam apenas em verdadeiras strings 'C'. Isso significa que para
** strlcpy() *src deve ser terminada em NULL e para strlcat() tanto *src quanto *dst
** devem ser terminados em NULL.
** 		A função strlcpy() vai copiar o que está dentro da origem (*src) para o destino
** (*dest) e vai fazer essa cópia, no máximo, até o tamanho “size - 1” do destino (*dest).
*/

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
