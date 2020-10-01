NAME = endgame

SRC = src/play_click.c src/main.c src/init.c src/game_loop.c \
	src/scene1.c src/volume.c src/scene1_2.c \
	src/tolchek.c src/scene1_3.c src/scene2.c src/scene2_2.c \
	src/scene2_3.c src/scene3.c src/scene3_2.c src/scene3_3.c \
	src/scene4.c src/scene4_1.c src/scene4_2.c src/scene5.c \
	src/scene5_2.c src/print_time.c src/itoa.c src/scene5_3.c \
	src/scene5_4.c src/mutant.c src/animation_render.c src/duct_tape.c \
	src/forward.c \


INC = inc/game.h

CFILES = play_click.c main.c init.c game_loop.c scene1.c volume.c scene1_2.c \
	scene1_3.c tolchek.c scene2.c scene2_2.c scene2_3.c scene3.c \
	scene3_2.c scene3_3.c scene4.c scene4_1.c scene4_2.c scene5.c \
	scene5_2.c print_time.c itoa.c scene5_3.c scene5_4.c mutant.c \
	animation_render.c duct_tape.c forward.c \

HFILES = src/game.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
DFLAGS = -fsanitize=address -g
RFLAGS = -Ofast

FFLAGS = -I ./resource/Frameworks/SDL2.framework/Versions/A/Headers \
		-F ./resource/Frameworks -framework SDL2 -rpath ./resource/Frameworks \
		-I ./resource/Frameworks/SDL2_image.framework/Versions/A/Headers \
		-F ./resource/Frameworks -framework SDL2_image -rpath ./resource/Frameworks \
		-I ./resource/Frameworks/SDL2_mixer.framework/Versions/A/Headers \
		-F ./resource/Frameworks -framework SDL2_mixer -rpath ./resource/Frameworks \
		-I ./resource/Frameworks/SDL2_ttf.framework/Versions/A/Headers \
		-F ./resource/Frameworks -framework SDL2_ttf -rpath ./resource/Frameworks

all: install clean
dbg: debug clean
release: build clean

install:
		@cp $(SRC) .
		@cp $(INC) src
		@clang $(CFLAGS) $(FFLAGS) -o $(NAME) $(SRC)
debug:
		@cp $(SRC) .
		@cp $(INC) src
		@clang $(CFLAGS) $(FFLAGS) $(DFLAGS) -o $(NAME) $(SRC)
build:
		@cp $(SRC) .
		@cp $(INC) src
		@clang $(CFLAGS) $(FFLAGS) $(RFLAGS) -o $(NAME) $(SRC)
clean:
		@rm -rf $(CFILES)
		@rm -rf $(HFILES)
		@rm -rf endgame.dSYM
uninstall: clean
		@rm -rf $(NAME)
reinstall: uninstall all
