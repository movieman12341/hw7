/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainWindow.cpp
 * Author: student
 * 
 * Created on August 6, 2018, 1:42 PM
 */

#include "MainWindow.h"

MainWindow::MainWindow() {
    set_default_size(1200,600);
    //Gtk::Window* window = new Gtk::Window();
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    //vbox->show();
    add(*vbox);
    
    Gtk::MenuBar* menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);
    
    Gtk::MenuItem* menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu);
    menuitem_file->set_submenu(*filemenu);
    
    //VIEW ALL TRAITS
    Gtk::MenuItem* menuitemViewAllTraits = Gtk::manage(new Gtk::MenuItem("View All Traits", true));
    menuitemViewAllTraits->signal_activate().connect(sigc::mem_fun(*this, &MainWindow::onViewAllTraitsClick));
    filemenu->append(*menuitemViewAllTraits);
    
    //ADD TRAIT
    Gtk::MenuItem *menuitemAddTrait = Gtk::manage(new Gtk::MenuItem("Add Trait", true));
    menuitemAddTrait->signal_activate().connect(sigc::mem_fun(*this, &MainWindow::onAddTraitClick));
    filemenu->append(*menuitemAddTrait);
    
    //EXIT
    Gtk::MenuItem *menuitemExit = Gtk::manage(new Gtk::MenuItem("Exit", true));
    menuitemExit->signal_activate().connect(sigc::mem_fun(*this, &MainWindow::onExitClick));
    filemenu->append(*menuitemExit);
    
    
    vbox->show_all();
    
    
}

MainWindow::MainWindow(const MainWindow& orig) {
}

MainWindow::~MainWindow() {
}

void MainWindow::onViewAllTraitsClick()
{
    
}

void MainWindow::onAddTraitClick()
{
    
}

void MainWindow::onExitClick()
{
    
}