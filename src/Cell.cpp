#include "headers/Cell.h"

class Cell {
public:
    bool GetIsChecked() {
        return check;
    }

    bool GetIsFlagged() {
        return flagged;
    }

    bool GetIsMine() {
        return isMine;
    }

    std::string Display(bool debug) {
        if(check) {
            return ". ";
        } else {
            if (flagged) {
                return "x ";
            } else if (isMine && debug) {
                return "@ ";
            } else {
                return "* ";
            }
        }
    }
protected:
    bool check;
    bool flagged;
    bool isMine;
};