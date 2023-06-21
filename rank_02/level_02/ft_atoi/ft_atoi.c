/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:33:47 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/21 17:35:54 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int result = 0;
    int signal = 1;

    while (*str >= 9 && *str <= 32)
        str++;

    if (*str == '-')
        signal = -1;
    if (*str == '-' || *str == '+')
        str++;

    while (*str >= '0' && *str <= '9') 
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (signal * result);
}
