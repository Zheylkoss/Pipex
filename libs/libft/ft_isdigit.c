/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 05:22:57 by zhamdouc          #+#    #+#             */
/*   Updated: 2022/05/20 20:15:51 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (47 < c && c < 58)
		return (102);
	else
		return (0);
}
/*
int     main()
{
        int     a = 48;

        printf("%d", isdigit(a));
        return (0);
}
*/
