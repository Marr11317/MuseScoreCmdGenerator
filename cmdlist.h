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

      PREV_SEGMENT_ELEMENT,
      CHORD_D,
      LOCK,
      SWAP,
      PREV_BEAT_TEXT,
      TEXT_WORD_LEFT,
      PAD_DOT4,
      APPEND_MEASURE,
      PAD_NOTE_INCREASE,
      INSERT_G,
      NEXT_BEAT_TEXT,
      TIE,
      NASHVILLE_NUMBER_TEXT,
      NOTE_INPUT_REALTIME_MANUAL,
      TRANSPOSE,
      REPEAT,
      NEXT_LYRIC,
      INSERT_D,
      TOGGLE_PLAYPANEL,
      BEAM64,
      INTERVAL5,
      NO_VERTICAL_STRETCH,
      FRET_0,
      ADVANCE_32,
      BOTTOM_CHORD,
      AUTO_BEAM,
      APPEND_VBOX,
      INTERVAL_3,
      SEEK_END,
      SLASH_FILL,
      STAFF_TEXT,
      SAVE_STYLE,
      KEY_SIGNATURES,
      COUNTIN,
      CHORD_A,
      NO_HORIZONTAL_STRETCH,
      INTERVAL_7,
      ADD_TRILL,
      INTERVAL6,
      PRINT,
      OCTUPLET,
      ADVANCE_1,
      TRANSPOSE_UP,
      TOGGLE_CONCERTPITCH,
      NOTE_INPUT_REALTIME_AUTO,
      NOTE_D,
      FRET_7,
      INSERT_HBOX,
      FILE_EXPORT,
      PAD_NOTE_16,
      INSERT_MEASURE,
      FBEAM2,
      NOTE_F,
      APPOGGIATURA,
      ADD_BRACKETS,
      PITCH_UP_DIATONIC,
      TOGGLE_PALETTE,
      FILE_SAVE_SELECTION,
      HALF_DURATION,
      TOGGLE_WORKSPACES_TOOLBAR,
      TOGGLE_AUTOPLACE,
      FILE_NEW,
      MIDI_ON,
      ADD_STACCATO,
      SECTION_BREAK,
      REWIND,
      LOOP_IN,
      REST_1,
      FRET_8,
      TEMPO,
      MOVE_UP,
      FLIP,
      MASTERPALETTE,
      QUIT,
      ADD_HAIRPIN,
      SHOW_SKYLINES,
      TOGGLE_TIMELINE,
      FOTOMODE,
      STICKING_TEXT,
      CHORD_TIE,
      TOGGLE_NOTEINPUT,
      SHOW_SYSTEM_BOUNDING_RECT,
      FRET_4,
      NOTE_LONGA_TAB,
      FILE_SAVE,
      RESET_BEAMMODE,
      SPLIT_V,
      SELECT_PREV_CHORD,
      MAG,
      NOTE_BREVE,
      TOGGLE_PIANO,
      NEXT_MEASURE_TEXT,
      SELECT_ALL,
      REPEAT_SEL,
      ZOOMIN,
      SHOW_BOUNDING_RECT,
      PASTE_DOUBLE,
      COMPOSER_TEXT,
      RELAYOUT,
      REST_4,
      DELETE,
      SUBTITLE_TEXT,
      CONFIG_RASTER,
      PAD_NOTE_4,
      PAGE_END,
      FILE_SAVE_ONLINE,
      TOGGLE_MIXER,
      PAD_DOT3,
      NO_BEAM,
      ALBUM,
      REST_2,
      PLUGIN_MANAGER,
      NOTE_INPUT_REPITCH,
      SYSTEM_BREAK,
      TUPLET_DIALOG,
      PAD_NOTE_64_TAB,
      ENH_CURRENT,
      PLUGIN_CREATOR,
      SEXTUPLET,
      INTERVAL4,
      SELECT_BEGIN_LINE,
      PAGE_PREV,
      PAD_NOTE_8,
      ADD_PARENTHESES,
      SEEK_BEGIN,
      TOGGLE_STATUSBAR,
      REST_TAB,
      INSTRUMENT_CHANGE_TEXT,
      PLAY_NEXT_MEASURE,
      NEXT_MEASURE,
      ADVANCE_64,
      SHOW_PAGEBORDERS,
      VOICE_2,
      REST_8,
      MIRROR_NOTE,
      PART_TEXT,
      MEDIA,
      NOTE_BREVE_TAB,
      DEBUGGER,
      INTERVAL_6,
      DUPLET,
      CHORD_TEXT,
      AUTOPLACE_ENABLED,
      NOTE_G,
      SELECT_SIMILAR,
      NOTE_A,
      HRASTER,
      PAD_NOTE_4_TAB,
      DOUBLE_DURATION,
      STRING_BELOW,
      SCR_NEXT,
      SHOW_FRAMES,
      SEPTUPLET,
      APPEND_TEXTFRAME,
      PAGE_NEXT,
      CUT,
      PASTE,
      NOTE_INPUT_TIMEWISE,
      FRET_9,
      ADVANCE_LONGA,
      INTERVAL_8,
      TIME_DELETE,
      MARK_IRREGULAR,
      COPY,
      CLEF_BASS,
      INSERT_MEASURES,
      DEC_DURATION_DOTTED,
      IMPLODE,
      TRIPLET,
      GET_LOCATION,
      SHARP2,
      PAD_NOTE_16_TAB,
      PASTE_HALF,
      APPEND_MEASURES,
      TOGGLE_FILEOPERATIONS,
      POET_TEXT,
      GRACE32AFTER,
      PAD_NOTE_1,
      STRETCH_,
      LAST_ELEMENT,
      SELECT_NEXT_MEASURE,
      UNROLL_REPEATS,
      LOOP,
      TOGGLE_MIDIIMPORTPANEL,
      PAD_NOTE_128_TAB,
      NOTE_E,
      PITCH_UP,
      REALTIME_ADVANCE,
      PICTURE,
      REPORT_BUG,
      MOVE_DOWN,
      FRET_6,
      REDO,
      NEXT_TRACK,
      REVISION,
      INTERVAL_4,
      FBEAM1,
      GRACE8AFTER,
      PAD_NOTE_2_TAB,
      SPLIT_H,
      STRING_ABOVE,
      RESET_TOURS,
      MOVE_RIGHT,
      NEXT_SCORE,
      BACKSPACE,
      SELECT_STAFF_ABOVE,
      TOGGLE_SCRIPT_RECORDER,
      ADVANCE_2,
      PAD_DOT,
      ROMAN_NUMERAL_TEXT,
      VOICE_1,
      PITCH_SPELL,
      INTERVAL_2,
      INSERT_TEXTFRAME,
      ADVANCE_4,
      TOGGLE_TRANSPORT,
      NOTE_B,
      PREV_TRACK,
      TOP_CHORD,
      SHOW_UNPRINTABLE,
      RESET_GROUPINGS,
      TOGGLE_VISIBLE,
      FILE_PART_EXPORT,
      UP_CHORD,
      FILE_IMPORT_PDF,
      JOIN_MEASURES,
      SHOW_CORRUPTED_MEASURES,
      ADD_DOWN_BOW,
      FLAT2,
      SLASH_RHYTHM,
      PITCH_UP_OCTAVE,
      BEAM_START,
      FRET_2,
      SYSTEM_TEXT,
      ENH_BOTH,
      FOLLOW,
      BEAM_MID,
      VOICE_X23,
      PLAY_PREV_MEASURE,
      INSERT_B,
      NOTE_INPUT,
      ADD_SLUR,
      TITLE_TEXT,
      INC_DURATION_DOTTED,
      TOGGLE_INSERT_MODE,
      TOGGLE_NAVIGATOR,
      GRACE16AFTER,
      SYNTH_CONTROL,
      FLAT,
      RE_LAYOUT,
      REPEAT_CMD,
      COPY_LYRICS_TO_CLIPBOARD,
      PAD_NOTE_32,
      PAD_REST_TAB,
      ADD_NOTELINE,
      FRET_11,
      RESET,
      SCR_PREV,
      RE_LAYOUT,
      INSERT_C,
      DOWN_CHORD,
      PAD_NOTE_DECREASE_TAB,
      FINGERING_TEXT,
      PALETTE_SEARCH,
      RESET_STYLE,
      FILE_SAVE_AS,
      FRAME_TEXT,
      NONUPLET,
      SELECT_SIMILAR_STAFF,
      INSERT_F,
      EDIT_HARMONY,
      METRONOME,
      SELECT_END_LINE,
      FRET_14,
      EXPLODE,
      VOICE_X13,
      FRET_10,
      NEXT_CHORD,
      FIRST_ELEMENT,
      MOVE_LEFT,
      FIND,
      GRACE4,
      VOICE_X12,
      LAYER,
      EXPRESSION_TEXT,
      RESOURCE_MANAGER,
      ZOOM100,
      VOICE_X24,
      SELECT_STAFF_BELOW,
      VRASTER,
      GRACE32,
      NOTE_LONGA,
      SELECT_NEXT_CHORD,
      FRET_5,
      INTERVAL3,
      CHORD_F,
      TRANSPOSE_DOWN,
      STARTCENTER,
      PREV_LYRIC,
      PAGE_TOP,
      EDIT_ELEMENT,
      TEXT_I,
      PAGE_SETTINGS,
      UNSET_VISIBLE,
      SHOW_KEYS,
      VOICE_X14,
      FRET_12,
      REHEARSALMARK_TEXT,
      ADD_TENUTO,
      PITCH_DOWN,
      EDIT_TOOLBARS,
      RESET_STRETCH,
      INSPECTOR,
      INSERT_VBOX,
      ACCIACCATURA,
      NAT,
      CHORD_G,
      FRET_1,
      ESCAPE,
      LEAVE_FEEDBACK,
      TEXT_WORD_RIGHT,
      APPLY_CURRENT_PALETTE_ELEMENT,
      PAD_NOTE_64,
      PAN,
      LOAD_STYLE,
      SET_VISIBLE,
      UNDO,
      PAD_NOTE_1_TAB,
      PAD_NOTE_128,
      SELECT_SIMILAR_RANGE,
      INTERVAL2,
      PAD_NOTE_DECREASE,
      TIME_SIGNATURES,
      TOGGLE_SCORECMP_TOOL,
      EDIT_STYLE,
      TOGGLE_SELECTION_WINDOW,
      FULL_MEASURE_REST,
      PREV_CHORD,
      CHORD_B,
      PAD_DOTDOT,
      FILE_CLOSE,
      VOICE_4,
      ADD_MARCATO,
      QML_RELOAD_SOURCE,
      FRET_3,
      OMR,
      PASTE_SPECIAL,
      ZOOMOUT,
      CONCERT_PITCH,
      SELECT_BEGIN_SCORE,
      ADVANCE_BREVE,
      HELP,
      PREVIOUS_SCORE,
      CHORD_E,
      PAD_NOTE_8_TAB,
      SELECT_END_SCORE,
      INTERVAL7,
      +,
      PAGE_BREAK,
      INSERT_A,
      FILE_OPEN,
      LOOP_OUT,
      PREV_MEASURE_TEXT,
      PAD_NOTE_32_TAB,
      VOICE_X34,
      INTERVAL_9,
      INTERVAL9,
      TOGGLE_HIDE_EMPTY,
      PLAY_PREV_CHORD,
      REST,
      SHOW_INVISIBLE,
      APPEND_HBOX,
      INSTRUMENTS,
      PLAY_NEXT_CHORD,
      FILE_SAVE_A_COPY,
      GRACE16,
      PREV_ELEMENT,
      NOTE_C,
      PREV_MEASURE,
      ADD_UP_BOW,
      INTERVAL8,
      EDIT_INFO,
      QUADRUPLET,
      SELECT_SECTION,
      NEXT_SEGMENT_ELEMENT,
      VIEWMODE,
      ADD_8VA,
      PAD_NOTE_INCREASE_TAB,
      PAD_NOTE_2,
      SHARP,
      CHORD_C,
      SPLIT_MEASURE,
      NOTE_INPUT_STEPTIME,
      NEXT_ELEMENT,
      TEXT_B,
      VOICE_3,
      ADVANCE_16,
      ADD_HAIRPIN_REVERSE,
      RESEQUENCE_REHEARSAL_MARKS,
      BEAM32,
      CLEF_VIOLIN,
      INTERVAL1,
      ADD_SFORZATO,
      DEL_EMPTY_MEASURES,
      TOGGLE_FEEDBACK,
      ADVANCE_8,
      TOGGLE_MMREST,
      PITCH_DOWN_DIATONIC,
      SHOW_OMR,
      ADD_8VB,
      SHOW_TOURS,
      PAD_REST,
      PARTS,
      INSERT_E,
      INSERT_FRETFRAME,
      SELECT_DIALOG,
      FULLSCREEN,
      SELECT_PREV_MEASURE,
      TEXT_U,
      ADD_REMOVE_BREAKS,
      FRET_13,
      PITCH_DOWN_OCTAVE,
      CREATE_NEW_WORKSPACE,
      INTERVAL_5,
      STRETCH+,
      SYMBOLS,
      SHOW_SEGMENT_SHAPES,
      TOGGLE_IMAGECAPTURE,
      NOTE_INPUT_RHYTHM,
      LYRICS,
      FIGURED_BASS,
      QUINTUPLET,
      PLAY
      };

