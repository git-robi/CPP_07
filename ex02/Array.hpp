/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:51:41 by rgiambon          #+#    #+#             */
/*   Updated: 2025/06/02 12:51:42 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template<typename T>
class Array
{

private:
    T *array;
    unsigned int _size;

public:
    Array()
    {
        array = NULL;
        _size = 0;
    }

    Array(unsigned int n)
    {
        _size = n;
        array = new T[_size]();
    }

    Array(Array const &other)
    {
        _size = other._size;
        array = new T[_size]();
        for(unsigned int i = 0; i < _size; i++)
            array[i] = other.array[i];
    }

    Array& operator=(Array const &other)
    {
        if (this != &other)
        {
            if (array != NULL)
                delete[](array);
            _size = other._size;
            array = new T[_size]();
            for(unsigned int i = 0; i < _size; i++)
                array[i] = other.array[i];
        }
        return this;
    }

    ~Array()
    {
        delete[](array);
    }

    //[]operator
    T& operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");

        return array[index];
    }
   
    const T& operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return array[index];
    }

    unsigned int size() const
    {
        return _size;
    }

};
