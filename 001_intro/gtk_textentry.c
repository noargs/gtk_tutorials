#include <gtk/gtk.h>

GtkWidget *txt;

void end_program(GtkWidget *wid, gpointer ptr) {
    gtk_main_quit();
}

void copy_text(GtkWidget *wid, gpointer ptr) {
    const char *input = gtk_entry_get_text(GTK_ENTRY(txt));
    gtk_label_set_text(GTK_LABEL(ptr), input);
}

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);

    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *btn = gtk_button_new_with_label("Closed window");
    g_signal_connect(btn, "clicked", G_CALLBACK(end_program), NULL);
    g_signal_connect(win, "delete_event", G_CALLBACK(end_program), NULL);

    GtkWidget *lbl = gtk_label_new("My label");
    GtkWidget *btn2 = gtk_button_new_with_label("Copy button");
    g_signal_connect(btn2, "clicked", G_CALLBACK(copy_text), lbl);

    // GtkEntry widget
    txt = gtk_entry_new();

    GtkWidget *tbl = gtk_table_new(2, 2, TRUE);
    gtk_table_attach_defaults(GTK_TABLE(tbl), lbl, 0, 1, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(tbl), btn2, 1, 2, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(tbl), btn, 0, 1, 1, 2);
    gtk_table_attach_defaults(GTK_TABLE(tbl), txt, 1, 2, 1, 2);

    gtk_container_add(GTK_CONTAINER(win), tbl);
    gtk_widget_show_all(win);
    gtk_main();


    return 0;
}