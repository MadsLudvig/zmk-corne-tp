/*
 * Image shown below the batteries, as ASCII art:
 * '#' = black pixel, anything else = blank. All lines must be the same width.
 *
 * Each character is drawn as LOGO_SCALE x LOGO_SCALE screen pixels and the
 * image is centred below the batteries (68x52 pixels), so keep
 * width * LOGO_SCALE <= 68 and height * LOGO_SCALE <= 52.
 */

#pragma once

#define LOGO_SCALE 6

// Deepvis eye (from favicon.png, 9x6 cells)
static const char *const logo_art[] = {
    "...###...",
    ".##...##.",
    "#...#...#",
    "#...#...#",
    ".##...##.",
    "...###...",
};
