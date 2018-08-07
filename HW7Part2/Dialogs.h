/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dialogs.h
 * Author: student
 *
 * Created on August 3, 2018, 1:42 PM
 */

#ifndef DIALOGS_H
#define DIALOGS_H

#include<string>
#include<iostream>
#include<gtkmm.h>

using namespace::std;

class Dialogs {
public:
    Dialogs();
    Dialogs(const Dialogs& orig);
    virtual ~Dialogs();
    
    static string input(string msg, string title, string default_text = "", string cancel_text = "CANCEL");
    static void message(string msg, string title);
    static void menu_window();
private:

};

#endif /* DIALOGS_H */

