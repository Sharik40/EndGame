#include "game.h"

void main_4_scene(t_game *container) {
    if (current(15.1))
        lower_platform(container, false);
    if (current(15.3))
        lower_platform_2(container);
    if (current(15.2))
        two_back(container);
    if (current(15)) {
        two(container);
        one(container);
        lower_platform(container, true);
    }
}
