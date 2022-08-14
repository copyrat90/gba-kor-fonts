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

#include "galmuri7_sprite_font.h"
#include "galmuri9_sprite_font.h"
#include "galmuri11_sprite_font.h"
#include "galmuri11_bold_sprite_font.h"
#include "galmuri11_condensed_sprite_font.h"

namespace
{
    void galmuri7_text_scene()
    {
        bn::sprite_text_generator text_generator(galmuri7_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "다람쥐 헌 쳇바퀴에 타고파", text_sprites);
        text_generator.generate(0, -48, "닭 콩팥 훔친 집사", text_sprites);
        text_generator.generate(0, -28, "키스의 고유 조건은 입술끼리 만나야 하고", text_sprites);
        text_generator.generate(0, -8, "특별한 기술은 필요치 않다.", text_sprites);
        text_generator.generate(0, 12, "유쾌했던 땃쥐 토끼풀 쫓기 바쁨", text_sprites);
        text_generator.generate(0, 32, "동틀 녘 햇빛 포개짐", text_sprites);
        text_generator.generate(0, 52, "키위를 주게 되었소 내가", text_sprites);
        text_generator.generate(0, 72, "The quick brown fox jumps over a lazy dog", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void galmuri9_text_scene()
    {
        bn::sprite_text_generator text_generator(galmuri9_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "다람쥐 헌 쳇바퀴에 타고파", text_sprites);
        text_generator.generate(0, -48, "닭 콩팥 훔친 집사", text_sprites);
        text_generator.generate(0, -28, "키스의 고유 조건은 입술끼리 만나야 하고", text_sprites);
        text_generator.generate(0, -8, "특별한 기술은 필요치 않다.", text_sprites);
        text_generator.generate(0, 12, "유쾌했던 땃쥐 토끼풀 쫓기 바쁨", text_sprites);
        text_generator.generate(0, 32, "동틀 녘 햇빛 포개짐", text_sprites);
        text_generator.generate(0, 52, "키위를 주게 되었소 내가", text_sprites);
        text_generator.generate(0, 72, "The quick brown fox jumps over a lazy dog", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void galmuri11_text_scene()
    {
        bn::sprite_text_generator text_generator(galmuri11_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "다람쥐 헌 쳇바퀴에 타고파", text_sprites);
        text_generator.generate(0, -48, "닭 콩팥 훔친 집사", text_sprites);
        text_generator.generate(0, -28, "키스의 고유 조건은 입술끼리 만나야 하고", text_sprites);
        text_generator.generate(0, -8, "특별한 기술은 필요치 않다.", text_sprites);
        text_generator.generate(0, 12, "유쾌했던 땃쥐 토끼풀 쫓기 바쁨", text_sprites);
        text_generator.generate(0, 32, "동틀 녘 햇빛 포개짐", text_sprites);
        text_generator.generate(0, 52, "The quick brown fox", text_sprites);
        text_generator.generate(0, 72, "jumps over a lazy dog", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void galmuri11_bold_text_scene()
    {
        bn::sprite_text_generator text_generator(galmuri11_bold_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "다람쥐 헌 쳇바퀴에 타고파", text_sprites);
        text_generator.generate(0, -48, "닭 콩팥 훔친 집사", text_sprites);
        text_generator.generate(0, -28, "키스의 고유 조건은 입술끼리 만나야 하고", text_sprites);
        text_generator.generate(0, -8, "특별한 기술은 필요치 않다.", text_sprites);
        text_generator.generate(0, 12, "유쾌했던 땃쥐 토끼풀 쫓기 바쁨", text_sprites);
        text_generator.generate(0, 32, "동틀 녘 햇빛 포개짐", text_sprites);
        text_generator.generate(0, 52, "The quick brown fox", text_sprites);
        text_generator.generate(0, 72, "jumps over a lazy dog", text_sprites);

        while(! bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void galmuri11_condensed_text_scene()
    {
        bn::sprite_text_generator text_generator(galmuri11_condensed_sprite_font);
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 128>text_sprites;
        text_generator.generate(0, -68, "다람쥐 헌 쳇바퀴에 타고파", text_sprites);
        text_generator.generate(0, -48, "닭 콩팥 훔친 집사", text_sprites);
        text_generator.generate(0, -28, "키스의 고유 조건은 입술끼리 만나야 하고", text_sprites);
        text_generator.generate(0, -8, "특별한 기술은 필요치 않다.", text_sprites);
        text_generator.generate(0, 12, "유쾌했던 땃쥐 토끼풀 쫓기 바쁨", text_sprites);
        text_generator.generate(0, 32, "동틀 녘 햇빛 포개짐", text_sprites);
        text_generator.generate(0, 52, "키위를 주게 되었소 내가", text_sprites);
        text_generator.generate(0, 72, "The quick brown fox jumps over a lazy dog", text_sprites);

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
        galmuri7_text_scene();
        bn::core::update();
        
        galmuri9_text_scene();
        bn::core::update();

        galmuri11_text_scene();
        bn::core::update();

        galmuri11_bold_text_scene();
        bn::core::update();

        galmuri11_condensed_text_scene();
        bn::core::update();
    }
}
