/*
 * Copyright (C) 2001-2004,2009,2010 Red Hat, Inc.
 * Copyright © 2008, 2009, 2010, 2015 Christian Persch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * SECTION: vte-terminal
 * @short_description: A terminal widget implementation
 *
 * A VteTerminal is a terminal emulator implemented as a GTK3 widget.
 */

#pragma once

enum {
        COPY_CLIPBOARD,
        PASTE_CLIPBOARD,
        LAST_SIGNAL
};
extern guint signals[LAST_SIGNAL];

enum {
        PROP_0,
        PROP_ALLOW_BOLD,
        PROP_AUDIBLE_BELL,
        PROP_BACKSPACE_BINDING,
        PROP_CJK_AMBIGUOUS_WIDTH,
        PROP_CURSOR_BLINK_MODE,
        PROP_CURSOR_SHAPE,
        PROP_CURRENT_DIRECTORY_URI,
        PROP_CURRENT_FILE_URI,
        PROP_DELETE_BINDING,
        PROP_ENCODING,
        PROP_FONT_DESC,
        PROP_FONT_SCALE,
        PROP_ICON_TITLE,
        PROP_INPUT_ENABLED,
        PROP_MOUSE_POINTER_AUTOHIDE,
        PROP_PTY,
        PROP_REWRAP_ON_RESIZE,
        PROP_SCROLLBACK_LINES,
        PROP_SCROLL_ON_KEYSTROKE,
        PROP_SCROLL_ON_OUTPUT,
        PROP_WINDOW_TITLE,
        PROP_WORD_CHAR_EXCEPTIONS,
        LAST_PROP,

        /* override properties */
        PROP_HADJUSTMENT,
        PROP_VADJUSTMENT,
        PROP_HSCROLL_POLICY,
        PROP_VSCROLL_POLICY
};
extern GParamSpec *pspecs[LAST_PROP];

const GtkBorder default_padding = { 1, 1, 1, 1 };
