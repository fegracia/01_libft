/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:16:08 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:19:28 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
** SYNOPSIS: memory allocation
** SINOPSE : alocação de memória
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for count
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
**
** DESCRIÇÃO:
** 		A função calloc() aloca sucessivamente espaço suficiente para contagem
**  de objetos que são bytes de cada tamanho de memória e retorna um ponteiro
**  para a	memória alocada. A memória alocada é preenchida com bytes de valor
**  zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include "ft_calloc.h"
#include "ft_memset.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size * nmemb != 0 && nmemb * size / size != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}
