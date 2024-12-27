/*
 * Copyright (c) JNotes 2024
 * Written by ghgltggamer
 * Check the LICENSE file for Licensing info
 * Check out the README.md file for more information
 */
// Source starts from here
#ifndef MAIN_HEADER
#define MAIN_HEADER 11110101
#include <iostream>
#include   <string>
#include  <fstream>
#include   <vector>
#include    <cmath>

// HTMLUI Library
#include "lib/HTMLUI.h"

// Variables for the main file
std::string theme_style_transition = ".4s";
std::string theme_name = "JNotes-Native", theme_content="body{"
                                                        "   background-color: #101010;"
                                                        "   color: whitesmoke;"
                                                        "   font-family: Arial;"
                                                        "}"
                                                        "*{"
                                                        "   transition: " + theme_style_transition + ";"
                                                        "}"
                                                        "nav{"
                                                        "   height: 60px;"
                                                        "   width: 100%;"
                                                        "   background: #1C1C1C;"
                                                        "   box-shadow: 5px 5px 10px rgba(0,0,0,0.1);"
                                                        "}"
                                                        "nav .left{"
                                                        "   position: absolute;"
                                                        "   left: 20px;"
                                                        "}"
                                                        "nav .center{"
                                                        "   position: absolute;"
                                                        "   left: 40%;"
                                                        "   right: 40%;"
                                                        "}"
                                                        "nav .right{"
                                                        "   position: absolute;"
                                                        "   right: 20px;"
                                                        "}"
                                                        "nav *{"
                                                        "   top: 20px;"
                                                        "}"
                                                        "input{"
                                                        "   background: transparent;"
                                                        "   height: 35px;"
                                                        "   padding: 10px;"
                                                        "   border: 2px solid rgba(255,255,255,0.2);"
                                                        "   border-radius: 5px;"
                                                        "   outline: 0px;"
                                                        "   cursor: pointer;"
                                                        "   color: whitesmoke;"
                                                        "}"
                                                        "input:hover{"
                                                        "   border-color: dodgerblue;"
                                                        "}"
                                                        "input:focus{"
                                                        "   outline: 2px solid skyblue;"
                                                        "}"
                                                        "button{"
                                                        "   background: dodgerblue;"
                                                        "   color: white;"
                                                        "   border: 0px;"
                                                        "   border-radius: 5px;"
                                                        "   cursor: pointer;"
                                                        "   height: 35px;"
                                                        "   width: 100px;"
                                                        "}"
                                                        "button:hover{"
                                                        "   background: deepskyblue;"
                                                        "}"
                                                        "button:active{"
                                                        "   box-shadow: 0px 0px 10px dodgerblue;"
                                                        "}"
                                                        "button:focus{"
                                                        "   box-shadow: 0px 0px 10px dodgerblue;"
                                                        "   background: deepskyblue;"
                                                        "}"
                                                        ".layout-left{float: left;width: 59%;}"
                                                        ".layout-right{float: right;width: 40%;}"
                                                        ".card{"
                                                        "   background: #1C1C1C;"
                                                        "   color: white;"
                                                        "   border: 0px;"
                                                        "   border-radius: 5px;"
                                                        "   box-shadow: 0px 0px 10p rgba(0,0,0,0.1);"
                                                        "padding: 20px;"
                                                        "}"
                                                        ".prj{"
                                                        "   background: #1C1C1C;"
                                                        "   color: white;"
                                                        "   border: 0px;"
                                                        "   border-radius: 5px;"
                                                        "   box-shadow: 0px 0px 10p rgba(0,0,0,0.1);"
                                                        "padding: 20px;"
                                                        "   max-height: 200px;"
                                                        "   overflow: hidden;"
                                                        "}"
                                                        ".prj:hover{background-color: rgba(255,255,255,0.2);box-shadow: 0px 0px 35px rgba(0,0,0,0.2);}"
                                                        ;
#endif
