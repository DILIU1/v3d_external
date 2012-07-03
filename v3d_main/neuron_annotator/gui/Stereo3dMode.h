#ifndef STEREO3DMODE_H
#define STEREO3DMODE_H

namespace jfrc {

enum Stereo3DMode {
    STEREO_OFF,
    STEREO_LEFT_EYE,
    STEREO_RIGHT_EYE,
    STEREO_QUAD_BUFFERED,
    STEREO_ANAGLYPH_RED_CYAN,
    STEREO_ANAGLYPH_GREEN_MAGENTA,
    STEREO_ROW_INTERLEAVED,
    STEREO_COLUMN_INTERLEAVED,
    STEREO_CHECKER_INTERLEAVED
};

} // namespace jfrc

#endif // STEREO3DMODE_H