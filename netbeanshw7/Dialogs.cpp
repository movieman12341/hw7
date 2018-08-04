/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dialogs.cpp
 * Author: student
 * 
 * Created on August 3, 2018, 1:42 PM
 */

#include "Dialogs.h"

Dialogs::Dialogs() {
}

Dialogs::Dialogs(const Dialogs& orig) {
}

Dialogs::~Dialogs() {
}

string Dialogs::input(string msg, string title, string default_text, string cancel_text)
{
    Gtk::Dialog *dialog = new Gtk::Dialog();  
    dialog->set_title(title);
    
    Gtk::Label* label = new Gtk::Label(msg);
    dialog->get_content_area()->pack_start(*label);
    label->show();
    
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK",1);
    dialog->set_default_response(1);
    
    
    Gtk::Entry* entry = new Gtk::Entry();
    entry->set_text(default_text);
    entry->set_max_length(50);
    entry->show();
    dialog->get_vbox()->pack_start(*entry);
    
    int result = dialog->run();
    string text = entry->get_text();
    
    dialog->close();
    while (Gtk::Main::events_pending())
    {
        Gtk::Main::iteration();
    }
    delete dialog;
    delete label;
    delete entry;
    
    if (result == 1)
        return text;
    else
        return cancel_text;
}



void Dialogs::message(string msg, string title)
{
    Gtk::MessageDialog* msgdialog = new Gtk::MessageDialog(title);
    msgdialog->set_default_size(1200,600);
    msgdialog->set_secondary_text(msg, true);
    msgdialog->run();
    
    while (Gtk::Main::events_pending())
        Gtk::Main::iteration();
    
    delete msgdialog;
    
//    Gtk::Dialog* dialog = new Gtk::Dialog();
//    dialog->set_default_size(1200, 600);
//    dialog->set_title(title);
////    string test = "all time sheets must be approved, either thrue email or signature, by your"
////            "\n supervisor before they are processed. if it is a loopy signature an email approval"
////            "\nwill be required."
////            "\n\nplease type your times into the timesheet pdf. if you cannot open the pdf"
////            "\n you may hand wiret your hours. if it is nott legible it will be returned your correction.";
//    Gtk::Label* label = new Gtk::Label(msg);
//    dialog->get_content_area()->pack_start(*label);
//    label->show();
//    
//    dialog->add_button("Cancel", 0);
//    dialog->add_button("OK",1);
//    dialog->set_default_response(1);
//    
//    int result = dialog->run();
//    
//    dialog->close();
//    while (Gtk::Main::events_pending())
//    {
//        Gtk::Main::iteration();
//    }
//    delete dialog;
//    delete label;
}




//void Dialogs::menu_window()
//{
//    Gtk::Window* window = new Gtk::Window();
//    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
//    //vbox->show();
//    window->add(*vbox);
//    
//    Gtk::MenuBar* menubar = Gtk::manage(new Gtk::MenuBar());
//    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);
//    
//    Gtk::MenuItem* menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
//    menubar->append(*menuitem_file);
//    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu);
//    menuitem_file->set_submenu(*filemenu);
//    
//    
//    vbox->show_all();
//    
//    
//    
//}