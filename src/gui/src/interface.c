/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_lshw (void)
{
  GtkWidget *lshw;
  GtkWidget *vbox1;
  GtkWidget *menubar1;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *save_as1;
  GtkWidget *separatormenuitem1;
  GtkWidget *quit1;
  GtkWidget *menuitem5;
  GtkWidget *menuitem5_menu;
  GtkWidget *copy1;
  GtkWidget *menuitem6;
  GtkWidget *menuitem6_menu;
  GtkWidget *refresh1;
  GtkWidget *menuitem7;
  GtkWidget *menuitem7_menu;
  GtkWidget *about1;
  GtkWidget *toolbar1;
  gint tmp_toolbar_icon_size;
  GtkWidget *refreshbutton;
  GtkWidget *savebutton;
  GtkWidget *quitbutton;
  GtkWidget *scrolledwindow1;
  GtkWidget *hwtree;
  GtkWidget *statusbar1;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  lshw = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (lshw), _("lshw"));
  gtk_window_set_default_size (GTK_WINDOW (lshw), 480, 640);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (lshw), vbox1);

  menubar1 = gtk_menu_bar_new ();
  gtk_widget_show (menubar1);
  gtk_box_pack_start (GTK_BOX (vbox1), menubar1, FALSE, FALSE, 0);

  menuitem4 = gtk_menu_item_new_with_mnemonic (_("_File"));
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  save_as1 = gtk_image_menu_item_new_from_stock ("gtk-save-as", accel_group);
  gtk_widget_show (save_as1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), save_as1);

  separatormenuitem1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  quit1 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_show (quit1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), quit1);

  menuitem5 = gtk_menu_item_new_with_mnemonic (_("_Edit"));
  gtk_widget_show (menuitem5);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem5);

  menuitem5_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem5), menuitem5_menu);

  copy1 = gtk_image_menu_item_new_from_stock ("gtk-copy", accel_group);
  gtk_widget_show (copy1);
  gtk_container_add (GTK_CONTAINER (menuitem5_menu), copy1);

  menuitem6 = gtk_menu_item_new_with_mnemonic (_("_View"));
  gtk_widget_show (menuitem6);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem6);

  menuitem6_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem6), menuitem6_menu);

  refresh1 = gtk_image_menu_item_new_from_stock ("gtk-refresh", accel_group);
  gtk_widget_show (refresh1);
  gtk_container_add (GTK_CONTAINER (menuitem6_menu), refresh1);

  menuitem7 = gtk_menu_item_new_with_mnemonic (_("_Help"));
  gtk_widget_show (menuitem7);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem7);

  menuitem7_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem7), menuitem7_menu);

  about1 = gtk_menu_item_new_with_mnemonic (_("_About"));
  gtk_widget_show (about1);
  gtk_container_add (GTK_CONTAINER (menuitem7_menu), about1);

  toolbar1 = gtk_toolbar_new ();
  gtk_widget_show (toolbar1);
  gtk_box_pack_start (GTK_BOX (vbox1), toolbar1, FALSE, FALSE, 0);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar1), GTK_TOOLBAR_BOTH);
  tmp_toolbar_icon_size = gtk_toolbar_get_icon_size (GTK_TOOLBAR (toolbar1));

  refreshbutton = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-refresh");
  gtk_widget_show (refreshbutton);
  gtk_container_add (GTK_CONTAINER (toolbar1), refreshbutton);

  savebutton = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-save-as");
  gtk_widget_show (savebutton);
  gtk_container_add (GTK_CONTAINER (toolbar1), savebutton);

  quitbutton = (GtkWidget*) gtk_tool_button_new_from_stock ("gtk-quit");
  gtk_widget_show (quitbutton);
  gtk_container_add (GTK_CONTAINER (toolbar1), quitbutton);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (vbox1), scrolledwindow1, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  hwtree = gtk_tree_view_new ();
  gtk_widget_show (hwtree);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), hwtree);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (hwtree), FALSE);

  statusbar1 = gtk_statusbar_new ();
  gtk_widget_show (statusbar1);
  gtk_box_pack_start (GTK_BOX (vbox1), statusbar1, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) lshw, "delete_event",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) save_as1, "activate",
                    G_CALLBACK (save_as),
                    NULL);
  g_signal_connect ((gpointer) quit1, "activate",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) copy1, "activate",
                    G_CALLBACK (on_copy1_activate),
                    NULL);
  g_signal_connect ((gpointer) refresh1, "activate",
                    G_CALLBACK (refresh_display),
                    NULL);
  g_signal_connect ((gpointer) about1, "activate",
                    G_CALLBACK (on_about1_activate),
                    NULL);
  g_signal_connect ((gpointer) refreshbutton, "clicked",
                    G_CALLBACK (refresh_display),
                    NULL);
  g_signal_connect ((gpointer) savebutton, "clicked",
                    G_CALLBACK (save_as),
                    NULL);
  g_signal_connect ((gpointer) quitbutton, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (lshw, lshw, "lshw");
  GLADE_HOOKUP_OBJECT (lshw, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (lshw, menubar1, "menubar1");
  GLADE_HOOKUP_OBJECT (lshw, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (lshw, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (lshw, save_as1, "save_as1");
  GLADE_HOOKUP_OBJECT (lshw, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (lshw, quit1, "quit1");
  GLADE_HOOKUP_OBJECT (lshw, menuitem5, "menuitem5");
  GLADE_HOOKUP_OBJECT (lshw, menuitem5_menu, "menuitem5_menu");
  GLADE_HOOKUP_OBJECT (lshw, copy1, "copy1");
  GLADE_HOOKUP_OBJECT (lshw, menuitem6, "menuitem6");
  GLADE_HOOKUP_OBJECT (lshw, menuitem6_menu, "menuitem6_menu");
  GLADE_HOOKUP_OBJECT (lshw, refresh1, "refresh1");
  GLADE_HOOKUP_OBJECT (lshw, menuitem7, "menuitem7");
  GLADE_HOOKUP_OBJECT (lshw, menuitem7_menu, "menuitem7_menu");
  GLADE_HOOKUP_OBJECT (lshw, about1, "about1");
  GLADE_HOOKUP_OBJECT (lshw, toolbar1, "toolbar1");
  GLADE_HOOKUP_OBJECT (lshw, refreshbutton, "refreshbutton");
  GLADE_HOOKUP_OBJECT (lshw, savebutton, "savebutton");
  GLADE_HOOKUP_OBJECT (lshw, quitbutton, "quitbutton");
  GLADE_HOOKUP_OBJECT (lshw, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (lshw, hwtree, "hwtree");
  GLADE_HOOKUP_OBJECT (lshw, statusbar1, "statusbar1");

  gtk_window_add_accel_group (GTK_WINDOW (lshw), accel_group);

  return lshw;
}

GtkWidget*
create_aboutlshw (void)
{
  GtkWidget *aboutlshw;
  GtkWidget *dialog_vbox1;
  GtkWidget *aboutext;
  GtkWidget *dialog_action_area1;
  GtkWidget *closebutton1;

  aboutlshw = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (aboutlshw), _("About"));
  gtk_window_set_destroy_with_parent (GTK_WINDOW (aboutlshw), TRUE);
  gtk_window_set_skip_taskbar_hint (GTK_WINDOW (aboutlshw), TRUE);
  gtk_window_set_skip_pager_hint (GTK_WINDOW (aboutlshw), TRUE);
  gtk_window_set_type_hint (GTK_WINDOW (aboutlshw), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (aboutlshw)->vbox;
  gtk_widget_show (dialog_vbox1);

  aboutext = gtk_label_new (_("<big><b>GTK+ front-end for <tt>lshw</tt></b></big>\n<i>A.01.08</i>\n\n(c) 2004, Lyonel Vincent\n<tt>lyonel@ezix.org</tt>\n\n<span foreground=\"blue\"><u>http://www.ezix.org/</u></span>"));
  gtk_widget_show (aboutext);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), aboutext, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (aboutext), TRUE);
  gtk_label_set_justify (GTK_LABEL (aboutext), GTK_JUSTIFY_CENTER);
  gtk_misc_set_padding (GTK_MISC (aboutext), 20, 20);

  dialog_action_area1 = GTK_DIALOG (aboutlshw)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  closebutton1 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (aboutlshw), closebutton1, GTK_RESPONSE_CLOSE);
  GTK_WIDGET_SET_FLAGS (closebutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) closebutton1, "activate",
                    G_CALLBACK (on_aboutclose_activate),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (aboutlshw, aboutlshw, "aboutlshw");
  GLADE_HOOKUP_OBJECT_NO_REF (aboutlshw, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (aboutlshw, aboutext, "aboutext");
  GLADE_HOOKUP_OBJECT_NO_REF (aboutlshw, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (aboutlshw, closebutton1, "closebutton1");

  return aboutlshw;
}

