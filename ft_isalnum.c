/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:48:24 by elvmarti          #+#    #+#             */
/*   Updated: 2020/12/24 14:35:37 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123) || (a > 47 && a < 58))
		return (1);
	return (0);
}
