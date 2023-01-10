/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 19:08:52 by elvmarti          #+#    #+#             */
/*   Updated: 2023/01/10 22:32:14 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	long long int	sign;
	long long int	sol;

	sign = 1;
	sol = 0;
	while (*str == ' ' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sol * sign > 2147483648)
			return (-1);
		else if (sol * sign < -2147483648)
			return (0);
		sol = sol * 10 + (*str - 48);
		str++;
	}
	return (sign * sol);
}
