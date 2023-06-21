/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:38:38 by fsuomins          #+#    #+#             */
/*   Updated: 2023/06/21 18:36:18 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_isupper(char str)
{
    return (str >= 'A' && str <= 'Z');
}

int ft_islower(char str)
{
    return (str >= 'a' && str <= 'z');
}

int ft_isspace(char str)
{
    return (str == ' ' || str == '\t');
}

void    rstr_capitalizer(char *str)
{
    while (*str)
    {
        if (ft_isupper(*str))
            *str += 32;
        if (ft_islower(*str) && (ft_isspace(*(str + 1)) || !*(str + 1)))
            *str -= 32;
        write(1, str++, 1);
    }
}

int main(int argc, char **argv)
{
   if (argc == 1)
        write(1, "\n", 1);
    else
    {
        argv++;
        while (*argv)
        {
            rstr_capitalizer(*argv++);
            write(1, "\n", 1);
        }
    }
    return (0);
}