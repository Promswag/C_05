/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:59:27 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/24 15:47:59 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	_nb;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	_nb = nb;
	while (power-- > 1)
		nb *= _nb;
	return (nb);
}
