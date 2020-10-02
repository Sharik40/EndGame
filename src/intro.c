#include "game.h"

void intro(t_game *container) {
    if (current(2))
        first_scene_3(container);
    if (current(1))
        first_scene_2(container);
    if (current(0)) {
        first_scene(container);
        music_on_off(container);
        tolchek_to_exit(container);
    }
}
