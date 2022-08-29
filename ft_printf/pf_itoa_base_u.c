/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa_base_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochoi <yochoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 11:34:36 by yochoi            #+#    #+#             */
/*   Updated: 2020/07/20 07:23:19 by yochoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

static char	pf_calculate_char(int mod, char c)
{
	char	return_char;

	if (mod > 36)
		return (0);
	return_char = '0';
	while (mod--)
	{
		return_char++;
		if (return_char == ':')
			return_char = c;
	}
	return (return_char);
}

static int	pf_get_len(unsigned int num, unsigned int base)
{
	unsigned int		len;

	len = 0;
	while (num)
	{
		num /= base;
		len++;
	}
	return (len);
}

static char	*pf_generate_string(unsigned int num, unsigned int base, char c)
{
	unsigned int	sum;
	int				mod;
	int				len;
	char			*str;

	if (num == 0)
	{
		if (!(str = pf_strnew(1)))
			return (NULL);
		*str = '0';
		return (str);
	}
	sum = num;
	len = pf_get_len(num, base);
	if (!(str = pf_strnew(len)))
		return (NULL);
	while (sum)
	{
		mod = sum % base;
		sum /= base;
		str[(len--) - 1] = pf_calculate_char(mod, c);
	}
	return (str);
}

char		*pf_itoa_base_u(unsigned int num, unsigned int base, char c)
{
	char	*str;

	str = pf_generate_string(num, base, c);
	return (str);
}
