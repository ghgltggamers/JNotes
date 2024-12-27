/*
 * Copyright (c) JNotes 2024
 * Written by ghgltggamer
 * Check the LICENSE file for Licensing info
 * Check out the README.md file for more information
 */
// Source
#ifndef MAIN
#define MAIN 101010111
#include "JNotes.h"

int main(int argc, char* argv[]){
   HTMLUI root("JNotes - Just Notes For Linux", 1280, 720);
   root.loadHTML("<style>"
                  +theme_content+
                  "</style>"
                  "<body>"
                  "<div>"
                  "  <nav>"
                  "     <span class='left'>JNotes</span>"
                  "     <span class='center'><input id='search' placeholder='Search Your Notes'></span>"
                  "     <span class='right'><button>Settings</button></span>"
                  "  </nav>"
                  "</div>"
                  "<br><br>"
                  "<div>"
                  "  <div class='layout-left'>"
                  "     <div class='prj'><h2>Welcome to JNotes!</h2><p>Let's take a little tour</p></div>"
                  "  </div>"
                  "  <div class='layout-right'>"
                  "     <div class='card'>"
                  "        <center>"
                  "           <input id='prj-name' placeholder='Project name'><button id='create-prj'>+ Build</button><br><br>"
                  "           <button> (-) Remove </button>"
                  "           <button> Clear All </button>"
                  "        </center>"
                  "     </div>"
                  "  </div>"
                  "</div><br><br><br><br><br><br><br><br><b>Projects ≡</b><br><br>"
                  "<div id='prjs'>"
                  "  <div class='prj'>"
                  "     <h2>Example Project!</h2>"
                  "     <p> Your Projects will show here.</p>"
                  "  </div><br>"
                  "</div>"
                  "</body>");
   root.run();
   return 0;
}
#endif
