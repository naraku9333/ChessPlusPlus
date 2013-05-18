#ifndef KingChessPiece_HeaderPlusPlus
#define KingChessPiece_HeaderPlusPlus

#include "Board.hpp"

namespace chesspp
{
    namespace board
    {
        class King : public Piece
        {
        public:
            King(Board &b, Position_t const &pos, Suit const &s);
            virtual ~King() = default;

        protected:
            virtual void calcTrajectory() override;
        };
    }
}

#endif