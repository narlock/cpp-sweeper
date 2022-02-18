#pragma once

#include <iostream>
#include <string>

/// An individual cell on the game board.
///
/// Contains attributes that determine what kind of Cell it is.
/// If the Cell is checked by the user, the check bool will be true.
/// If the cell is flagged by the user, the flagged bool will be true
/// If the cell is a mine, the isMine bool will be true
class Cell {
public:
    /// GetIsChecked() - getter function for bool check
    bool GetIsChecked();
    /// GetIsFlagged() - getter function for bool flagged
    bool GetIsFlagged();
    /// GetIsMine() - getter function for bool isMine
    bool GetIsMine();

    /// Display returns the character of the current state that the Cell is in.
    ///
    /// If the cell is checked, then it will return "."
    /// Otherwise, if the cell is flagged, it will return "x"
    /// If debug is true, and the Cell is a Mine, then the mine will return "@"
    /// Otherwise, "*" will be returned.
    /// @param debug A boolean condition that is true if the game is in debug mode
    std::string Display(bool debug);
protected:
    /// check: condition where the Cell is checked
    bool check;
    /// flagged: condition where the Cell is flagged
    bool flagged;
    /// isMine: condition where the Cell is a mine
    bool isMine;
};