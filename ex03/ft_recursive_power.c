/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:07:28 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/21 11:11:29 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	_nb;

	if (power == 0 && nb != 0)
		return (1);
	_nb = nb;
	if (power > 1)
		nb = _nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
