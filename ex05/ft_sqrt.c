/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:05:13 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/21 12:40:25 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{	
	int	i;
	int	q;
	int	r;

	i = 1;
	while (i <= nb)
	{
		q = nb / i;
		r = nb % i;
		if (q == i && r == 0)
			return (q);
		i++;
	}
	return (0);
}
