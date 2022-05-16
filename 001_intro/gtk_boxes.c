#include <gtk/gtk.h>

/*
*    gcc `pkg-config --cflags gtk+-2.0` -o gtk_boxes gtk_boxes.c `pkg-config --libs gtk+-2.0`
*/

void end_program(GtkWidget *wid, gpointer ptr) {
    gtk_main_quit();
}

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);

    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *btn = gtk_button_new_with_label("Close window");
    g_signal_connect(btn, "clicked", G_CALLBACK(end_program), NULL);
    g_signal_connect(win, "delete_event", G_CALLBACK(end_program), NULL);
    GtkWidget *lbl = gtk_label_new("My label");

    // Window widget can only contain one widget at max,
    // if window conatins multiple widget then only
    // one will be visible and rest will be hidden 
    // however Box widget can have other multiple widget inside
    GtkWidget *box = gtk_vbox_new(FALSE, 5);
    gtk_box_pack_start(GTK_BOX(box), lbl, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(box), btn, TRUE, TRUE, 0);
    gtk_container_add(GTK_CONTAINER(win), box);
    gtk_widget_show_all(win);
    gtk_main();

    return 0;

}