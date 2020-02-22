//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2013 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENCE.GPL
//=============================================================================
#ifndef __CMDLIST_H__
#define __CMDLIST_H__

namespace Ms {

enum class Cmd : unsigned int {
      Invalid = 0,

//Replace
      };

static QString cmdToString(Cmd cmd) {
      switch (cmd) {
            case Cmd::Invalid: return "Invalid"; break;
            
//AndReplace
            default: return "Invalid"; break;
            }
      }
} // Ms

#endif // __CMDLIST_H__