static QString cmdToString(Cmd cmd) {
      switch (cmd) {
            case Cmd::Invalid: return "Invalid"; break;
            case Cmd::PREV_SEGMENT_ELEMENT: return "prev-segment-element"; break;
            case Cmd::CHORD_D: return "chord-d"; break;
            case Cmd::LOCK: return "lock"; break;
            case Cmd::SWAP: return "swap"; break;
            case Cmd::PREV_BEAT_TEXT: return "prev-beat-TEXT"; break;
            case Cmd::TEXT_WORD_LEFT: return "text-word-left"; break;
            case Cmd::PAD_DOT4: return "pad-dot4"; break;
            case Cmd::APPEND_MEASURE: return "append-measure"; break;
            case Cmd::PAD_NOTE_INCREASE: return "pad-note-increase"; break;
            case Cmd::INSERT_G: return "insert-g"; break;
            case Cmd::NEXT_BEAT_TEXT: return "next-beat-TEXT"; break;
            case Cmd::TIE: return "tie"; break;
            case Cmd::NASHVILLE_NUMBER_TEXT: return "nashville-number-text"; break;
            case Cmd::NOTE_INPUT_REALTIME_MANUAL: return "note-input-realtime-manual"; break;
            case Cmd::TRANSPOSE: return "transpose"; break;
            case Cmd::REPEAT: return "repeat"; break;
            case Cmd::NEXT_LYRIC: return "next-lyric"; break;
            case Cmd::INSERT_D: return "insert-d"; break;
            case Cmd::TOGGLE_PLAYPANEL: return "toggle-playpanel"; break;
            case Cmd::BEAM64: return "beam64"; break;
            case Cmd::INTERVAL5: return "interval5"; break;
            case Cmd::NO_VERTICAL_STRETCH: return "no-vertical-stretch"; break;
            case Cmd::FRET_0: return "fret-0"; break;
            case Cmd::ADVANCE_32: return "advance-32"; break;
            case Cmd::BOTTOM_CHORD: return "bottom-chord"; break;
            case Cmd::AUTO_BEAM: return "auto-beam"; break;
            case Cmd::APPEND_VBOX: return "append-vbox"; break;
            case Cmd::INTERVAL_3: return "interval-3"; break;
            case Cmd::SEEK_END: return "seek-end"; break;
            case Cmd::SLASH_FILL: return "slash-fill"; break;
            case Cmd::STAFF_TEXT: return "staff-text"; break;
            case Cmd::SAVE_STYLE: return "save-style"; break;
            case Cmd::KEY_SIGNATURES: return "key-signatures"; break;
            case Cmd::COUNTIN: return "countin"; break;
            case Cmd::CHORD_A: return "chord-a"; break;
            case Cmd::NO_HORIZONTAL_STRETCH: return "no-horizontal-stretch"; break;
            case Cmd::INTERVAL_7: return "interval-7"; break;
            case Cmd::ADD_TRILL: return "add-trill"; break;
            case Cmd::INTERVAL6: return "interval6"; break;
            case Cmd::PRINT: return "print"; break;
            case Cmd::OCTUPLET: return "octuplet"; break;
            case Cmd::ADVANCE_1: return "advance-1"; break;
            case Cmd::TRANSPOSE_UP: return "transpose-up"; break;
            case Cmd::TOGGLE_CONCERTPITCH: return "toggle-concertpitch"; break;
            case Cmd::NOTE_INPUT_REALTIME_AUTO: return "note-input-realtime-auto"; break;
            case Cmd::NOTE_D: return "note-d"; break;
            case Cmd::FRET_7: return "fret-7"; break;
            case Cmd::INSERT_HBOX: return "insert-hbox"; break;
            case Cmd::FILE_EXPORT: return "file-export"; break;
            case Cmd::PAD_NOTE_16: return "pad-note-16"; break;
            case Cmd::INSERT_MEASURE: return "insert-measure"; break;
            case Cmd::FBEAM2: return "fbeam2"; break;
            case Cmd::NOTE_F: return "note-f"; break;
            case Cmd::APPOGGIATURA: return "appoggiatura"; break;
            case Cmd::ADD_BRACKETS: return "add-brackets"; break;
            case Cmd::PITCH_UP_DIATONIC: return "pitch-up-diatonic"; break;
            case Cmd::TOGGLE_PALETTE: return "toggle-palette"; break;
            case Cmd::FILE_SAVE_SELECTION: return "file-save-selection"; break;
            case Cmd::HALF_DURATION: return "half-duration"; break;
            case Cmd::TOGGLE_WORKSPACES_TOOLBAR: return "toggle-workspaces-toolbar"; break;
            case Cmd::TOGGLE_AUTOPLACE: return "toggle-autoplace"; break;
            case Cmd::FILE_NEW: return "file-new"; break;
            case Cmd::MIDI_ON: return "midi-on"; break;
            case Cmd::ADD_STACCATO: return "add-staccato"; break;
            case Cmd::SECTION_BREAK: return "section-break"; break;
            case Cmd::REWIND: return "rewind"; break;
            case Cmd::LOOP_IN: return "loop-in"; break;
            case Cmd::REST_1: return "rest-1"; break;
            case Cmd::FRET_8: return "fret-8"; break;
            case Cmd::TEMPO: return "tempo"; break;
            case Cmd::MOVE_UP: return "move-up"; break;
            case Cmd::FLIP: return "flip"; break;
            case Cmd::MASTERPALETTE: return "masterpalette"; break;
            case Cmd::QUIT: return "quit"; break;
            case Cmd::ADD_HAIRPIN: return "add-hairpin"; break;
            case Cmd::SHOW_SKYLINES: return "show-skylines"; break;
            case Cmd::TOGGLE_TIMELINE: return "toggle-timeline"; break;
            case Cmd::FOTOMODE: return "fotomode"; break;
            case Cmd::STICKING_TEXT: return "sticking-text"; break;
            case Cmd::CHORD_TIE: return "chord-tie"; break;
            case Cmd::TOGGLE_NOTEINPUT: return "toggle-noteinput"; break;
            case Cmd::SHOW_SYSTEM_BOUNDING_RECT: return "show-system-bounding-rect"; break;
            case Cmd::FRET_4: return "fret-4"; break;
            case Cmd::NOTE_LONGA_TAB: return "note-longa-TAB"; break;
            case Cmd::FILE_SAVE: return "file-save"; break;
            case Cmd::RESET_BEAMMODE: return "reset-beammode"; break;
            case Cmd::SPLIT_V: return "split-v"; break;
            case Cmd::SELECT_PREV_CHORD: return "select-prev-chord"; break;
            case Cmd::MAG: return "mag"; break;
            case Cmd::NOTE_BREVE: return "note-breve"; break;
            case Cmd::TOGGLE_PIANO: return "toggle-piano"; break;
            case Cmd::NEXT_MEASURE_TEXT: return "next-measure-TEXT"; break;
            case Cmd::SELECT_ALL: return "select-all"; break;
            case Cmd::REPEAT_SEL: return "repeat-sel"; break;
            case Cmd::ZOOMIN: return "zoomin"; break;
            case Cmd::SHOW_BOUNDING_RECT: return "show-bounding-rect"; break;
            case Cmd::PASTE_DOUBLE: return "paste-double"; break;
            case Cmd::COMPOSER_TEXT: return "composer-text"; break;
            case Cmd::RELAYOUT: return "relayout"; break;
            case Cmd::REST_4: return "rest-4"; break;
            case Cmd::DELETE: return "delete"; break;
            case Cmd::SUBTITLE_TEXT: return "subtitle-text"; break;
            case Cmd::CONFIG_RASTER: return "config-raster"; break;
            case Cmd::PAD_NOTE_4: return "pad-note-4"; break;
            case Cmd::PAGE_END: return "page-end"; break;
            case Cmd::FILE_SAVE_ONLINE: return "file-save-online"; break;
            case Cmd::TOGGLE_MIXER: return "toggle-mixer"; break;
            case Cmd::PAD_DOT3: return "pad-dot3"; break;
            case Cmd::NO_BEAM: return "no-beam"; break;
            case Cmd::ALBUM: return "album"; break;
            case Cmd::REST_2: return "rest-2"; break;
            case Cmd::PLUGIN_MANAGER: return "plugin-manager"; break;
            case Cmd::NOTE_INPUT_REPITCH: return "note-input-repitch"; break;
            case Cmd::SYSTEM_BREAK: return "system-break"; break;
            case Cmd::TUPLET_DIALOG: return "tuplet-dialog"; break;
            case Cmd::PAD_NOTE_64_TAB: return "pad-note-64-TAB"; break;
            case Cmd::ENH_CURRENT: return "enh-current"; break;
            case Cmd::PLUGIN_CREATOR: return "plugin-creator"; break;
            case Cmd::SEXTUPLET: return "sextuplet"; break;
            case Cmd::INTERVAL4: return "interval4"; break;
            case Cmd::SELECT_BEGIN_LINE: return "select-begin-line"; break;
            case Cmd::PAGE_PREV: return "page-prev"; break;
            case Cmd::PAD_NOTE_8: return "pad-note-8"; break;
            case Cmd::ADD_PARENTHESES: return "add-parentheses"; break;
            case Cmd::SEEK_BEGIN: return "seek-begin"; break;
            case Cmd::TOGGLE_STATUSBAR: return "toggle-statusbar"; break;
            case Cmd::REST_TAB: return "rest-TAB"; break;
            case Cmd::INSTRUMENT_CHANGE_TEXT: return "instrument-change-text"; break;
            case Cmd::PLAY_NEXT_MEASURE: return "play-next-measure"; break;
            case Cmd::NEXT_MEASURE: return "next-measure"; break;
            case Cmd::ADVANCE_64: return "advance-64"; break;
            case Cmd::SHOW_PAGEBORDERS: return "show-pageborders"; break;
            case Cmd::VOICE_2: return "voice-2"; break;
            case Cmd::REST_8: return "rest-8"; break;
            case Cmd::MIRROR_NOTE: return "mirror-note"; break;
            case Cmd::PART_TEXT: return "part-text"; break;
            case Cmd::MEDIA: return "media"; break;
            case Cmd::NOTE_BREVE_TAB: return "note-breve-TAB"; break;
            case Cmd::DEBUGGER: return "debugger"; break;
            case Cmd::INTERVAL_6: return "interval-6"; break;
            case Cmd::DUPLET: return "duplet"; break;
            case Cmd::CHORD_TEXT: return "chord-text"; break;
            case Cmd::AUTOPLACE_ENABLED: return "autoplace-enabled"; break;
            case Cmd::NOTE_G: return "note-g"; break;
            case Cmd::SELECT_SIMILAR: return "select-similar"; break;
            case Cmd::NOTE_A: return "note-a"; break;
            case Cmd::HRASTER: return "hraster"; break;
            case Cmd::PAD_NOTE_4_TAB: return "pad-note-4-TAB"; break;
            case Cmd::DOUBLE_DURATION: return "double-duration"; break;
            case Cmd::STRING_BELOW: return "string-below"; break;
            case Cmd::SCR_NEXT: return "scr-next"; break;
            case Cmd::SHOW_FRAMES: return "show-frames"; break;
            case Cmd::SEPTUPLET: return "septuplet"; break;
            case Cmd::APPEND_TEXTFRAME: return "append-textframe"; break;
            case Cmd::PAGE_NEXT: return "page-next"; break;
            case Cmd::CUT: return "cut"; break;
            case Cmd::PASTE: return "paste"; break;
            case Cmd::NOTE_INPUT_TIMEWISE: return "note-input-timewise"; break;
            case Cmd::FRET_9: return "fret-9"; break;
            case Cmd::ADVANCE_LONGA: return "advance-longa"; break;
            case Cmd::INTERVAL_8: return "interval-8"; break;
            case Cmd::TIME_DELETE: return "time-delete"; break;
            case Cmd::MARK_IRREGULAR: return "mark-irregular"; break;
            case Cmd::COPY: return "copy"; break;
            case Cmd::CLEF_BASS: return "clef-bass"; break;
            case Cmd::INSERT_MEASURES: return "insert-measures"; break;
            case Cmd::DEC_DURATION_DOTTED: return "dec-duration-dotted"; break;
            case Cmd::IMPLODE: return "implode"; break;
            case Cmd::TRIPLET: return "triplet"; break;
            case Cmd::GET_LOCATION: return "get-location"; break;
            case Cmd::SHARP2: return "sharp2"; break;
            case Cmd::PAD_NOTE_16_TAB: return "pad-note-16-TAB"; break;
            case Cmd::PASTE_HALF: return "paste-half"; break;
            case Cmd::APPEND_MEASURES: return "append-measures"; break;
            case Cmd::TOGGLE_FILEOPERATIONS: return "toggle-fileoperations"; break;
            case Cmd::POET_TEXT: return "poet-text"; break;
            case Cmd::GRACE32AFTER: return "grace32after"; break;
            case Cmd::PAD_NOTE_1: return "pad-note-1"; break;
            case Cmd::STRETCH_: return "stretch-"; break;
            case Cmd::LAST_ELEMENT: return "last-element"; break;
            case Cmd::SELECT_NEXT_MEASURE: return "select-next-measure"; break;
            case Cmd::UNROLL_REPEATS: return "unroll-repeats"; break;
            case Cmd::LOOP: return "loop"; break;
            case Cmd::TOGGLE_MIDIIMPORTPANEL: return "toggle-midiimportpanel"; break;
            case Cmd::PAD_NOTE_128_TAB: return "pad-note-128-TAB"; break;
            case Cmd::NOTE_E: return "note-e"; break;
            case Cmd::PITCH_UP: return "pitch-up"; break;
            case Cmd::REALTIME_ADVANCE: return "realtime-advance"; break;
            case Cmd::PICTURE: return "picture"; break;
            case Cmd::REPORT_BUG: return "report-bug"; break;
            case Cmd::MOVE_DOWN: return "move-down"; break;
            case Cmd::FRET_6: return "fret-6"; break;
            case Cmd::REDO: return "redo"; break;
            case Cmd::NEXT_TRACK: return "next-track"; break;
            case Cmd::REVISION: return "revision"; break;
            case Cmd::INTERVAL_4: return "interval-4"; break;
            case Cmd::FBEAM1: return "fbeam1"; break;
            case Cmd::GRACE8AFTER: return "grace8after"; break;
            case Cmd::PAD_NOTE_2_TAB: return "pad-note-2-TAB"; break;
            case Cmd::SPLIT_H: return "split-h"; break;
            case Cmd::STRING_ABOVE: return "string-above"; break;
            case Cmd::RESET_TOURS: return "reset-tours"; break;
            case Cmd::MOVE_RIGHT: return "move-right"; break;
            case Cmd::NEXT_SCORE: return "next-score"; break;
            case Cmd::BACKSPACE: return "backspace"; break;
            case Cmd::SELECT_STAFF_ABOVE: return "select-staff-above"; break;
            case Cmd::TOGGLE_SCRIPT_RECORDER: return "toggle-script-recorder"; break;
            case Cmd::ADVANCE_2: return "advance-2"; break;
            case Cmd::PAD_DOT: return "pad-dot"; break;
            case Cmd::ROMAN_NUMERAL_TEXT: return "roman-numeral-text"; break;
            case Cmd::VOICE_1: return "voice-1"; break;
            case Cmd::PITCH_SPELL: return "pitch-spell"; break;
            case Cmd::INTERVAL_2: return "interval-2"; break;
            case Cmd::INSERT_TEXTFRAME: return "insert-textframe"; break;
            case Cmd::ADVANCE_4: return "advance-4"; break;
            case Cmd::TOGGLE_TRANSPORT: return "toggle-transport"; break;
            case Cmd::NOTE_B: return "note-b"; break;
            case Cmd::PREV_TRACK: return "prev-track"; break;
            case Cmd::TOP_CHORD: return "top-chord"; break;
            case Cmd::SHOW_UNPRINTABLE: return "show-unprintable"; break;
            case Cmd::RESET_GROUPINGS: return "reset-groupings"; break;
            case Cmd::TOGGLE_VISIBLE: return "toggle-visible"; break;
            case Cmd::FILE_PART_EXPORT: return "file-part-export"; break;
            case Cmd::UP_CHORD: return "up-chord"; break;
            case Cmd::FILE_IMPORT_PDF: return "file-import-pdf"; break;
            case Cmd::JOIN_MEASURES: return "join-measures"; break;
            case Cmd::SHOW_CORRUPTED_MEASURES: return "show-corrupted-measures"; break;
            case Cmd::ADD_DOWN_BOW: return "add-down-bow"; break;
            case Cmd::FLAT2: return "flat2"; break;
            case Cmd::SLASH_RHYTHM: return "slash-rhythm"; break;
            case Cmd::PITCH_UP_OCTAVE: return "pitch-up-octave"; break;
            case Cmd::BEAM_START: return "beam-start"; break;
            case Cmd::FRET_2: return "fret-2"; break;
            case Cmd::SYSTEM_TEXT: return "system-text"; break;
            case Cmd::ENH_BOTH: return "enh-both"; break;
            case Cmd::FOLLOW: return "follow"; break;
            case Cmd::BEAM_MID: return "beam-mid"; break;
            case Cmd::VOICE_X23: return "voice-x23"; break;
            case Cmd::PLAY_PREV_MEASURE: return "play-prev-measure"; break;
            case Cmd::INSERT_B: return "insert-b"; break;
            case Cmd::NOTE_INPUT: return "note-input"; break;
            case Cmd::ADD_SLUR: return "add-slur"; break;
            case Cmd::TITLE_TEXT: return "title-text"; break;
            case Cmd::INC_DURATION_DOTTED: return "inc-duration-dotted"; break;
            case Cmd::TOGGLE_INSERT_MODE: return "toggle-insert-mode"; break;
            case Cmd::TOGGLE_NAVIGATOR: return "toggle-navigator"; break;
            case Cmd::GRACE16AFTER: return "grace16after"; break;
            case Cmd::SYNTH_CONTROL: return "synth-control"; break;
            case Cmd::FLAT: return "flat"; break;
            case Cmd::RE_LAYOUT: return "Re-Layout"; break;
            case Cmd::REPEAT_CMD: return "repeat-cmd"; break;
            case Cmd::COPY_LYRICS_TO_CLIPBOARD: return "copy-lyrics-to-clipboard"; break;
            case Cmd::PAD_NOTE_32: return "pad-note-32"; break;
            case Cmd::PAD_REST_TAB: return "pad-rest-TAB"; break;
            case Cmd::ADD_NOTELINE: return "add-noteline"; break;
            case Cmd::FRET_11: return "fret-11"; break;
            case Cmd::RESET: return "reset"; break;
            case Cmd::SCR_PREV: return "scr-prev"; break;
            case Cmd::RE_LAYOUT: return "Re-layout"; break;
            case Cmd::INSERT_C: return "insert-c"; break;
            case Cmd::DOWN_CHORD: return "down-chord"; break;
            case Cmd::PAD_NOTE_DECREASE_TAB: return "pad-note-decrease-TAB"; break;
            case Cmd::FINGERING_TEXT: return "fingering-text"; break;
            case Cmd::PALETTE_SEARCH: return "palette-search"; break;
            case Cmd::RESET_STYLE: return "reset-style"; break;
            case Cmd::FILE_SAVE_AS: return "file-save-as"; break;
            case Cmd::FRAME_TEXT: return "frame-text"; break;
            case Cmd::NONUPLET: return "nonuplet"; break;
            case Cmd::SELECT_SIMILAR_STAFF: return "select-similar-staff"; break;
            case Cmd::INSERT_F: return "insert-f"; break;
            case Cmd::EDIT_HARMONY: return "edit-harmony"; break;
            case Cmd::METRONOME: return "metronome"; break;
            case Cmd::SELECT_END_LINE: return "select-end-line"; break;
            case Cmd::FRET_14: return "fret-14"; break;
            case Cmd::EXPLODE: return "explode"; break;
            case Cmd::VOICE_X13: return "voice-x13"; break;
            case Cmd::FRET_10: return "fret-10"; break;
            case Cmd::NEXT_CHORD: return "next-chord"; break;
            case Cmd::FIRST_ELEMENT: return "first-element"; break;
            case Cmd::MOVE_LEFT: return "move-left"; break;
            case Cmd::FIND: return "find"; break;
            case Cmd::GRACE4: return "grace4"; break;
            case Cmd::VOICE_X12: return "voice-x12"; break;
            case Cmd::LAYER: return "layer"; break;
            case Cmd::EXPRESSION_TEXT: return "expression-text"; break;
            case Cmd::RESOURCE_MANAGER: return "resource-manager"; break;
            case Cmd::ZOOM100: return "zoom100"; break;
            case Cmd::VOICE_X24: return "voice-x24"; break;
            case Cmd::SELECT_STAFF_BELOW: return "select-staff-below"; break;
            case Cmd::VRASTER: return "vraster"; break;
            case Cmd::GRACE32: return "grace32"; break;
            case Cmd::NOTE_LONGA: return "note-longa"; break;
            case Cmd::SELECT_NEXT_CHORD: return "select-next-chord"; break;
            case Cmd::FRET_5: return "fret-5"; break;
            case Cmd::INTERVAL3: return "interval3"; break;
            case Cmd::CHORD_F: return "chord-f"; break;
            case Cmd::TRANSPOSE_DOWN: return "transpose-down"; break;
            case Cmd::STARTCENTER: return "startcenter"; break;
            case Cmd::PREV_LYRIC: return "prev-lyric"; break;
            case Cmd::PAGE_TOP: return "page-top"; break;
            case Cmd::EDIT_ELEMENT: return "edit-element"; break;
            case Cmd::TEXT_I: return "text-i"; break;
            case Cmd::PAGE_SETTINGS: return "page-settings"; break;
            case Cmd::UNSET_VISIBLE: return "unset-visible"; break;
            case Cmd::SHOW_KEYS: return "show-keys"; break;
            case Cmd::VOICE_X14: return "voice-x14"; break;
            case Cmd::FRET_12: return "fret-12"; break;
            case Cmd::REHEARSALMARK_TEXT: return "rehearsalmark-text"; break;
            case Cmd::ADD_TENUTO: return "add-tenuto"; break;
            case Cmd::PITCH_DOWN: return "pitch-down"; break;
            case Cmd::EDIT_TOOLBARS: return "edit-toolbars"; break;
            case Cmd::RESET_STRETCH: return "reset-stretch"; break;
            case Cmd::INSPECTOR: return "inspector"; break;
            case Cmd::INSERT_VBOX: return "insert-vbox"; break;
            case Cmd::ACCIACCATURA: return "acciaccatura"; break;
            case Cmd::NAT: return "nat"; break;
            case Cmd::CHORD_G: return "chord-g"; break;
            case Cmd::FRET_1: return "fret-1"; break;
            case Cmd::ESCAPE: return "escape"; break;
            case Cmd::LEAVE_FEEDBACK: return "leave-feedback"; break;
            case Cmd::TEXT_WORD_RIGHT: return "text-word-right"; break;
            case Cmd::APPLY_CURRENT_PALETTE_ELEMENT: return "apply-current-palette-element"; break;
            case Cmd::PAD_NOTE_64: return "pad-note-64"; break;
            case Cmd::PAN: return "pan"; break;
            case Cmd::LOAD_STYLE: return "load-style"; break;
            case Cmd::SET_VISIBLE: return "set-visible"; break;
            case Cmd::UNDO: return "undo"; break;
            case Cmd::PAD_NOTE_1_TAB: return "pad-note-1-TAB"; break;
            case Cmd::PAD_NOTE_128: return "pad-note-128"; break;
            case Cmd::SELECT_SIMILAR_RANGE: return "select-similar-range"; break;
            case Cmd::INTERVAL2: return "interval2"; break;
            case Cmd::PAD_NOTE_DECREASE: return "pad-note-decrease"; break;
            case Cmd::TIME_SIGNATURES: return "time-signatures"; break;
            case Cmd::TOGGLE_SCORECMP_TOOL: return "toggle-scorecmp-tool"; break;
            case Cmd::EDIT_STYLE: return "edit-style"; break;
            case Cmd::TOGGLE_SELECTION_WINDOW: return "toggle-selection-window"; break;
            case Cmd::FULL_MEASURE_REST: return "full-measure-rest"; break;
            case Cmd::PREV_CHORD: return "prev-chord"; break;
            case Cmd::CHORD_B: return "chord-b"; break;
            case Cmd::PAD_DOTDOT: return "pad-dotdot"; break;
            case Cmd::FILE_CLOSE: return "file-close"; break;
            case Cmd::VOICE_4: return "voice-4"; break;
            case Cmd::ADD_MARCATO: return "add-marcato"; break;
            case Cmd::QML_RELOAD_SOURCE: return "qml-reload-source"; break;
            case Cmd::FRET_3: return "fret-3"; break;
            case Cmd::OMR: return "omr"; break;
            case Cmd::PASTE_SPECIAL: return "paste-special"; break;
            case Cmd::ZOOMOUT: return "zoomout"; break;
            case Cmd::CONCERT_PITCH: return "concert-pitch"; break;
            case Cmd::SELECT_BEGIN_SCORE: return "select-begin-score"; break;
            case Cmd::ADVANCE_BREVE: return "advance-breve"; break;
            case Cmd::HELP: return "help"; break;
            case Cmd::PREVIOUS_SCORE: return "previous-score"; break;
            case Cmd::CHORD_E: return "chord-e"; break;
            case Cmd::PAD_NOTE_8_TAB: return "pad-note-8-TAB"; break;
            case Cmd::SELECT_END_SCORE: return "select-end-score"; break;
            case Cmd::INTERVAL7: return "interval7"; break;
            case Cmd::+: return "+"; break;
            case Cmd::PAGE_BREAK: return "page-break"; break;
            case Cmd::INSERT_A: return "insert-a"; break;
            case Cmd::FILE_OPEN: return "file-open"; break;
            case Cmd::LOOP_OUT: return "loop-out"; break;
            case Cmd::PREV_MEASURE_TEXT: return "prev-measure-TEXT"; break;
            case Cmd::PAD_NOTE_32_TAB: return "pad-note-32-TAB"; break;
            case Cmd::VOICE_X34: return "voice-x34"; break;
            case Cmd::INTERVAL_9: return "interval-9"; break;
            case Cmd::INTERVAL9: return "interval9"; break;
            case Cmd::TOGGLE_HIDE_EMPTY: return "toggle-hide-empty"; break;
            case Cmd::PLAY_PREV_CHORD: return "play-prev-chord"; break;
            case Cmd::REST: return "rest"; break;
            case Cmd::SHOW_INVISIBLE: return "show-invisible"; break;
            case Cmd::APPEND_HBOX: return "append-hbox"; break;
            case Cmd::INSTRUMENTS: return "instruments"; break;
            case Cmd::PLAY_NEXT_CHORD: return "play-next-chord"; break;
            case Cmd::FILE_SAVE_A_COPY: return "file-save-a-copy"; break;
            case Cmd::GRACE16: return "grace16"; break;
            case Cmd::PREV_ELEMENT: return "prev-element"; break;
            case Cmd::NOTE_C: return "note-c"; break;
            case Cmd::PREV_MEASURE: return "prev-measure"; break;
            case Cmd::ADD_UP_BOW: return "add-up-bow"; break;
            case Cmd::INTERVAL8: return "interval8"; break;
            case Cmd::EDIT_INFO: return "edit-info"; break;
            case Cmd::QUADRUPLET: return "quadruplet"; break;
            case Cmd::SELECT_SECTION: return "select-section"; break;
            case Cmd::NEXT_SEGMENT_ELEMENT: return "next-segment-element"; break;
            case Cmd::VIEWMODE: return "viewmode"; break;
            case Cmd::ADD_8VA: return "add-8va"; break;
            case Cmd::PAD_NOTE_INCREASE_TAB: return "pad-note-increase-TAB"; break;
            case Cmd::PAD_NOTE_2: return "pad-note-2"; break;
            case Cmd::SHARP: return "sharp"; break;
            case Cmd::CHORD_C: return "chord-c"; break;
            case Cmd::SPLIT_MEASURE: return "split-measure"; break;
            case Cmd::NOTE_INPUT_STEPTIME: return "note-input-steptime"; break;
            case Cmd::NEXT_ELEMENT: return "next-element"; break;
            case Cmd::TEXT_B: return "text-b"; break;
            case Cmd::VOICE_3: return "voice-3"; break;
            case Cmd::ADVANCE_16: return "advance-16"; break;
            case Cmd::ADD_HAIRPIN_REVERSE: return "add-hairpin-reverse"; break;
            case Cmd::RESEQUENCE_REHEARSAL_MARKS: return "resequence-rehearsal-marks"; break;
            case Cmd::BEAM32: return "beam32"; break;
            case Cmd::CLEF_VIOLIN: return "clef-violin"; break;
            case Cmd::INTERVAL1: return "interval1"; break;
            case Cmd::ADD_SFORZATO: return "add-sforzato"; break;
            case Cmd::DEL_EMPTY_MEASURES: return "del-empty-measures"; break;
            case Cmd::TOGGLE_FEEDBACK: return "toggle-feedback"; break;
            case Cmd::ADVANCE_8: return "advance-8"; break;
            case Cmd::TOGGLE_MMREST: return "toggle-mmrest"; break;
            case Cmd::PITCH_DOWN_DIATONIC: return "pitch-down-diatonic"; break;
            case Cmd::SHOW_OMR: return "show-omr"; break;
            case Cmd::ADD_8VB: return "add-8vb"; break;
            case Cmd::SHOW_TOURS: return "show-tours"; break;
            case Cmd::PAD_REST: return "pad-rest"; break;
            case Cmd::PARTS: return "parts"; break;
            case Cmd::INSERT_E: return "insert-e"; break;
            case Cmd::INSERT_FRETFRAME: return "insert-fretframe"; break;
            case Cmd::SELECT_DIALOG: return "select-dialog"; break;
            case Cmd::FULLSCREEN: return "fullscreen"; break;
            case Cmd::SELECT_PREV_MEASURE: return "select-prev-measure"; break;
            case Cmd::TEXT_U: return "text-u"; break;
            case Cmd::ADD_REMOVE_BREAKS: return "add-remove-breaks"; break;
            case Cmd::FRET_13: return "fret-13"; break;
            case Cmd::PITCH_DOWN_OCTAVE: return "pitch-down-octave"; break;
            case Cmd::CREATE_NEW_WORKSPACE: return "create-new-workspace"; break;
            case Cmd::INTERVAL_5: return "interval-5"; break;
            case Cmd::STRETCH+: return "stretch+"; break;
            case Cmd::SYMBOLS: return "symbols"; break;
            case Cmd::SHOW_SEGMENT_SHAPES: return "show-segment-shapes"; break;
            case Cmd::TOGGLE_IMAGECAPTURE: return "toggle-imagecapture"; break;
            case Cmd::NOTE_INPUT_RHYTHM: return "note-input-rhythm"; break;
            case Cmd::LYRICS: return "lyrics"; break;
            case Cmd::FIGURED_BASS: return "figured-bass"; break;
            case Cmd::QUINTUPLET: return "quintuplet"; break;
            case Cmd::PLAY: return "play"; break;

            }
      }
} // Ms

#endif // __CMDLIST_H__
