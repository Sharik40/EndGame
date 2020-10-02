#ifndef GAME_H
    #define GAME_H

    #include <SDL2/SDL.h>
    #include <SDL2_image/SDL_image.h>
    #include <SDL2_ttf/SDL_ttf.h>
    #include <SDL2_mixer/SDL_mixer.h>
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <fcntl.h>
    #include <stdlib.h>

    typedef struct	s_game {
        int time;
        double current_scene_1;
        bool success;
        SDL_Rect window3Rect;
        SDL_Rect texture3Rect;
        SDL_Rect windowRect;
        SDL_Rect textureRect;
        SDL_Event event;
        SDL_Window *window;
        SDL_Surface *ScreenSurface;
        SDL_Surface *animation;
        SDL_Texture *animationTex;
        SDL_Surface *image;   
        Mix_Music *Music;
        Mix_Chunk *Click;
        SDL_Surface *glich;
        SDL_Renderer *renderer;
        SDL_Texture *imageTex;
        SDL_Texture *glichTex;
    } t_game;

    #define current(x) ((container->event.type == SDL_MOUSEBUTTONDOWN) \
    && (container->current_scene_1 == x))

    #define on_click(b, x1, x2, y1, y2) ((b == SDL_BUTTON_LEFT) \
    && (container->event.button.x >= x1) \
    && (container->event.button.x <= x2) \
    && (container->event.button.y >= y1) \
    && (container->event.button.y <= y2)) ? true : false

    void lower_platform(t_game *container, bool time);
    void lower_platform_2(t_game *container);
    void two_back(t_game *container);
    void two(t_game *container);
    void one(t_game *container);
    void intro(t_game *container);
    void main_1_scene(t_game *container);
    void main_2_scene(t_game *container);
    void main_3_scene(t_game *container);
    void main_4_scene(t_game *container);
    void play_click(t_game *container);
    char *mx_itoa(int number);
    bool init(t_game *container);
    void game_loop(t_game *container);
    void print_time(t_game *container);
    void first_scene(t_game *container);
    void third_scene(t_game *container);
    void fifth_scene(t_game *container);
    void forth_scene(t_game *container);
    void second_scene(t_game *container);
    void music_on_off(t_game *container);
    void first_scene_2(t_game *container);
    void first_scene_3(t_game *container);
    void third_scene_2(t_game *container);
    void forth_scene_2(t_game *container);
    void forth_scene_3(t_game *container);
    void third_scene_3(t_game *container);
    void diapers(t_game *container);
    void diapers_duct_tape(t_game *container);
    void dt_mutant(t_game *container);
    void mutant(t_game *container);
    void duct_tape(t_game *container);
    void dt_forward(t_game *container);
    void forward(t_game *container);
    void second_scene_2(t_game *container);
    void second_scene_3(t_game *container);
    void tolchek_to_exit(t_game *container);
    void animation_render(t_game *container);
    void scene_4_final(t_game *container);
    void belly(t_game *container);
    void head(t_game *container);
    void first_game_over(t_game *container);
#endif
