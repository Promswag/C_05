/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:03:56 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 12:03:27 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	r;

	if (nb < 0)
		return (1);
	else if (nb < 2)
		return (2);
	while (1)
	{
		r = 1;
		i = 2;
		while (i < nb && nb / i >= i)
		{
			if (nb % i == 0)
				r++;
			i++;
		}
		if (r == 1)
			return (nb);
		nb++;
	}
}
