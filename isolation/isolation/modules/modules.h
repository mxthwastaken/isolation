#pragma once

#include "../main.h"

namespace modules {
    namespace clicker {
        namespace random {
            inline int left_edited_cps = 0;
            inline int left_reset_value = 0;
            inline int left_clicks = 0;

            inline int left_drop_reset_value = 0;
            inline int left_drop_counter = 0;
            inline bool left_drop = false;

            inline int left_spike_reset_value = 0;
            inline int left_spike_counter = 0;
            inline bool left_spike = false;

            inline int left_counter = 0;
            inline int left_counter_reset_value = 0;
        }

        inline bool enabled = false;
        inline float cps = 12.f;
        inline bool bind_pressed = false;
        inline std::string bind = "[null]";
        inline size_t sel_bind = 0;

        inline bool rmblock = false;
        inline bool blatant = false;
        inline bool mconly = true;
        inline bool fcprot = true;

        extern void thread();
    }

    namespace destruct {
        //extern void go();
    }

    namespace bind {
        extern void thread();
    }
}