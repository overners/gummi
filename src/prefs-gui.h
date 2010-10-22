/**
 * @file   prefs-gui.h
 * @brief
 *
 * Copyright (C) 2010 Gummi-Dev Team <alexvandermey@gmail.com>
 * All Rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef GUMMI_PREFS_GUI_H
#define GUMMI_PREFS_GUI_H

#include <glib.h>
#include <gtk/gtk.h>

typedef struct _GuPrefsGui {
    GtkWidget* prefwindow;
    GtkNotebook* notebook;
    GtkCheckButton* textwrap_button;
    GtkCheckButton* wordwrap_button;
    GtkCheckButton* line_numbers;
    GtkCheckButton* highlighting;
    GtkCheckButton* autosaving;
    GtkCheckButton* compile_status;
    GtkSpinButton* tabwidth;
    GtkCheckButton* spaces_instof_tabs;
    GtkCheckButton* autoindentation;
    GtkSpinButton* autosave_timer;
    GtkComboBox* combo_languages;
    GtkListStore* list_languages;
    GtkTextView* default_text;
    GtkTextBuffer* default_buffer;
    GtkComboBox* typesetter;
    GtkFontButton* editor_font;
    GtkComboBox* compile_scheme;
    GtkSpinButton* compile_timer;
    GtkImage* changeimg;
    GtkLabel* changelabel;

    GtkVBox* view_box;
    GtkHBox* editor_box;
    GtkHBox* compile_box;
} GuPrefsGui;

GuPrefsGui* prefsgui_init(GtkWindow* mainwindow);
void prefsgui_main(void);
void prefsgui_set_current_settings(GuPrefsGui* prefs);
void toggle_linenumbers(GtkWidget* widget, void* user);
void toggle_highlighting(GtkWidget* widget, void* user);
void toggle_textwrapping(GtkWidget* widget, void* user);
void toggle_wordwrapping(GtkWidget* widget, void* user);
void toggle_compilestatus(GtkWidget* widget, void* user);
void toggle_spaces_instof_tabs(GtkWidget* widget, void* user);
void toggle_autosaving(GtkWidget* widget, void* user);
void on_prefs_close_clicked(GtkWidget* widget, void* user);
void on_prefs_reset_clicked(GtkWidget* widget, void* user);
void on_tabwidth_value_changed(GtkWidget* widget, void* user);
void on_autosave_value_changed(GtkWidget* widget, void* user);
void on_compile_value_changed(GtkWidget* widget, void* user);
void on_editor_font_set(GtkWidget* widget, void* user);
void on_combo_typesetter_changed(GtkWidget* widget, void* user);
void on_combo_language_changed(GtkWidget* widget, void* user);
void on_combo_compilescheme_changed(GtkWidget* widget, void* user);

#endif /* GUMMI_PREFS_GUI_H */