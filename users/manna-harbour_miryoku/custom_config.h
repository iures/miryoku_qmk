// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define PERMISSIVE_HOLD
#define COMBO_TERM 40

#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 150
#define TAPPING_TERM_THUMB 125


// If you press a dual-role key, press another key, and then release the
// dual-role key, all within the tapping term, by default the dual-role key
// will perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is
// enabled, the dual-role key will perform its hold action instead.
#define HOLD_ON_OTHER_KEY_PRESS

#define COMBO_COUNT 2
// Set the COMBO_TERM so low that I won't type the keys one after each other during normal typing.
// They would have be held together intentionally to trigger this.
#define COMBO_TERM 40
