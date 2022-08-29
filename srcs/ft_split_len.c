/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochoi <yochoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 21:28:26 by yochoi            #+#    #+#             */
/*   Updated: 2020/05/28 08:33:38 by yochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of rows in a two-dimensional array.
*/

int		ft_split_len(char **str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
