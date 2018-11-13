/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */

 #include <stdlib.h>
 #include "chess.h"
 #include "general.h"

  bool is_square_ok (File file, Rank rank)
  {
    return (file <= 'h') && (file >= 'a') && (rank <= 8) && (rank > 0);
  }

int 	nr (Rank rank)
  {
    return 0;
  }

int 	nf (File file)
{
  return 0;
}

bool 	is_move_from_base_line (enum PieceColor color, Rank rank)
{
  return false;
}

bool is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type)
{
 return (pc.color == color) && (pc.type == type);
}

void 	init_chess_board (ChessBoard chess_board)
{

  for (int n = 1; n <= 8; n++)
   {
    for (int b = 1; b <= 8; b++)
     {
       chess_board[n][b].is_occupied = false;
    }
  }
}

struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank)
{
  if(is_square_ok(file, rank) = true)
  {
    chess_board[file - 1][rank - 1].is_occupied
  }

  return 0;
}

bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank)
{
  return (chess_board[file - 1][rank - 1].is_occupied);
}

bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
{
  if(chess_board[file -1][rank -1].is_occupied == false && is_square_ok(file, rank) == true)
  {
    chess_board[file -1][rank -1].is_occupied = true;
    chess_board[file -1][rank -1].piece = piece;

    return true;
  }

  return false;
}

struct ChessPiece get_piece (ChessBoard chess_board, File file, Rank rank)
{
  struct ChessPiece piece;

  if(chess_board[file -1][rank -1].is_occupied == true && is_square_ok(file, rank) == true)
  {
    return chess_board[file - 1][rank - 1].piece;
  }
    piece.type = NoPiece;
    return piece;
}

void 	setup_chess_board (ChessBoard chess_board)
{

}

bool 	remove_piece (ChessBoard chess_board, File file, Rank rank)
{
  if(is_square_occupied(chess_board, file, rank) == true && is_square_ok(file, rank) == true)
  {
    chess_board[file - 1][rank - 1].is_occupied = false;
    return true;
  }

  return false;
}

bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}
