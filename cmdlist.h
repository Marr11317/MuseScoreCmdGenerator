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

      FOTOMODE,
      PAGE_END,
      TOGGLE_SELECTION_WINDOW,
      TOGGLE_INSERT_MODE,
      DOWN_CHORD,
      NOTE_D,
      PAD_DOT,
      TOGGLE_PIANO,
      TOP_CHORD,
      SPLIT_V,
      VOICE_X24,
      TEXT_U,
      FRET_10,
      BOTTOM_CHORD,
      ENH_BOTH,
      SHOW_TOURS,
      RESEQUENCE_REHEARSAL_MARKS,
      NO_BEAM,
      TOGGLE_FILEOPERATIONS,
      ADD_STACCATO,
      EDIT_INFO,
      FLIP,
      PAGE_BREAK,
      FRET_0,
      INSERT_B,
      NOTE_A,
      INTERVAL2,
      DEBUGGER,
      HRASTER,
      FRET_6,
      +,
      SECTION_BREAK,
      NO_HORIZONTAL_STRETCH,
      VOICE_4,
      QUINTUPLET,
      TOGGLE_CONCERTPITCH,
      PAD_NOTE_128,
      BEAM_START,
      IMPLODE,
      SET_VISIBLE,
      TIME_DELETE,
      EDIT_TOOLBARS,
      TOGGLE_WORKSPACES_TOOLBAR,
      LOOP_IN,
      INSERT_MEASURES,
      HELP,
      ADD_HAIRPIN_REVERSE,
      PREV_LYRIC,
      ADD_REMOVE_BREAKS,
      FIGURED_BASS,
      FLAT,
      SCR_NEXT,
      SPLIT_H,
      ADD_SFORZATO,
      TOGGLE_FEEDBACK,
      MOVE_DOWN,
      LOOP,
      SELECT_BEGIN_SCORE,
      STRETCH_MORE,
      NOTE_INPUT_RHYTHM,
      APPEND_HBOX,
      COUNTIN,
      ADVANCE_32,
      PREV_MEASURE_TEXT,
      ADD_SLUR,
      SHOW_OMR,
      EDIT_HARMONY,
      OMR,
      PREVIOUS_SCORE,
      PAD_NOTE_128_TAB,
      INTERVAL3,
      NOTE_INPUT_REPITCH,
      LAYER,
      NOTE_E,
      FRET_14,
      FILE_SAVE_A_COPY,
      PAD_NOTE_INCREASE,
      TIE,
      TOGGLE_SCRIPT_RECORDER,
      SAVE_STYLE,
      UNSET_VISIBLE,
      PAN,
      CONFIG_RASTER,
      BEAM_MID,
      TOGGLE_MIDIIMPORTPANEL,
      APPEND_MEASURE,
      NEXT_CHORD,
      FILE_NEW,
      SYSTEM_TEXT,
      CUT,
      ADD_8VA,
      GET_LOCATION,
      MIDI_ON,
      FRET_1,
      QML_RELOAD_SOURCE,
      MOVE_UP,
      SELECT_STAFF_ABOVE,
      LAST_ELEMENT,
      TOGGLE_MIXER,
      SELECT_ALL,
      BACKSPACE,
      PAD_NOTE_DECREASE,
      ADD_TENUTO,
      NOTE_INPUT,
      BEAM32,
      PLAY_PREV_CHORD,
      ADD_HAIRPIN,
      PAD_DOT3,
      ADD_MARCATO,
      SELECT_STAFF_BELOW,
      PAD_NOTE_INCREASE_TAB,
      INSERT_G,
      TOGGLE_AUTOPLACE,
      PASTE_DOUBLE,
      REDO,
      REWIND,
      ADD_BRACKETS,
      REST_8,
      INTERVAL_8,
      FILE_PART_EXPORT,
      CHORD_TEXT,
      UNROLL_REPEATS,
      POET_TEXT,
      FRET_2,
      TOGGLE_PALETTE,
      SCR_PREV,
      PITCH_DOWN_OCTAVE,
      SWAP,
      PASTE_HALF,
      FRET_4,
      INSERT_C,
      REST_TAB,
      SEXTUPLET,
      PLUGIN_CREATOR,
      CHORD_G,
      SEEK_END,
      FRET_7,
      TRANSPOSE,
      QUIT,
      PAD_NOTE_4,
      SELECT_SECTION,
      NOTE_LONGA,
      EXPLODE,
      SEEK_BEGIN,
      FILE_SAVE_SELECTION,
      ZOOMIN,
      TOGGLE_VISIBLE,
      ADVANCE_64,
      SUBTITLE_TEXT,
      PAD_NOTE_32_TAB,
      APPEND_TEXTFRAME,
      APPEND_MEASURES,
      RESET_STRETCH,
      TOGGLE_TRANSPORT,
      INTERVAL_7,
      TOGGLE_STATUSBAR,
      CHORD_TIE,
      ACCIACCATURA,
      DEC_DURATION_DOTTED,
      FRET_13,
      SHARP,
      REHEARSALMARK_TEXT,
      VOICE_X14,
      ROMAN_NUMERAL_TEXT,
      ALBUM,
      INTERVAL_5,
      MIRROR_NOTE,
      NOTE_F,
      APPLY_CURRENT_PALETTE_ELEMENT,
      SHOW_PAGEBORDERS,
      LEAVE_FEEDBACK,
      PAD_NOTE_DECREASE_TAB,
      FRET_3,
      INTERVAL1,
      CHORD_F,
      LOAD_STYLE,
      PAD_NOTE_8_TAB,
      MEDIA,
      NOTE_INPUT_TIMEWISE,
      DELETE,
      REALTIME_ADVANCE,
      ADD_TRILL,
      FRET_8,
      INSERT_MEASURE,
      DOUBLE_DURATION,
      APPOGGIATURA,
      PLAY_PREV_MEASURE,
      SELECT_NEXT_MEASURE,
      FOLLOW,
      JOIN_MEASURES,
      FRET_12,
      SELECT_PREV_CHORD,
      PREV_ELEMENT,
      INSERT_FRETFRAME,
      NONUPLET,
      NO_VERTICAL_STRETCH,
      GRACE32AFTER,
      FINGERING_TEXT,
      FILE_OPEN,
      SELECT_NEXT_CHORD,
      PAD_DOTDOT,
      PRINT,
      SHOW_SKYLINES,
      PREV_MEASURE,
      INTERVAL_2,
      CLEF_BASS,
      FBEAM2,
      SHOW_UNPRINTABLE,
      SYSTEM_BREAK,
      CHORD_B,
      PAGE_TOP,
      INSERT_HBOX,
      TOGGLE_NOTEINPUT,
      PLAY_NEXT_CHORD,
      OCTUPLET,
      REST_2,
      INTERVAL_6,
      TUPLET_DIALOG,
      VOICE_X13,
      STARTCENTER,
      RE_LAYOUT,
      ADVANCE_16,
      INSERT_E,
      SELECT_PREV_MEASURE,
      PAD_NOTE_2_TAB,
      AUTO_BEAM,
      INTERVAL_4,
      NEXT_MEASURE_TEXT,
      SHOW_INVISIBLE,
      INTERVAL8,
      RESET_TOURS,
      PAGE_NEXT,
      NEXT_SEGMENT_ELEMENT,
      PREV_SEGMENT_ELEMENT,
      FULL_MEASURE_REST,
      PASTE_SPECIAL,
      LOOP_OUT,
      PITCH_DOWN_DIATONIC,
      INC_DURATION_DOTTED,
      MOVE_RIGHT,
      FILE_SAVE,
      DUPLET,
      PAGE_SETTINGS,
      FILE_SAVE_ONLINE,
      ADVANCE_BREVE,
      REPEAT,
      NEXT_ELEMENT,
      EXPRESSION_TEXT,
      TOGGLE_MMREST,
      ZOOM100,
      SELECT_SIMILAR_RANGE,
      PAD_REST,
      SELECT_END_SCORE,
      CHORD_D,
      FRET_9,
      REST_4,
      RESET,
      FLAT2,
      FBEAM1,
      ESCAPE,
      SLASH_FILL,
      REST,
      CHORD_E,
      PART_TEXT,
      INTERVAL9,
      RESET_BEAMMODE,
      ADVANCE_LONGA,
      PITCH_UP,
      TRANSPOSE_DOWN,
      MOVE_LEFT,
      PAD_NOTE_2,
      SELECT_SIMILAR_STAFF,
      REPORT_BUG,
      ADD_NOTELINE,
      TITLE_TEXT,
      SPLIT_MEASURE,
      EDIT_ELEMENT,
      PLUGIN_MANAGER,
      TOGGLE_TIMELINE,
      PAD_NOTE_1,
      NEXT_BEAT_TEXT,
      INSERT_TEXTFRAME,
      VOICE_X34,
      PAD_DOT4,
      SHOW_BOUNDING_RECT,
      INTERVAL4,
      NOTE_C,
      TRIPLET,
      PAD_NOTE_64,
      NOTE_INPUT_STEPTIME,
      NOTE_INPUT_REALTIME_MANUAL,
      PLAY_NEXT_MEASURE,
      CLEF_VIOLIN,
      PAD_NOTE_16_TAB,
      RESET_GROUPINGS,
      PITCH_UP_DIATONIC,
      CREATE_NEW_WORKSPACE,
      NAT,
      VOICE_1,
      FILE_CLOSE,
      TRANSPOSE_UP,
      PAD_NOTE_64_TAB,
      COPY,
      RELAYOUT,
      INTERVAL_9,
      INSTRUMENT_CHANGE_TEXT,
      GRACE32,
      PREV_CHORD,
      VRASTER,
      INTERVAL5,
      UP_CHORD,
      SELECT_BEGIN_LINE,
      GRACE16,
      ADD_8VB,
      INSTRUMENTS,
      GRACE16AFTER,
      DEL_EMPTY_MEASURES,
      VOICE_X12,
      FIND,
      UNDO,
      PARTS,
      PREV_BEAT_TEXT,
      REST_1,
      NEXT_MEASURE,
      STRING_BELOW,
      NOTE_B,
      PREV_TRACK,
      TIME_SIGNATURES,
      RESET_STYLE,
      SHOW_CORRUPTED_MEASURES,
      PITCH_UP_OCTAVE,
      SHOW_SYSTEM_BOUNDING_RECT,
      FRET_5,
      PAD_NOTE_4_TAB,
      ZOOMOUT,
      FRAME_TEXT,
      SHARP2,
      PAGE_PREV,
      SEPTUPLET,
      INSPECTOR,
      FRET_11,
      NOTE_BREVE_TAB,
      REPEAT_CMD,
      ADVANCE_4,
      VOICE_X23,
      PLAY,
      TEXT_B,
      SELECT_DIALOG,
      NOTE_BREVE,
      TOGGLE_IMAGECAPTURE,
      STICKING_TEXT,
      TOGGLE_NAVIGATOR,
      PAD_NOTE_32,
      FULLSCREEN,
      INTERVAL_3,
      SHOW_SEGMENT_SHAPES,
      PAD_NOTE_1_TAB,
      SYNTH_CONTROL,
      COMPOSER_TEXT,
      NOTE_INPUT_REALTIME_AUTO,
      NOTE_LONGA_TAB,
      INTERVAL6,
      TEXT_WORD_RIGHT,
      EDIT_STYLE,
      PAD_NOTE_16,
      FILE_SAVE_AS,
      GRACE8AFTER,
      SHOW_KEYS,
      TEXT_WORD_LEFT,
      PICTURE,
      TOGGLE_PLAYPANEL,
      INTERVAL7,
      PALETTE_SEARCH,
      AUTOPLACE_ENABLED,
      CONCERT_PITCH,
      SHOW_FRAMES,
      VOICE_3,
      ADVANCE_8,
      PITCH_SPELL,
      PITCH_DOWN,
      NASHVILLE_NUMBER_TEXT,
      NEXT_LYRIC,
      LOCK,
      CHORD_A,
      RE_LAYOUT,
      TOGGLE_HIDE_EMPTY,
      TEXT_I,
      STAFF_TEXT,
      STRETCH_LESS,
      INSERT_A,
      ADD_UP_BOW,
      VOICE_2,
      ADD_DOWN_BOW,
      FILE_EXPORT,
      TOGGLE_SCORECMP_TOOL,
      INSERT_VBOX,
      MARK_IRREGULAR,
      ADVANCE_2,
      BEAM64,
      INSERT_D,
      METRONOME,
      FIRST_ELEMENT,
      CHORD_C,
      MAG,
      REVISION,
      PASTE,
      QUADRUPLET,
      SELECT_END_LINE,
      KEY_SIGNATURES,
      SELECT_SIMILAR,
      ADVANCE_1,
      HALF_DURATION,
      RESOURCE_MANAGER,
      COPY_LYRICS_TO_CLIPBOARD,
      GRACE4,
      STRING_ABOVE,
      PAD_REST_TAB,
      APPEND_VBOX,
      SYMBOLS,
      ADD_PARENTHESES,
      NOTE_G,
      INSERT_F,
      LYRICS,
      FILE_IMPORT_PDF,
      SLASH_RHYTHM,
      MASTERPALETTE,
      NEXT_TRACK,
      REPEAT_SEL,
      TEMPO,
      ENH_CURRENT,
      PAD_NOTE_8,
      VIEWMODE,
      NEXT_SCORE
      };

