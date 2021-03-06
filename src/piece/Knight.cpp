#include "Knight.hpp"

#include <iostream>
#include <initializer_list>

namespace chesspp
{
    namespace piece
    {
        Knight::Knight(board::Board &b, Position_t const &pos_, Suit const &s_)
        : Piece(b, pos_, s_)
        {
        }

        config::BoardConfig::Textures_t::mapped_type::mapped_type const &Knight::texture() const
        {
            return board.config.texturePaths().at(suit).at("Knight");
        }

        void Knight::calcTrajectory()
        {
            //Knights can only move in 3-long 2-short L shapes

            for(Position_t m : {Position_t( 1, -2)
                               ,Position_t( 2, -1)
                               ,Position_t( 2,  1)
                               ,Position_t( 1,  2)
                               ,Position_t(-1,  2)
                               ,Position_t(-2,  1)
                               ,Position_t(-2, -1)
                               ,Position_t(-1, -2)})
            {
                Position_t t = Position_t(pos).move(m.x, m.y);
                addTrajectory(t);
                addCapturing(t);
            }
        }
    }
}
