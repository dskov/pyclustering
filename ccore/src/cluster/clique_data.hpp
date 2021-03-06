/**
*
* @authors Andrei Novikov (pyclustering@yandex.ru)
* @date 2014-2019
* @copyright GNU Public License
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


#include "cluster/clique_block.hpp"
#include "cluster/cluster_data.hpp"


namespace ccore {

namespace clst {


using clique_block_sequence = std::vector<clique_block>;


class clique_data : public cluster_data {
private:
    clique_block_sequence   m_blocks;
    clst::noise             m_noise;

public:
    const clique_block_sequence & blocks(void) const { return m_blocks; }

    clique_block_sequence & blocks(void) { return m_blocks; }

    const clst::noise & noise(void) const { return m_noise; }

    clst::noise & noise(void) { return m_noise; }
};


}

}