/** \file
 *  Defines a series of constructors for the named CSS colors.
 *
 *  All constructors return an color::Rgb<uint8_t>. Use color::color_cast to
 *  get other formats.
 */
#ifndef COLOR_NAMEDCOLORS_H_
#define COLOR_NAMEDCOLORS_H_

#include "Rgb.h"

namespace color {
namespace named {

inline constexpr Rgb<uint8_t> dark_red() { return Rgb<uint8_t>(139, 0, 0); }
inline constexpr Rgb<uint8_t> light_grey() {
    return Rgb<uint8_t>(211, 211, 211);
}
inline constexpr Rgb<uint8_t> chocolate() { return Rgb<uint8_t>(210, 105, 30); }
inline constexpr Rgb<uint8_t> dark_slate_gray() {
    return Rgb<uint8_t>(47, 79, 79);
}
inline constexpr Rgb<uint8_t> olive() { return Rgb<uint8_t>(128, 128, 0); }
inline constexpr Rgb<uint8_t> floral_white() {
    return Rgb<uint8_t>(255, 250, 240);
}
inline constexpr Rgb<uint8_t> teal() { return Rgb<uint8_t>(0, 128, 128); }
inline constexpr Rgb<uint8_t> turquoise() { return Rgb<uint8_t>(64, 224, 208); }
inline constexpr Rgb<uint8_t> dark_goldenrod() {
    return Rgb<uint8_t>(184, 134, 11);
}
inline constexpr Rgb<uint8_t> lime_green() { return Rgb<uint8_t>(50, 205, 50); }
inline constexpr Rgb<uint8_t> slate_blue() {
    return Rgb<uint8_t>(106, 90, 205);
}
inline constexpr Rgb<uint8_t> blanched_almond() {
    return Rgb<uint8_t>(255, 235, 205);
}
inline constexpr Rgb<uint8_t> dark_slate_blue() {
    return Rgb<uint8_t>(72, 61, 139);
}
inline constexpr Rgb<uint8_t> pure_green() { return Rgb<uint8_t>(0, 128, 0); }
inline constexpr Rgb<uint8_t> magenta() { return Rgb<uint8_t>(255, 0, 255); }
inline constexpr Rgb<uint8_t> orange() { return Rgb<uint8_t>(255, 165, 0); }
inline constexpr Rgb<uint8_t> white_smoke() {
    return Rgb<uint8_t>(245, 245, 245);
}
inline constexpr Rgb<uint8_t> green_yellow() {
    return Rgb<uint8_t>(173, 255, 47);
}
inline constexpr Rgb<uint8_t> gainsboro() {
    return Rgb<uint8_t>(220, 220, 220);
}
inline constexpr Rgb<uint8_t> violet() { return Rgb<uint8_t>(238, 130, 238); }
inline constexpr Rgb<uint8_t> black() { return Rgb<uint8_t>(0, 0, 0); }
inline constexpr Rgb<uint8_t> lavender_blush() {
    return Rgb<uint8_t>(255, 240, 245);
}
inline constexpr Rgb<uint8_t> medium_blue() { return Rgb<uint8_t>(0, 0, 205); }
inline constexpr Rgb<uint8_t> linen() { return Rgb<uint8_t>(250, 240, 230); }
inline constexpr Rgb<uint8_t> medium_sea_green() {
    return Rgb<uint8_t>(60, 179, 113);
}
inline constexpr Rgb<uint8_t> dark_salmon() {
    return Rgb<uint8_t>(233, 150, 122);
}
inline constexpr Rgb<uint8_t> goldenrod() { return Rgb<uint8_t>(218, 165, 32); }
inline constexpr Rgb<uint8_t> powder_blue() {
    return Rgb<uint8_t>(176, 224, 230);
}
inline constexpr Rgb<uint8_t> maroon() { return Rgb<uint8_t>(128, 0, 0); }
inline constexpr Rgb<uint8_t> dark_orange() {
    return Rgb<uint8_t>(255, 140, 0);
}
inline constexpr Rgb<uint8_t> alice_blue() {
    return Rgb<uint8_t>(240, 248, 255);
}
inline constexpr Rgb<uint8_t> dark_turquoise() {
    return Rgb<uint8_t>(0, 206, 209);
}
inline constexpr Rgb<uint8_t> rosy_brown() {
    return Rgb<uint8_t>(188, 143, 143);
}
inline constexpr Rgb<uint8_t> pale_violet_red() {
    return Rgb<uint8_t>(219, 112, 147);
}
inline constexpr Rgb<uint8_t> dark_magenta() {
    return Rgb<uint8_t>(139, 0, 139);
}
inline constexpr Rgb<uint8_t> tomato() { return Rgb<uint8_t>(255, 99, 71); }
inline constexpr Rgb<uint8_t> gray() { return Rgb<uint8_t>(128, 128, 128); }
inline constexpr Rgb<uint8_t> deep_pink() { return Rgb<uint8_t>(255, 20, 147); }
inline constexpr Rgb<uint8_t> midnight_blue() {
    return Rgb<uint8_t>(25, 25, 112);
}
inline constexpr Rgb<uint8_t> light_cyan() {
    return Rgb<uint8_t>(224, 255, 255);
}
inline constexpr Rgb<uint8_t> chartreuse() { return Rgb<uint8_t>(127, 255, 0); }
inline constexpr Rgb<uint8_t> dark_orchid() {
    return Rgb<uint8_t>(153, 50, 204);
}
inline constexpr Rgb<uint8_t> olive_drab() {
    return Rgb<uint8_t>(107, 142, 35);
}
inline constexpr Rgb<uint8_t> pink() { return Rgb<uint8_t>(255, 192, 203); }
inline constexpr Rgb<uint8_t> navy() { return Rgb<uint8_t>(0, 0, 128); }
inline constexpr Rgb<uint8_t> pale_turquoise() {
    return Rgb<uint8_t>(175, 238, 238);
}
inline constexpr Rgb<uint8_t> azure() { return Rgb<uint8_t>(240, 255, 255); }
inline constexpr Rgb<uint8_t> light_coral() {
    return Rgb<uint8_t>(240, 128, 128);
}
inline constexpr Rgb<uint8_t> lavender() { return Rgb<uint8_t>(230, 230, 250); }
inline constexpr Rgb<uint8_t> steel_blue() {
    return Rgb<uint8_t>(70, 130, 180);
}
inline constexpr Rgb<uint8_t> beige() { return Rgb<uint8_t>(245, 245, 220); }
inline constexpr Rgb<uint8_t> orange_red() { return Rgb<uint8_t>(255, 69, 0); }
inline constexpr Rgb<uint8_t> light_goldenrod_yellow() {
    return Rgb<uint8_t>(250, 250, 210);
}
inline constexpr Rgb<uint8_t> ghost_white() {
    return Rgb<uint8_t>(248, 248, 255);
}
inline constexpr Rgb<uint8_t> gold() { return Rgb<uint8_t>(255, 215, 0); }
inline constexpr Rgb<uint8_t> dark_green() { return Rgb<uint8_T>(0, 100, 0); }
inline constexpr Rgb<uint8_t> bisque() { return Rgb<uint8_t>(255, 228, 196); }
inline constexpr Rgb<uint8_t> pure_red() { return Rgb<uint8_t>(255, 0, 0); }
inline constexpr Rgb<uint8_t> indigo() { return Rgb<uint8_t>(75, 0, 130); }
inline constexpr Rgb<uint8_t> white() { return Rgb<uint8_t>(255, 255, 255); }
inline constexpr Rgb<uint8_t> medium_slate_blue() {
    return Rgb<uint8_t>(123, 104, 238);
}
inline constexpr Rgb<uint8_t> sea_green() { return Rgb<uint8_t>(46, 139, 87); }
inline constexpr Rgb<uint8_t> forest_green() {
    return Rgb<uint8_t>(34, 139, 34);
}
inline constexpr Rgb<uint8_t> cornflower_blue() {
    return Rgb<uint8_t>(100, 149, 237);
}
inline constexpr Rgb<uint8_t> sky_blue() { return Rgb<uint8_t>(135, 206, 235); }
inline constexpr Rgb<uint8_t> spring_green() {
    return Rgb<uint8_t>(0, 255, 127);
}
inline constexpr Rgb<uint8_t> crimson() { return Rgb<uint8_t>(220, 20, 60); }
inline constexpr Rgb<uint8_t> silver() { return Rgb<uint8_t>(192, 192, 192); }
inline constexpr Rgb<uint8_t> blue_violet() {
    return Rgb<uint8_t>(138, 43, 226);
}
inline constexpr Rgb<uint8_t> dark_violet() {
    return Rgb<uint8_t>(148, 0, 211);
}
inline constexpr Rgb<uint8_t> cyan() { return Rgb<uint8_t>(0, 255, 255); }
inline constexpr Rgb<uint8_t> dim_gray() { return Rgb<uint8_t>(105, 105, 105); }
inline constexpr Rgb<uint8_t> antique_white() {
    return Rgb<uint8_t>(250, 235, 215);
}
inline constexpr Rgb<uint8_t> pure_blue() { return Rgb<uint8_t>(0, 0, 255); }
inline constexpr Rgb<uint8_t> plum() { return Rgb<uint8_t>(221, 160, 221); }
inline constexpr Rgb<uint8_t> navajo_white() {
    return Rgb<uint8_t>(255, 222, 173);
}
inline constexpr Rgb<uint8_t> cadet_blue() {
    return Rgb<uint8_t>(95, 158, 160);
}
inline constexpr Rgb<uint8_t> dark_olive_green() {
    return Rgb<uint8_t>(85, 107, 47);
}
inline constexpr Rgb<uint8_t> light_yellow() {
    return Rgb<uint8_t>(255, 255, 224);
}
inline constexpr Rgb<uint8_t> brown() { return Rgb<uint8_t>(165, 42, 42); }
inline constexpr Rgb<uint8_t> lemon_chiffon() {
    return Rgb<uint8_t>(255, 250, 205);
}
inline constexpr Rgb<uint8_t> aquamarine() {
    return Rgb<uint8_t>(127, 255, 212);
}
inline constexpr Rgb<uint8_t> fire_brick() { return Rgb<uint8_t>(178, 34, 34); }
inline constexpr Rgb<uint8_t> medium_aquamarine() {
    return Rgb<uint8_t>(102, 205, 170);
}
inline constexpr Rgb<uint8_t> misty_rose() {
    return Rgb<uint8_t>(255, 228, 225);
}
inline constexpr Rgb<uint8_t> ivory() { return Rgb<uint8_t>(255, 255, 240); }
inline constexpr Rgb<uint8_t> papaya_whip() {
    return Rgb<uint8_t>(255, 239, 213);
}
inline constexpr Rgb<uint8_t> pale_green() {
    return Rgb<uint8_t>(152, 251, 152);
}
inline constexpr Rgb<uint8_t> hot_pink() { return Rgb<uint8_t>(255, 105, 180); }
inline constexpr Rgb<uint8_t> medium_purple() {
    return Rgb<uint8_t>(147, 112, 219);
}
inline constexpr Rgb<uint8_t> dark_gray() {
    return Rgb<uint8_t>(169, 169, 169);
}
inline constexpr Rgb<uint8_t> moccasin() { return Rgb<uint8_t>(255, 228, 181); }
inline constexpr Rgb<uint8_t> saddle_brown() {
    return Rgb<uint8_t>(139, 69, 19);
}
inline constexpr Rgb<uint8_t> sienna() { return Rgb<uint8_t>(160, 82, 45); }
inline constexpr Rgb<uint8_t> mint_cream() {
    return Rgb<uint8_t>(245, 255, 250);
}
inline constexpr Rgb<uint8_t> light_green() {
    return Rgb<uint8_t>(144, 238, 144);
}
inline constexpr Rgb<uint8_t> tan() { return Rgb<uint8_t>(210, 180, 140); }
inline constexpr Rgb<uint8_t> light_sky_blue() {
    return Rgb<uint8_t>(135, 206, 250);
}
inline constexpr Rgb<uint8_t> light_pink() {
    return Rgb<uint8_t>(255, 182, 193);
}
inline constexpr Rgb<uint8_t> medium_turquoise() {
    return Rgb<uint8_t>(72, 209, 204);
}
inline constexpr Rgb<uint8_t> lime() { return Rgb<uint8_t>(0, 255, 0); }
inline constexpr Rgb<uint8_t> coral() { return Rgb<uint8_t>(255, 127, 80); }
inline constexpr Rgb<uint8_t> cornsilk() { return Rgb<uint8_t>(255, 248, 220); }
inline constexpr Rgb<uint8_t> aqua() { return Rgb<uint8_t>(0, 255, 255); }
inline constexpr Rgb<uint8_t> honeydew() { return Rgb<uint8_t>(240, 255, 240); }
inline constexpr Rgb<uint8_t> deep_sky_blue() {
    return Rgb<uint8_t>(0, 191, 255);
}
inline constexpr Rgb<uint8_t> indian_red() { return Rgb<uint8_t>(205, 92, 92); }
inline constexpr Rgb<uint8_t> purple() { return Rgb<uint8_t>(128, 0, 128); }
inline constexpr Rgb<uint8_t> khaki() { return Rgb<uint8_t>(240, 230, 140); }
inline constexpr Rgb<uint8_t> wheat() { return Rgb<uint8_t>(245, 222, 179); }
inline constexpr Rgb<uint8_t> sandy_brown() {
    return Rgb<uint8_t>(244, 164, 96);
}
inline constexpr Rgb<uint8_t> lawn_green() { return Rgb<uint8_t>(124, 252, 0); }
inline constexpr Rgb<uint8_t> light_steel_blue() {
    return Rgb<uint8_t>(176, 196, 222);
}
inline constexpr Rgb<uint8_t> yellow() { return Rgb<uint8_t>(255, 255, 0); }
inline constexpr Rgb<uint8_t> peach_puff() {
    return Rgb<uint8_t>(255, 218, 185);
}
inline constexpr Rgb<uint8_t> medium_orchid() {
    return Rgb<uint8_t>(186, 85, 211);
}
inline constexpr Rgb<uint8_t> fuchsia() { return Rgb<uint8_t>(255, 0, 255); }
inline constexpr Rgb<uint8_t> dodger_blue() {
    return Rgb<uint8_t>(30, 144, 255);
}
inline constexpr Rgb<uint8_t> yellow_green() {
    return Rgb<uint8_t>(154, 205, 50);
}
inline constexpr Rgb<uint8_t> light_blue() {
    return Rgb<uint8_t>(173, 216, 230);
}
inline constexpr Rgb<uint8_t> light_sea_green() {
    return Rgb<uint8_t>(32, 178, 170);
}
inline constexpr Rgb<uint8_t> seashell() { return Rgb<uint8_t>(255, 245, 238); }
inline constexpr Rgb<uint8_t> snow() { return Rgb<uint8_t>(255, 250, 250); }
inline constexpr Rgb<uint8_t> royal_blue() {
    return Rgb<uint8_t>(65, 105, 225);
}
inline constexpr Rgb<uint8_t> slate_gray() {
    return Rgb<uint8_t>(112, 128, 144);
}
inline constexpr Rgb<uint8_t> pale_goldenrod() {
    return Rgb<uint8_t>(238, 232, 170);
}
inline constexpr Rgb<uint8_t> peru() { return Rgb<uint8_t>(205, 133, 63); }
inline constexpr Rgb<uint8_t> medium_violet_red() {
    return Rgb<uint8_t>(199, 21, 133);
}
inline constexpr Rgb<uint8_t> medium_spring_green() {
    return Rgb<uint8_t>(0, 250, 154);
}
inline constexpr Rgb<uint8_t> dark_khaki() {
    return Rgb<uint8_t>(189, 183, 107);
}
inline constexpr Rgb<uint8_t> salmon() { return Rgb<uint8_t>(250, 128, 114); }
inline constexpr Rgb<uint8_t> dark_cyan() { return Rgb<uint8_t>(0, 139, 139); }
inline constexpr Rgb<uint8_t> dark_blue() { return Rgb<uint8_t>(0, 0, 139); }
inline constexpr Rgb<uint8_t> dark_sea_green() {
    return Rgb<uint8_t>(143, 188, 143);
}
inline constexpr Rgb<uint8_t> thistle() { return Rgb<uint8_t>(216, 191, 216); }
inline constexpr Rgb<uint8_t> light_slate_gray() {
    return Rgb<uint8_t>(119, 136, 153);
}
inline constexpr Rgb<uint8_t> old_lace() { return Rgb<uint8_t>(253, 245, 230); }
inline constexpr Rgb<uint8_t> orchid() { return Rgb<uint8_t>(218, 112, 214); }
inline constexpr Rgb<uint8_t> burly_wood() {
    return Rgb<uint8_t>(222, 184, 135);
}
inline constexpr Rgb<uint8_t> light_salmon() {
    return Rgb<uint8_t>(255, 160, 122);
}
}
}

#endif
