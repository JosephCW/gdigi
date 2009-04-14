/*
 *  Copyright (c) 2009 Tomasz Moń <desowin@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>.
 */

#ifndef GDIGI_GUI_H
#define GDIGI_GUI_H

#include <glib.h>
#include "effects.h"

void show_error_message(GtkWidget *parent, gchar *message);
void gui_create(EffectList *list, int n_list);
void gui_free();
gboolean unsupported_device_dialog(EffectList **list, int *n_list);

#endif /* GDIGI_GUI_H */
