/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:59:18 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/12 16:35:44 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_iterative_factorial(int nb)
{
	int fact =1;
	if(nb == 0)
	{
		return (0);
	}
	else
	    while(nb >= 1)
		{
			fact = fact*nb;
			nb--;		
		}
		return fact;
}
