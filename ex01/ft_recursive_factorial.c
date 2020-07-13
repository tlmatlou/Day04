/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:48:24 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/13 09:24:39 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

 int ft_recursive_factorial(int nb)
{
	if(nb == 1)
	{
		return (1);
	}
	else
	{
		return nb*ft_recursive_factorial(nb-1);
	}

}
