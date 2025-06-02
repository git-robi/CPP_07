/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:51:07 by rgiambon          #+#    #+#             */
/*   Updated: 2025/06/02 12:51:09 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template<typename T>
void iter(T* array, size_t length, void (*function)(T&))
{
    for (size_t i = 0; i < length; i++)
        function(array[i]);
}
