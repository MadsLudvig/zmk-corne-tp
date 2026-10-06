/*
 * Bongo cat sprites, drawn as ASCII art: '#' = black pixel, anything else = blank.
 * Edit freely; each sprite's lines must all be the same width.
 *
 * The cat lives in the box below the batteries (66x40 usable pixels).
 * Positions are set in cat.c.
 */

#pragma once

// Head without eyes (eyes are drawn separately so they can close).
static const char *const cat_head[] = {
    "..##....................##..",
    "..#.#..................#.#..",
    "..#..#................#..#..",
    "..#...################...#..",
    "..#......................#..",
    ".#........................#.",
    ".#........................#.",
    ".#........................#.",
    ".#........................#.",
    ".#........................#.",
    ".#...........##...........#.",
    ".#.........#....#.........#.",
    ".#..........#..#..........#.",
    ".#........................#.",
    "..#......................#..",
    "...######################...",
};

static const char *const cat_eye_open[] = {
    "##",
    "##",
};

static const char *const cat_eye_closed[] = {
    "..",
    "##",
};

// Paw raised (not typing).
static const char *const cat_paw_up[] = {
    ".####.",
    "#....#",
    "#....#",
    "#....#",
    ".####.",
};

// Paw slapping the keyboard.
static const char *const cat_paw_down[] = {
    ".####.",
    "#....#",
    "######",
};

// The keyboard on the table.
static const char *const cat_keyboard[] = {
    "###################################################",
    "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#",
    "###################################################",
};
