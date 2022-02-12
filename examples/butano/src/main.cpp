/*
 * Copyright (c) 2020-2022 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h"
#include "bn_bg_palettes.h"
#include "bn_string_view.h"
#include "bn_sprite_text_generator.h"

#include "hanamin_a_sprite_font.h"
#include "unifont_sprite_font.h"

namespace
{
    void hanamin_a_text_scene()
    {
        bn::sprite_text_generator text_generator(hanamin_a_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "- HanaMin A / 花園明朝 / 花园明朝 -", text_sprites);
        text_generator.generate(0, -48, "English Français русский язык", text_sprites);
        text_generator.generate(0, -28, "简体中文 繁體中文（台灣）", text_sprites);
        text_generator.generate(0, -8, "繁體中文（香港）Монголхэл", text_sprites);
        text_generator.generate(0, 12, "日本語（にほんご ）", text_sprites);
        text_generator.generate(0, 32, "Tiếng Việt ภาษาไทย", text_sprites);
        text_generator.generate(0, 52, "Македонски Ўзбекча", text_sprites);
        text_generator.generate(0, 72, "☺♨➑☆★♡✂♪♫☑", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void unifont_text_scene()
    {
        bn::sprite_text_generator text_generator(unifont_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "- Unifont -", text_sprites);
        text_generator.generate(0, -48, "English Français русский язык", text_sprites);
        text_generator.generate(0, -28, "简体中文 繁體中文（台灣）", text_sprites);
        text_generator.generate(0, -8, "繁體中文（香港）Монголхэл", text_sprites);
        text_generator.generate(0, 12, "日本語（にほんご ）한국어", text_sprites);
        text_generator.generate(0, 32, "Tiếng Việt ภาษาไทย", text_sprites);
        text_generator.generate(0, 52, "Македонски Ўзбекча", text_sprites);
        text_generator.generate(0, 72, "☺♨➑☆★♡✂♪♫☑", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }
}

int main()
{
    bn::core::init();

    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));

    while(true)
    {
        hanamin_a_text_scene();
        bn::core::update();

        unifont_text_scene();
        bn::core::update();
    }
}
