/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainWindow.h
 * Author: student
 *
 * Created on August 6, 2018, 1:42 PM
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<gtkmm.h>
#include "lxo5628_View.h"
#include "lxo5628_Controller.h"

class MainWindow : public Gtk::Window
{
    public:
        MainWindow(Controller* cont, View* view);
        //MainWindow(const MainWindow& orig);
        virtual ~MainWindow();

    protected:
        void onGetMenuClick();
        void onViewAllTraitsClick();
        void onAddTraitClick();
        void onExitClick();
    private:
        Controller* newController;
        View* newView;
};

#endif /* MAINWINDOW_H */

