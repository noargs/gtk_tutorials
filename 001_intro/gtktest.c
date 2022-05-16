#include <gtk/gtk.h>

/* 
*    gcc `pkg-config --cflags gtk+-2.0` -o gtktest gtktest.c `pkg-config --libs gtk+-2.0`
*/

int main(int argc, char** argv) {

    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(win);
    gtk_main();

    return 0;
}