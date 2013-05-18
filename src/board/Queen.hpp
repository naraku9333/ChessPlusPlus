#ifndef QueenChessPiece_HeaderPlusPlus
#define QueenChessPiece_HeaderPlusPlus

#include "Board.hpp"

namespace chesspp
{
    namespace board
    {
        class Queen : public Piece
        {
        public:
            Queen(Board &b, Position_t const &pos, Suit const &s);
            virtual ~Queen() = default;

        protected:
            virtual void calcTrajectory() override;
        };
    }
}

#endif