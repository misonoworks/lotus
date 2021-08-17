/*
Copyright 2020 MisonoWorks

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define LAYOUT( \
	L000, L001, L002, L003, L004, L005, L006,			R007, R008, R009, R010, R011, R012, R013, \
	L100, L101, L102, L103, L104, L105, L106,			R107, R108, R109, R110, R111, R112, R113,\
	L200, L201, L202, L203, L204, L205,						  R208, R209, R210, R211, R212, R213,\
	                  L303, L304, L305, L306,			R307, R308, R309, R310 \
) { \
	{ L000, L001, L002, L003, L004, L005, L006 }, \
	{ L100, L101, L102, L103, L104, L105, L106 }, \
	{ L200, L201, L202, L203, L204, L205, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, L303, L304, L305, L306 }, \
	{ R013, R012, R011, R010, R009, R008, R007 }, \
	{ R113, R112, R111, R110, R109, R108, R107 }, \
	{ R213, R212, R211, R210, R209, R208, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, R310, R309, R308, R307 }, \
}
