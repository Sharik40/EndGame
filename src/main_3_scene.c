#include "game.h"

void main_3_scene(t_game *container) {
    //duct tape -> forward -> scene 4
    if (current(14.1) || current(14.2) || current(12.4) || current(13.1) || current(13.2))
        scene_4_final(container);
    //duct tape -> mutant && duct tape -> forward
    if (current(13.3)) {
        dt_mutant(container);
        dt_forward(container);
    }
    //belly
    if (current(12.1)) {
        belly(container);
        head(container);
    }
    if (current(12.2))
        duct_tape(container);
    //diapers->duct tape
    if (current(12.3))
        diapers_duct_tape(container);
    //forward
    if (current(12)) {
        forward(container);
        duct_tape(container);
        mutant(container);
        diapers(container);
    }
    //4 ways
    if (current(11))
        fifth_scene(container);
}
