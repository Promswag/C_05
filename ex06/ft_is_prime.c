/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:42:10 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 15:56:51 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	r;

	r = 1;
	i = 2;
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			r++;
		if (nb / i < i)
		{
			if (r == 1)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}
