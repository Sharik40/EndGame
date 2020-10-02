#include "game.h"

void main_2_scene(t_game *container) {
    if (current(9))
        forth_scene_3(container);
    if (current(10))
        forth_scene_2(container);
    if (current(9))
        forth_scene(container);
    if (current(8))
        third_scene_3(container);
    if (current(7))
        third_scene_2(container);
    if (current(6))
        third_scene(container);
}
