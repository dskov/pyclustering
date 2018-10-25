/**
*
* Copyright (C) 2014-2018    Andrei Novikov (pyclustering@yandex.ru)
*
* GNU_PUBLIC_LICENSE
*   pyclustering is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   pyclustering is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#pragma once


#include "cluster/elbow_data.hpp"

#include "definitions.hpp"


namespace ccore {

namespace clst {


template <class TypeInitializer>
class elbow {
private:
    std::size_t   m_kmin      = 0;
    std::size_t   m_kmax      = 0;

    elbow_data    * m_result  = nullptr;      /* temporary pointer to output result   */
    dataset       * m_data    = nullptr;      /* temporary pointer to data            */

private:
    elbow(void) = default;

    elbow(const std::size_t p_kmin, const std::size_t p_kmax) :
        m_kmin(p_kmin), m_kmax(p_kmax)
    { verify(); }

    elbow(const elbow & p_other) = default;

    elbow(elbow && p_other) = default;

    ~elbow(void) = default;

public:
    void process(const dataset & p_data, elbow_data & p_result) {
        
    }

private:
    void verify(void) {
    
    }
};


}

}