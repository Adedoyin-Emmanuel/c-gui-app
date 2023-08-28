#include <gtk/gtk.h>
#include <stdio.h>
#include "app.h"


int main(int argc, char *argv[]) {
   
   GtkBuilder *builder;
   gtk_init(argc, &argv);
   
   
   builder = gtk_builder_new();
   
   gtk_builder_add_from_file(builder, "app-ui.glade", NULL);
   
   
   appWindow = GTK_WIDGET(gtk_builder_get_object(builder, "MyWindow"));
   appLabel = GTK_LABEL(gtk_builder_get_object(builder, "MyLabel"));
   
   
   gtk_object_connect_signals(builder, NULL);
   g_object_unref(builder);
   
   
   gtk_widget_show_all(appWindow);
   gtk_main();
   
   
   return 0;
   
}



void exit_app () 
{

   printf("Exiting app\n");
   gtk_main_quit();
   
}


void button_clicked ()
{
    printf("Button clicked\n");
    gtk_label_set_text(myLabel);
}