static QString cmdToString(Cmd cmd) {
      switch (cmd) {
            case Cmd::Invalid: return "Invalid"; break;
            case Cmd::FOTOMODE                      : return "fotomode"                      ; break;
            case Cmd::PAGE_END                      : return "page-end"                      ; break;
            case Cmd::TOGGLE_SELECTION_WINDOW       : return "toggle-selection-window"       ; break;
            case Cmd::TOGGLE_INSERT_MODE            : return "toggle-insert-mode"            ; break;
            case Cmd::DOWN_CHORD                    : return "down-chord"                    ; break;
            case Cmd::NOTE_D                        : return "note-d"                        ; break;
            case Cmd::PAD_DOT                       : return "pad-dot"                       ; break;
            case Cmd::TOGGLE_PIANO                  : return "toggle-piano"                  ; break;
            case Cmd::TOP_CHORD                     : return "top-chord"                     ; break;
            case Cmd::SPLIT_V                       : return "split-v"                       ; break;
            case Cmd::VOICE_X24                     : return "voice-x24"                     ; break;
            case Cmd::TEXT_U                        : return "text-u"                        ; break;
            case Cmd::FRET_10                       : return "fret-10"                       ; break;
            case Cmd::BOTTOM_CHORD                  : return "bottom-chord"                  ; break;
            case Cmd::ENH_BOTH                      : return "enh-both"                      ; break;
            case Cmd::SHOW_TOURS                    : return "show-tours"                    ; break;
            case Cmd::RESEQUENCE_REHEARSAL_MARKS    : return "resequence-rehearsal-marks"    ; break;
            case Cmd::NO_BEAM                       : return "no-beam"                       ; break;
            case Cmd::TOGGLE_FILEOPERATIONS         : return "toggle-fileoperations"         ; break;
            case Cmd::ADD_STACCATO                  : return "add-staccato"                  ; break;
            case Cmd::EDIT_INFO                     : return "edit-info"                     ; break;
            case Cmd::FLIP                          : return "flip"                          ; break;
            case Cmd::PAGE_BREAK                    : return "page-break"                    ; break;
            case Cmd::FRET_0                        : return "fret-0"                        ; break;
            case Cmd::INSERT_B                      : return "insert-b"                      ; break;
            case Cmd::NOTE_A                        : return "note-a"                        ; break;
            case Cmd::INTERVAL2                     : return "interval2"                     ; break;
            case Cmd::DEBUGGER                      : return "debugger"                      ; break;
            case Cmd::HRASTER                       : return "hraster"                       ; break;
            case Cmd::FRET_6                        : return "fret-6"                        ; break;
            case Cmd::+                             : return "+"                             ; break;
            case Cmd::SECTION_BREAK                 : return "section-break"                 ; break;
            case Cmd::NO_HORIZONTAL_STRETCH         : return "no-horizontal-stretch"         ; break;
            case Cmd::VOICE_4                       : return "voice-4"                       ; break;
            case Cmd::QUINTUPLET                    : return "quintuplet"                    ; break;
            case Cmd::TOGGLE_CONCERTPITCH           : return "toggle-concertpitch"           ; break;
            case Cmd::PAD_NOTE_128                  : return "pad-note-128"                  ; break;
            case Cmd::BEAM_START                    : return "beam-start"                    ; break;
            case Cmd::IMPLODE                       : return "implode"                       ; break;
            case Cmd::SET_VISIBLE                   : return "set-visible"                   ; break;
            case Cmd::TIME_DELETE                   : return "time-delete"                   ; break;
            case Cmd::EDIT_TOOLBARS                 : return "edit-toolbars"                 ; break;
            case Cmd::TOGGLE_WORKSPACES_TOOLBAR     : return "toggle-workspaces-toolbar"     ; break;
            case Cmd::LOOP_IN                       : return "loop-in"                       ; break;
            case Cmd::INSERT_MEASURES               : return "insert-measures"               ; break;
            case Cmd::HELP                          : return "help"                          ; break;
            case Cmd::ADD_HAIRPIN_REVERSE           : return "add-hairpin-reverse"           ; break;
            case Cmd::PREV_LYRIC                    : return "prev-lyric"                    ; break;
            case Cmd::ADD_REMOVE_BREAKS             : return "add-remove-breaks"             ; break;
            case Cmd::FIGURED_BASS                  : return "figured-bass"                  ; break;
            case Cmd::FLAT                          : return "flat"                          ; break;
            case Cmd::SCR_NEXT                      : return "scr-next"                      ; break;
            case Cmd::SPLIT_H                       : return "split-h"                       ; break;
            case Cmd::ADD_SFORZATO                  : return "add-sforzato"                  ; break;
            case Cmd::TOGGLE_FEEDBACK               : return "toggle-feedback"               ; break;
            case Cmd::MOVE_DOWN                     : return "move-down"                     ; break;
            case Cmd::LOOP                          : return "loop"                          ; break;
            case Cmd::SELECT_BEGIN_SCORE            : return "select-begin-score"            ; break;
            case Cmd::STRETCH_MORE                  : return "stretch-more"                  ; break;
            case Cmd::NOTE_INPUT_RHYTHM             : return "note-input-rhythm"             ; break;
            case Cmd::APPEND_HBOX                   : return "append-hbox"                   ; break;
            case Cmd::COUNTIN                       : return "countin"                       ; break;
            case Cmd::ADVANCE_32                    : return "advance-32"                    ; break;
            case Cmd::PREV_MEASURE_TEXT             : return "prev-measure-TEXT"             ; break;
            case Cmd::ADD_SLUR                      : return "add-slur"                      ; break;
            case Cmd::SHOW_OMR                      : return "show-omr"                      ; break;
            case Cmd::EDIT_HARMONY                  : return "edit-harmony"                  ; break;
            case Cmd::OMR                           : return "omr"                           ; break;
            case Cmd::PREVIOUS_SCORE                : return "previous-score"                ; break;
            case Cmd::PAD_NOTE_128_TAB              : return "pad-note-128-TAB"              ; break;
            case Cmd::INTERVAL3                     : return "interval3"                     ; break;
            case Cmd::NOTE_INPUT_REPITCH            : return "note-input-repitch"            ; break;
            case Cmd::LAYER                         : return "layer"                         ; break;
            case Cmd::NOTE_E                        : return "note-e"                        ; break;
            case Cmd::FRET_14                       : return "fret-14"                       ; break;
            case Cmd::FILE_SAVE_A_COPY              : return "file-save-a-copy"              ; break;
            case Cmd::PAD_NOTE_INCREASE             : return "pad-note-increase"             ; break;
            case Cmd::TIE                           : return "tie"                           ; break;
            case Cmd::TOGGLE_SCRIPT_RECORDER        : return "toggle-script-recorder"        ; break;
            case Cmd::SAVE_STYLE                    : return "save-style"                    ; break;
            case Cmd::UNSET_VISIBLE                 : return "unset-visible"                 ; break;
            case Cmd::PAN                           : return "pan"                           ; break;
            case Cmd::CONFIG_RASTER                 : return "config-raster"                 ; break;
            case Cmd::BEAM_MID                      : return "beam-mid"                      ; break;
            case Cmd::TOGGLE_MIDIIMPORTPANEL        : return "toggle-midiimportpanel"        ; break;
            case Cmd::APPEND_MEASURE                : return "append-measure"                ; break;
            case Cmd::NEXT_CHORD                    : return "next-chord"                    ; break;
            case Cmd::FILE_NEW                      : return "file-new"                      ; break;
            case Cmd::SYSTEM_TEXT                   : return "system-text"                   ; break;
            case Cmd::CUT                           : return "cut"                           ; break;
            case Cmd::ADD_8VA                       : return "add-8va"                       ; break;
            case Cmd::GET_LOCATION                  : return "get-location"                  ; break;
            case Cmd::MIDI_ON                       : return "midi-on"                       ; break;
            case Cmd::FRET_1                        : return "fret-1"                        ; break;
            case Cmd::QML_RELOAD_SOURCE             : return "qml-reload-source"             ; break;
            case Cmd::MOVE_UP                       : return "move-up"                       ; break;
            case Cmd::SELECT_STAFF_ABOVE            : return "select-staff-above"            ; break;
            case Cmd::LAST_ELEMENT                  : return "last-element"                  ; break;
            case Cmd::TOGGLE_MIXER                  : return "toggle-mixer"                  ; break;
            case Cmd::SELECT_ALL                    : return "select-all"                    ; break;
            case Cmd::BACKSPACE                     : return "backspace"                     ; break;
            case Cmd::PAD_NOTE_DECREASE             : return "pad-note-decrease"             ; break;
            case Cmd::ADD_TENUTO                    : return "add-tenuto"                    ; break;
            case Cmd::NOTE_INPUT                    : return "note-input"                    ; break;
            case Cmd::BEAM32                        : return "beam32"                        ; break;
            case Cmd::PLAY_PREV_CHORD               : return "play-prev-chord"               ; break;
            case Cmd::ADD_HAIRPIN                   : return "add-hairpin"                   ; break;
            case Cmd::PAD_DOT3                      : return "pad-dot3"                      ; break;
            case Cmd::ADD_MARCATO                   : return "add-marcato"                   ; break;
            case Cmd::SELECT_STAFF_BELOW            : return "select-staff-below"            ; break;
            case Cmd::PAD_NOTE_INCREASE_TAB         : return "pad-note-increase-TAB"         ; break;
            case Cmd::INSERT_G                      : return "insert-g"                      ; break;
            case Cmd::TOGGLE_AUTOPLACE              : return "toggle-autoplace"              ; break;
            case Cmd::PASTE_DOUBLE                  : return "paste-double"                  ; break;
            case Cmd::REDO                          : return "redo"                          ; break;
            case Cmd::REWIND                        : return "rewind"                        ; break;
            case Cmd::ADD_BRACKETS                  : return "add-brackets"                  ; break;
            case Cmd::REST_8                        : return "rest-8"                        ; break;
            case Cmd::INTERVAL_8                    : return "interval-8"                    ; break;
            case Cmd::FILE_PART_EXPORT              : return "file-part-export"              ; break;
            case Cmd::CHORD_TEXT                    : return "chord-text"                    ; break;
            case Cmd::UNROLL_REPEATS                : return "unroll-repeats"                ; break;
            case Cmd::POET_TEXT                     : return "poet-text"                     ; break;
            case Cmd::FRET_2                        : return "fret-2"                        ; break;
            case Cmd::TOGGLE_PALETTE                : return "toggle-palette"                ; break;
            case Cmd::SCR_PREV                      : return "scr-prev"                      ; break;
            case Cmd::PITCH_DOWN_OCTAVE             : return "pitch-down-octave"             ; break;
            case Cmd::SWAP                          : return "swap"                          ; break;
            case Cmd::PASTE_HALF                    : return "paste-half"                    ; break;
            case Cmd::FRET_4                        : return "fret-4"                        ; break;
            case Cmd::INSERT_C                      : return "insert-c"                      ; break;
            case Cmd::REST_TAB                      : return "rest-TAB"                      ; break;
            case Cmd::SEXTUPLET                     : return "sextuplet"                     ; break;
            case Cmd::PLUGIN_CREATOR                : return "plugin-creator"                ; break;
            case Cmd::CHORD_G                       : return "chord-g"                       ; break;
            case Cmd::SEEK_END                      : return "seek-end"                      ; break;
            case Cmd::FRET_7                        : return "fret-7"                        ; break;
            case Cmd::TRANSPOSE                     : return "transpose"                     ; break;
            case Cmd::QUIT                          : return "quit"                          ; break;
            case Cmd::PAD_NOTE_4                    : return "pad-note-4"                    ; break;
            case Cmd::SELECT_SECTION                : return "select-section"                ; break;
            case Cmd::NOTE_LONGA                    : return "note-longa"                    ; break;
            case Cmd::EXPLODE                       : return "explode"                       ; break;
            case Cmd::SEEK_BEGIN                    : return "seek-begin"                    ; break;
            case Cmd::FILE_SAVE_SELECTION           : return "file-save-selection"           ; break;
            case Cmd::ZOOMIN                        : return "zoomin"                        ; break;
            case Cmd::TOGGLE_VISIBLE                : return "toggle-visible"                ; break;
            case Cmd::ADVANCE_64                    : return "advance-64"                    ; break;
            case Cmd::SUBTITLE_TEXT                 : return "subtitle-text"                 ; break;
            case Cmd::PAD_NOTE_32_TAB               : return "pad-note-32-TAB"               ; break;
            case Cmd::APPEND_TEXTFRAME              : return "append-textframe"              ; break;
            case Cmd::APPEND_MEASURES               : return "append-measures"               ; break;
            case Cmd::RESET_STRETCH                 : return "reset-stretch"                 ; break;
            case Cmd::TOGGLE_TRANSPORT              : return "toggle-transport"              ; break;
            case Cmd::INTERVAL_7                    : return "interval-7"                    ; break;
            case Cmd::TOGGLE_STATUSBAR              : return "toggle-statusbar"              ; break;
            case Cmd::CHORD_TIE                     : return "chord-tie"                     ; break;
            case Cmd::ACCIACCATURA                  : return "acciaccatura"                  ; break;
            case Cmd::DEC_DURATION_DOTTED           : return "dec-duration-dotted"           ; break;
            case Cmd::FRET_13                       : return "fret-13"                       ; break;
            case Cmd::SHARP                         : return "sharp"                         ; break;
            case Cmd::REHEARSALMARK_TEXT            : return "rehearsalmark-text"            ; break;
            case Cmd::VOICE_X14                     : return "voice-x14"                     ; break;
            case Cmd::ROMAN_NUMERAL_TEXT            : return "roman-numeral-text"            ; break;
            case Cmd::ALBUM                         : return "album"                         ; break;
            case Cmd::INTERVAL_5                    : return "interval-5"                    ; break;
            case Cmd::MIRROR_NOTE                   : return "mirror-note"                   ; break;
            case Cmd::NOTE_F                        : return "note-f"                        ; break;
            case Cmd::APPLY_CURRENT_PALETTE_ELEMENT : return "apply-current-palette-element" ; break;
            case Cmd::SHOW_PAGEBORDERS              : return "show-pageborders"              ; break;
            case Cmd::LEAVE_FEEDBACK                : return "leave-feedback"                ; break;
            case Cmd::PAD_NOTE_DECREASE_TAB         : return "pad-note-decrease-TAB"         ; break;
            case Cmd::FRET_3                        : return "fret-3"                        ; break;
            case Cmd::INTERVAL1                     : return "interval1"                     ; break;
            case Cmd::CHORD_F                       : return "chord-f"                       ; break;
            case Cmd::LOAD_STYLE                    : return "load-style"                    ; break;
            case Cmd::PAD_NOTE_8_TAB                : return "pad-note-8-TAB"                ; break;
            case Cmd::MEDIA                         : return "media"                         ; break;
            case Cmd::NOTE_INPUT_TIMEWISE           : return "note-input-timewise"           ; break;
            case Cmd::DELETE                        : return "delete"                        ; break;
            case Cmd::REALTIME_ADVANCE              : return "realtime-advance"              ; break;
            case Cmd::ADD_TRILL                     : return "add-trill"                     ; break;
            case Cmd::FRET_8                        : return "fret-8"                        ; break;
            case Cmd::INSERT_MEASURE                : return "insert-measure"                ; break;
            case Cmd::DOUBLE_DURATION               : return "double-duration"               ; break;
            case Cmd::APPOGGIATURA                  : return "appoggiatura"                  ; break;
            case Cmd::PLAY_PREV_MEASURE             : return "play-prev-measure"             ; break;
            case Cmd::SELECT_NEXT_MEASURE           : return "select-next-measure"           ; break;
            case Cmd::FOLLOW                        : return "follow"                        ; break;
            case Cmd::JOIN_MEASURES                 : return "join-measures"                 ; break;
            case Cmd::FRET_12                       : return "fret-12"                       ; break;
            case Cmd::SELECT_PREV_CHORD             : return "select-prev-chord"             ; break;
            case Cmd::PREV_ELEMENT                  : return "prev-element"                  ; break;
            case Cmd::INSERT_FRETFRAME              : return "insert-fretframe"              ; break;
            case Cmd::NONUPLET                      : return "nonuplet"                      ; break;
            case Cmd::NO_VERTICAL_STRETCH           : return "no-vertical-stretch"           ; break;
            case Cmd::GRACE32AFTER                  : return "grace32after"                  ; break;
            case Cmd::FINGERING_TEXT                : return "fingering-text"                ; break;
            case Cmd::FILE_OPEN                     : return "file-open"                     ; break;
            case Cmd::SELECT_NEXT_CHORD             : return "select-next-chord"             ; break;
            case Cmd::PAD_DOTDOT                    : return "pad-dotdot"                    ; break;
            case Cmd::PRINT                         : return "print"                         ; break;
            case Cmd::SHOW_SKYLINES                 : return "show-skylines"                 ; break;
            case Cmd::PREV_MEASURE                  : return "prev-measure"                  ; break;
            case Cmd::INTERVAL_2                    : return "interval-2"                    ; break;
            case Cmd::CLEF_BASS                     : return "clef-bass"                     ; break;
            case Cmd::FBEAM2                        : return "fbeam2"                        ; break;
            case Cmd::SHOW_UNPRINTABLE              : return "show-unprintable"              ; break;
            case Cmd::SYSTEM_BREAK                  : return "system-break"                  ; break;
            case Cmd::CHORD_B                       : return "chord-b"                       ; break;
            case Cmd::PAGE_TOP                      : return "page-top"                      ; break;
            case Cmd::INSERT_HBOX                   : return "insert-hbox"                   ; break;
            case Cmd::TOGGLE_NOTEINPUT              : return "toggle-noteinput"              ; break;
            case Cmd::PLAY_NEXT_CHORD               : return "play-next-chord"               ; break;
            case Cmd::OCTUPLET                      : return "octuplet"                      ; break;
            case Cmd::REST_2                        : return "rest-2"                        ; break;
            case Cmd::INTERVAL_6                    : return "interval-6"                    ; break;
            case Cmd::TUPLET_DIALOG                 : return "tuplet-dialog"                 ; break;
            case Cmd::VOICE_X13                     : return "voice-x13"                     ; break;
            case Cmd::STARTCENTER                   : return "startcenter"                   ; break;
            case Cmd::RE_LAYOUT                     : return "Re-layout"                     ; break;
            case Cmd::ADVANCE_16                    : return "advance-16"                    ; break;
            case Cmd::INSERT_E                      : return "insert-e"                      ; break;
            case Cmd::SELECT_PREV_MEASURE           : return "select-prev-measure"           ; break;
            case Cmd::PAD_NOTE_2_TAB                : return "pad-note-2-TAB"                ; break;
            case Cmd::AUTO_BEAM                     : return "auto-beam"                     ; break;
            case Cmd::INTERVAL_4                    : return "interval-4"                    ; break;
            case Cmd::NEXT_MEASURE_TEXT             : return "next-measure-TEXT"             ; break;
            case Cmd::SHOW_INVISIBLE                : return "show-invisible"                ; break;
            case Cmd::INTERVAL8                     : return "interval8"                     ; break;
            case Cmd::RESET_TOURS                   : return "reset-tours"                   ; break;
            case Cmd::PAGE_NEXT                     : return "page-next"                     ; break;
            case Cmd::NEXT_SEGMENT_ELEMENT          : return "next-segment-element"          ; break;
            case Cmd::PREV_SEGMENT_ELEMENT          : return "prev-segment-element"          ; break;
            case Cmd::FULL_MEASURE_REST             : return "full-measure-rest"             ; break;
            case Cmd::PASTE_SPECIAL                 : return "paste-special"                 ; break;
            case Cmd::LOOP_OUT                      : return "loop-out"                      ; break;
            case Cmd::PITCH_DOWN_DIATONIC           : return "pitch-down-diatonic"           ; break;
            case Cmd::INC_DURATION_DOTTED           : return "inc-duration-dotted"           ; break;
            case Cmd::MOVE_RIGHT                    : return "move-right"                    ; break;
            case Cmd::FILE_SAVE                     : return "file-save"                     ; break;
            case Cmd::DUPLET                        : return "duplet"                        ; break;
            case Cmd::PAGE_SETTINGS                 : return "page-settings"                 ; break;
            case Cmd::FILE_SAVE_ONLINE              : return "file-save-online"              ; break;
            case Cmd::ADVANCE_BREVE                 : return "advance-breve"                 ; break;
            case Cmd::REPEAT                        : return "repeat"                        ; break;
            case Cmd::NEXT_ELEMENT                  : return "next-element"                  ; break;
            case Cmd::EXPRESSION_TEXT               : return "expression-text"               ; break;
            case Cmd::TOGGLE_MMREST                 : return "toggle-mmrest"                 ; break;
            case Cmd::ZOOM100                       : return "zoom100"                       ; break;
            case Cmd::SELECT_SIMILAR_RANGE          : return "select-similar-range"          ; break;
            case Cmd::PAD_REST                      : return "pad-rest"                      ; break;
            case Cmd::SELECT_END_SCORE              : return "select-end-score"              ; break;
            case Cmd::CHORD_D                       : return "chord-d"                       ; break;
            case Cmd::FRET_9                        : return "fret-9"                        ; break;
            case Cmd::REST_4                        : return "rest-4"                        ; break;
            case Cmd::RESET                         : return "reset"                         ; break;
            case Cmd::FLAT2                         : return "flat2"                         ; break;
            case Cmd::FBEAM1                        : return "fbeam1"                        ; break;
            case Cmd::ESCAPE                        : return "escape"                        ; break;
            case Cmd::SLASH_FILL                    : return "slash-fill"                    ; break;
            case Cmd::REST                          : return "rest"                          ; break;
            case Cmd::CHORD_E                       : return "chord-e"                       ; break;
            case Cmd::PART_TEXT                     : return "part-text"                     ; break;
            case Cmd::INTERVAL9                     : return "interval9"                     ; break;
            case Cmd::RESET_BEAMMODE                : return "reset-beammode"                ; break;
            case Cmd::ADVANCE_LONGA                 : return "advance-longa"                 ; break;
            case Cmd::PITCH_UP                      : return "pitch-up"                      ; break;
            case Cmd::TRANSPOSE_DOWN                : return "transpose-down"                ; break;
            case Cmd::MOVE_LEFT                     : return "move-left"                     ; break;
            case Cmd::PAD_NOTE_2                    : return "pad-note-2"                    ; break;
            case Cmd::SELECT_SIMILAR_STAFF          : return "select-similar-staff"          ; break;
            case Cmd::REPORT_BUG                    : return "report-bug"                    ; break;
            case Cmd::ADD_NOTELINE                  : return "add-noteline"                  ; break;
            case Cmd::TITLE_TEXT                    : return "title-text"                    ; break;
            case Cmd::SPLIT_MEASURE                 : return "split-measure"                 ; break;
            case Cmd::EDIT_ELEMENT                  : return "edit-element"                  ; break;
            case Cmd::PLUGIN_MANAGER                : return "plugin-manager"                ; break;
            case Cmd::TOGGLE_TIMELINE               : return "toggle-timeline"               ; break;
            case Cmd::PAD_NOTE_1                    : return "pad-note-1"                    ; break;
            case Cmd::NEXT_BEAT_TEXT                : return "next-beat-TEXT"                ; break;
            case Cmd::INSERT_TEXTFRAME              : return "insert-textframe"              ; break;
            case Cmd::VOICE_X34                     : return "voice-x34"                     ; break;
            case Cmd::PAD_DOT4                      : return "pad-dot4"                      ; break;
            case Cmd::SHOW_BOUNDING_RECT            : return "show-bounding-rect"            ; break;
            case Cmd::INTERVAL4                     : return "interval4"                     ; break;
            case Cmd::NOTE_C                        : return "note-c"                        ; break;
            case Cmd::TRIPLET                       : return "triplet"                       ; break;
            case Cmd::PAD_NOTE_64                   : return "pad-note-64"                   ; break;
            case Cmd::NOTE_INPUT_STEPTIME           : return "note-input-steptime"           ; break;
            case Cmd::NOTE_INPUT_REALTIME_MANUAL    : return "note-input-realtime-manual"    ; break;
            case Cmd::PLAY_NEXT_MEASURE             : return "play-next-measure"             ; break;
            case Cmd::CLEF_VIOLIN                   : return "clef-violin"                   ; break;
            case Cmd::PAD_NOTE_16_TAB               : return "pad-note-16-TAB"               ; break;
            case Cmd::RESET_GROUPINGS               : return "reset-groupings"               ; break;
            case Cmd::PITCH_UP_DIATONIC             : return "pitch-up-diatonic"             ; break;
            case Cmd::CREATE_NEW_WORKSPACE          : return "create-new-workspace"          ; break;
            case Cmd::NAT                           : return "nat"                           ; break;
            case Cmd::VOICE_1                       : return "voice-1"                       ; break;
            case Cmd::FILE_CLOSE                    : return "file-close"                    ; break;
            case Cmd::TRANSPOSE_UP                  : return "transpose-up"                  ; break;
            case Cmd::PAD_NOTE_64_TAB               : return "pad-note-64-TAB"               ; break;
            case Cmd::COPY                          : return "copy"                          ; break;
            case Cmd::RELAYOUT                      : return "relayout"                      ; break;
            case Cmd::INTERVAL_9                    : return "interval-9"                    ; break;
            case Cmd::INSTRUMENT_CHANGE_TEXT        : return "instrument-change-text"        ; break;
            case Cmd::GRACE32                       : return "grace32"                       ; break;
            case Cmd::PREV_CHORD                    : return "prev-chord"                    ; break;
            case Cmd::VRASTER                       : return "vraster"                       ; break;
            case Cmd::INTERVAL5                     : return "interval5"                     ; break;
            case Cmd::UP_CHORD                      : return "up-chord"                      ; break;
            case Cmd::SELECT_BEGIN_LINE             : return "select-begin-line"             ; break;
            case Cmd::GRACE16                       : return "grace16"                       ; break;
            case Cmd::ADD_8VB                       : return "add-8vb"                       ; break;
            case Cmd::INSTRUMENTS                   : return "instruments"                   ; break;
            case Cmd::GRACE16AFTER                  : return "grace16after"                  ; break;
            case Cmd::DEL_EMPTY_MEASURES            : return "del-empty-measures"            ; break;
            case Cmd::VOICE_X12                     : return "voice-x12"                     ; break;
            case Cmd::FIND                          : return "find"                          ; break;
            case Cmd::UNDO                          : return "undo"                          ; break;
            case Cmd::PARTS                         : return "parts"                         ; break;
            case Cmd::PREV_BEAT_TEXT                : return "prev-beat-TEXT"                ; break;
            case Cmd::REST_1                        : return "rest-1"                        ; break;
            case Cmd::NEXT_MEASURE                  : return "next-measure"                  ; break;
            case Cmd::STRING_BELOW                  : return "string-below"                  ; break;
            case Cmd::NOTE_B                        : return "note-b"                        ; break;
            case Cmd::PREV_TRACK                    : return "prev-track"                    ; break;
            case Cmd::TIME_SIGNATURES               : return "time-signatures"               ; break;
            case Cmd::RESET_STYLE                   : return "reset-style"                   ; break;
            case Cmd::SHOW_CORRUPTED_MEASURES       : return "show-corrupted-measures"       ; break;
            case Cmd::PITCH_UP_OCTAVE               : return "pitch-up-octave"               ; break;
            case Cmd::SHOW_SYSTEM_BOUNDING_RECT     : return "show-system-bounding-rect"     ; break;
            case Cmd::FRET_5                        : return "fret-5"                        ; break;
            case Cmd::PAD_NOTE_4_TAB                : return "pad-note-4-TAB"                ; break;
            case Cmd::ZOOMOUT                       : return "zoomout"                       ; break;
            case Cmd::FRAME_TEXT                    : return "frame-text"                    ; break;
            case Cmd::SHARP2                        : return "sharp2"                        ; break;
            case Cmd::PAGE_PREV                     : return "page-prev"                     ; break;
            case Cmd::SEPTUPLET                     : return "septuplet"                     ; break;
            case Cmd::INSPECTOR                     : return "inspector"                     ; break;
            case Cmd::FRET_11                       : return "fret-11"                       ; break;
            case Cmd::NOTE_BREVE_TAB                : return "note-breve-TAB"                ; break;
            case Cmd::REPEAT_CMD                    : return "repeat-cmd"                    ; break;
            case Cmd::ADVANCE_4                     : return "advance-4"                     ; break;
            case Cmd::VOICE_X23                     : return "voice-x23"                     ; break;
            case Cmd::PLAY                          : return "play"                          ; break;
            case Cmd::TEXT_B                        : return "text-b"                        ; break;
            case Cmd::SELECT_DIALOG                 : return "select-dialog"                 ; break;
            case Cmd::NOTE_BREVE                    : return "note-breve"                    ; break;
            case Cmd::TOGGLE_IMAGECAPTURE           : return "toggle-imagecapture"           ; break;
            case Cmd::STICKING_TEXT                 : return "sticking-text"                 ; break;
            case Cmd::TOGGLE_NAVIGATOR              : return "toggle-navigator"              ; break;
            case Cmd::PAD_NOTE_32                   : return "pad-note-32"                   ; break;
            case Cmd::FULLSCREEN                    : return "fullscreen"                    ; break;
            case Cmd::INTERVAL_3                    : return "interval-3"                    ; break;
            case Cmd::SHOW_SEGMENT_SHAPES           : return "show-segment-shapes"           ; break;
            case Cmd::PAD_NOTE_1_TAB                : return "pad-note-1-TAB"                ; break;
            case Cmd::SYNTH_CONTROL                 : return "synth-control"                 ; break;
            case Cmd::COMPOSER_TEXT                 : return "composer-text"                 ; break;
            case Cmd::NOTE_INPUT_REALTIME_AUTO      : return "note-input-realtime-auto"      ; break;
            case Cmd::NOTE_LONGA_TAB                : return "note-longa-TAB"                ; break;
            case Cmd::INTERVAL6                     : return "interval6"                     ; break;
            case Cmd::TEXT_WORD_RIGHT               : return "text-word-right"               ; break;
            case Cmd::EDIT_STYLE                    : return "edit-style"                    ; break;
            case Cmd::PAD_NOTE_16                   : return "pad-note-16"                   ; break;
            case Cmd::FILE_SAVE_AS                  : return "file-save-as"                  ; break;
            case Cmd::GRACE8AFTER                   : return "grace8after"                   ; break;
            case Cmd::SHOW_KEYS                     : return "show-keys"                     ; break;
            case Cmd::TEXT_WORD_LEFT                : return "text-word-left"                ; break;
            case Cmd::PICTURE                       : return "picture"                       ; break;
            case Cmd::TOGGLE_PLAYPANEL              : return "toggle-playpanel"              ; break;
            case Cmd::INTERVAL7                     : return "interval7"                     ; break;
            case Cmd::PALETTE_SEARCH                : return "palette-search"                ; break;
            case Cmd::AUTOPLACE_ENABLED             : return "autoplace-enabled"             ; break;
            case Cmd::CONCERT_PITCH                 : return "concert-pitch"                 ; break;
            case Cmd::SHOW_FRAMES                   : return "show-frames"                   ; break;
            case Cmd::VOICE_3                       : return "voice-3"                       ; break;
            case Cmd::ADVANCE_8                     : return "advance-8"                     ; break;
            case Cmd::PITCH_SPELL                   : return "pitch-spell"                   ; break;
            case Cmd::PITCH_DOWN                    : return "pitch-down"                    ; break;
            case Cmd::NASHVILLE_NUMBER_TEXT         : return "nashville-number-text"         ; break;
            case Cmd::NEXT_LYRIC                    : return "next-lyric"                    ; break;
            case Cmd::LOCK                          : return "lock"                          ; break;
            case Cmd::CHORD_A                       : return "chord-a"                       ; break;
            case Cmd::RE_LAYOUT                     : return "Re-Layout"                     ; break;
            case Cmd::TOGGLE_HIDE_EMPTY             : return "toggle-hide-empty"             ; break;
            case Cmd::TEXT_I                        : return "text-i"                        ; break;
            case Cmd::STAFF_TEXT                    : return "staff-text"                    ; break;
            case Cmd::STRETCH_LESS                  : return "stretch-less"                  ; break;
            case Cmd::INSERT_A                      : return "insert-a"                      ; break;
            case Cmd::ADD_UP_BOW                    : return "add-up-bow"                    ; break;
            case Cmd::VOICE_2                       : return "voice-2"                       ; break;
            case Cmd::ADD_DOWN_BOW                  : return "add-down-bow"                  ; break;
            case Cmd::FILE_EXPORT                   : return "file-export"                   ; break;
            case Cmd::TOGGLE_SCORECMP_TOOL          : return "toggle-scorecmp-tool"          ; break;
            case Cmd::INSERT_VBOX                   : return "insert-vbox"                   ; break;
            case Cmd::MARK_IRREGULAR                : return "mark-irregular"                ; break;
            case Cmd::ADVANCE_2                     : return "advance-2"                     ; break;
            case Cmd::BEAM64                        : return "beam64"                        ; break;
            case Cmd::INSERT_D                      : return "insert-d"                      ; break;
            case Cmd::METRONOME                     : return "metronome"                     ; break;
            case Cmd::FIRST_ELEMENT                 : return "first-element"                 ; break;
            case Cmd::CHORD_C                       : return "chord-c"                       ; break;
            case Cmd::MAG                           : return "mag"                           ; break;
            case Cmd::REVISION                      : return "revision"                      ; break;
            case Cmd::PASTE                         : return "paste"                         ; break;
            case Cmd::QUADRUPLET                    : return "quadruplet"                    ; break;
            case Cmd::SELECT_END_LINE               : return "select-end-line"               ; break;
            case Cmd::KEY_SIGNATURES                : return "key-signatures"                ; break;
            case Cmd::SELECT_SIMILAR                : return "select-similar"                ; break;
            case Cmd::ADVANCE_1                     : return "advance-1"                     ; break;
            case Cmd::HALF_DURATION                 : return "half-duration"                 ; break;
            case Cmd::RESOURCE_MANAGER              : return "resource-manager"              ; break;
            case Cmd::COPY_LYRICS_TO_CLIPBOARD      : return "copy-lyrics-to-clipboard"      ; break;
            case Cmd::GRACE4                        : return "grace4"                        ; break;
            case Cmd::STRING_ABOVE                  : return "string-above"                  ; break;
            case Cmd::PAD_REST_TAB                  : return "pad-rest-TAB"                  ; break;
            case Cmd::APPEND_VBOX                   : return "append-vbox"                   ; break;
            case Cmd::SYMBOLS                       : return "symbols"                       ; break;
            case Cmd::ADD_PARENTHESES               : return "add-parentheses"               ; break;
            case Cmd::NOTE_G                        : return "note-g"                        ; break;
            case Cmd::INSERT_F                      : return "insert-f"                      ; break;
            case Cmd::LYRICS                        : return "lyrics"                        ; break;
            case Cmd::FILE_IMPORT_PDF               : return "file-import-pdf"               ; break;
            case Cmd::SLASH_RHYTHM                  : return "slash-rhythm"                  ; break;
            case Cmd::MASTERPALETTE                 : return "masterpalette"                 ; break;
            case Cmd::NEXT_TRACK                    : return "next-track"                    ; break;
            case Cmd::REPEAT_SEL                    : return "repeat-sel"                    ; break;
            case Cmd::TEMPO                         : return "tempo"                         ; break;
            case Cmd::ENH_CURRENT                   : return "enh-current"                   ; break;
            case Cmd::PAD_NOTE_8                    : return "pad-note-8"                    ; break;
            case Cmd::VIEWMODE                      : return "viewmode"                      ; break;
            case Cmd::NEXT_SCORE                    : return "next-score"                    ; break;

            }
      }
} // Ms

#endif // __CMDLIST_H__
