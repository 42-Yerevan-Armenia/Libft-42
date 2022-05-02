/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:45:18 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 17:26:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n) //ջնջում է s-ի պարունակությունը: Եթե n = 0 է, bzero() ոչինչ չի անում:
{
	size_t	i; //Hello n = 2

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0; //0ացնում է s-ի char-րը
		i++;
	}
	return (s); //00llo
}