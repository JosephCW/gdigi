/*
 *  Copyright (c) 2009 Tomasz Moń <desowin@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>.
 */

#ifndef GDIGI_H
#define GDIGI_H

#include <glib.h>
#include <glib-object.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS

enum {
  WAH_TYPE_CRY = 132,
  WAH_TYPE_FULLRANGE = 133,
  WAH_TYPE_CLYDE = 134
};

#define WAH_POSITION_MIN_MAX 20

#define WAH_MIN 8195
#define WAH_MAX 8196

#define WAH_TYPE 128
#define WAH_ON_OFF 129
#define WAH_POSITION 3

#define WAH_LEVEL 133

enum {
  COMP_TYPE_DIGI = 195,
  COMP_TYPE_CS = 196,
  COMP_TYPE_DYNA = 197
};

#define COMP_TYPE 207
#define COMP_ON_OFF 193
#define COMP_POSITION 4

#define COMP_SUSTAIN 208
#define COMP_TONE 209
#define COMP_ATTACK 211
#define COMP_LEVEL 210
#define COMP_SENSITIVITY 213
#define COMP_OUTPUT 212

enum {
  PICKUP_TYPE_HB_SC = 66,
  PICKUP_TYPE_SC_HB = 65
};

#define PICKUP_TYPE 64
#define PICKUP_ON_OFF 65
#define PICKUP_POSITION 2

enum {
  DIST_TYPE_SCREAMER = 1280,
  DIST_TYPE_808 = 1292,
  DIST_TYPE_SPARKDRIVE = 1286,
  DIST_TYPE_GUYOD = 1285,
  DIST_TYPE_DOD250 = 1283,
  DIST_TYPE_REDLINE = 1297,
  DIST_TYPE_RODENT = 1281,
  DIST_TYPE_MX = 1291,
  DIST_TYPE_DS = 1282,
  DIST_TYPE_GRUNGE = 1287,
  DIST_TYPE_ZONE = 1289,
  DIST_TYPE_DEATH = 1294,
  DIST_TYPE_GONK = 1293,
  DIST_TYPE_8TAVIA = 1290,
  DIST_TYPE_FUZZLATOR = 1295,
  DIST_TYPE_CLASSIC_FUZZ = 1296,
  DIST_TYPE_FUZZY = 1288,
  DIST_TYPE_MP = 1284
};

#define DIST_TYPE 2432
#define DIST_ON_OFF 2433
#define DIST_POSITION 6

#define DIST_SCREAMER_DRIVE 2434
#define DIST_SCREAMER_TONE  2435
#define DIST_SCREAMER_LVL   2436

#define DIST_808_OVERDRIVE  2473
#define DIST_808_TONE       2474
#define DIST_808_LVL        2475

#define DIST_SPARKDRIVE_GAIN 2450
#define DIST_SPARKDRIVE_TONE 2451
#define DIST_SPARKDRIVE_CLEAN 2452
#define DIST_SPARKDRIVE_VOLUME 2453

#define DIST_GUYOD_DRIVE    2448
#define DIST_GUYOD_LVL      2449

#define DIST_DOD250_GAIN    2443
#define DIST_DOD250_LVL     2444

#define DIST_REDLINE_GAIN   2488
#define DIST_REDLINE_LOW    2489
#define DIST_REDLINE_HIGH   2490
#define DIST_REDLINE_LEVEL  2491

#define DIST_RODENT_DIST    2437
#define DIST_RODENT_FILTER  2438
#define DIST_RODENT_LVL     2439

#define DIST_MX_DIST        2468
#define DIST_MX_OUTPUT      2469
#define DIST_DS_GAIN        2440
#define DIST_DS_TONE        2441
#define DIST_DS_LVL         2442

#define DIST_GRUNGE_GRUNGE  2454
#define DIST_GRUNGE_FACE    2456
#define DIST_GRUNGE_LOUD    2457
#define DIST_GRUNGE_BUTT    2455

#define DIST_ZONE_GAIN      2460
#define DIST_ZONE_LOW       2463
#define DIST_ZONE_MID_LVL   2462
#define DIST_ZONE_MID_FREQ  2461
#define DIST_ZONE_HIGH      2464
#define DIST_ZONE_LEVEL     2465

#define DIST_DEATH_LOW      2477
#define DIST_DEATH_MID      2476
#define DIST_DEATH_HIGH     2479
#define DIST_DEATH_LVL      2478

#define DIST_GONK_GONK      2480
#define DIST_GONK_SMEAR     2471
#define DIST_GONK_SUCK      2470
#define DIST_GONK_HEAVE     2472

#define DIST_8TAVIA_DRIVE   2466
#define DIST_8TAVIA_VOLUME  2467

#define DIST_FUZZLATOR_FUZZ 2481
#define DIST_FUZZLATOR_TONE 2482
#define DIST_FUZZLATOR_LOOSETIGHT 2483
#define DIST_FUZZLATOR_VOLUME 2484

#define DIST_CLASSIC_FUZZ_FUZZ 2485
#define DIST_CLASSIC_FUZZ_TONE 2486
#define DIST_CLASSIC_FUZZ_VOLUME 2487

#define DIST_FUZZY_FUZZ     2458
#define DIST_FUZZY_VOLUME   2459

#define DIST_MP_SUSTAIN     2445
#define DIST_MP_TONE        2446
#define DIST_MP_VOLUME      2447

#define PRESET_POSITION 18
#define PRESET_LEVEL 2626

enum {
  AMP_TYPE_TWEED_CHAMP = 307,
  AMP_TYPE_TWEED_DELUXE = 308,
  AMP_TYPE_TWEED_BASSMAN = 309,
  AMP_TYPE_BROWN_BASSMAN = 310,
  AMP_TYPE_BLACKFACE_TWIN = 311,
  AMP_TYPE_BLACKFACE_DELUXE = 312,
  AMP_TYPE_PLEXI_JTM_45 = 313,
  AMP_TYPE_SUPER_LEAD_PLEXI = 314,
  AMP_TYPE_PLEXI_JUMP_PANEL = 315,
  AMP_TYPE_MASTER_VOLUME = 316,
  AMP_TYPE_JCM800 = 317,
  AMP_TYPE_JCM900 = 318,
  AMP_TYPE_JCM2000 = 319,
  AMP_TYPE_AC15 = 322,
  AMP_TYPE_AC30TB = 323,
  AMP_TYPE_HIWATT_100 = 324,
  AMP_TYPE_BOOGIE_MARK_II = 320,
  AMP_TYPE_BOOGIE_MARK_IV = 371,
  AMP_TYPE_DUAL_RECTIFIER = 321,
  AMP_TYPE_TRIPLE_RECTIFIER = 370,
  AMP_TYPE_LEGACY_VL100 = 327,
  AMP_TYPE_MATCHLESS_HC30 = 326,
  AMP_TYPE_SOLDANO_100 = 325,
  AMP_TYPE_SUPERGROUP = 381,
  AMP_TYPE_GA40 = 380,
  AMP_TYPE_OR120 = 372,
  AMP_TYPE_PV5150II = 373,
  AMP_TYPE_RG100 = 374,
  AMP_TYPE_JC120_JAZZ = 375,
  AMP_TYPE_SOLAR100 = 376,
  AMP_TYPE_SOLO = 331,
  AMP_TYPE_METAL = 332,
  AMP_TYPE_BRIGHT = 333,
  AMP_TYPE_CHUNK = 334,
  AMP_TYPE_CLEAN = 335,
  AMP_TYPE_HIGH_GAIN = 337,
  AMP_TYPE_BLUES = 338,
  AMP_TYPE_FUZZ = 339,
  AMP_TYPE_SPANK = 330,
  AMP_TYPE_GSP2101_CLEAN_TUBE = 328,
  AMP_TYPE_GSP2101_SAT_TUBE = 329,
  AMP_TYPE_CRUNCH = 336,
  AMP_TYPE_MONSTER = 377,
  AMP_TYPE_TWEEDFACE = 378,
  AMP_TYPE_BLACKBASS = 379,
  AMP_TYPE_STONER_ROCK = 368,
  AMP_TYPE_DARK_METAL = 369,
  AMP_TYPE_TRANSISTOR = 382,
  AMP_TYPE_BROWN_SOUND = 383,
  AMP_TYPE_MOSH = 384,
  AMP_TYPE_ACOUSTIC = 341,
  AMP_TYPE_JUMBO_ACOUSTIC = 340,
  AMP_TYPE_DIRECT = 306
};

enum {
  EQ_TYPE_BRIGHT = 1474,
  EQ_TYPE_MIDBOOST = 1472,
  EQ_TYPE_SCOOP = 1473,
  EQ_TYPE_WARM = 1475
};

#define AMP_TYPE 2496
#define AMP_ON_OFF 265
#define AMP_POSITION 8

#define AMP_GAIN 2497
#define AMP_LEVEL 2498
#define AMP_BASS 2507
#define AMP_MID 2508
#define AMP_TREBLE 2509

#define AMP_CAB_TYPE 2560
#define AMP_CAB_POSITION 9

/* valid AMP_CAB_TYPE values */
#define AMP_CAB_DIRECT 570
#define AMP_CAB_CHAMP 571
#define AMP_CAB_DELUXE 572
#define AMP_CAB_DELUXE_REVERB 573
#define AMP_CAB_BRITISH1_12 623
#define AMP_CAB_GA1_12 624
#define AMP_CAB_BLONDE2_12 577
#define AMP_CAB_TWIN 576
#define AMP_CAB_BRITISH2_12 613
#define AMP_CAB_JAZZ2_12 626
#define AMP_CAB_BASSMAN 579
#define AMP_CAB_BRITISH4_12 614
#define AMP_CAB_BRITISH_GREEN 616
#define AMP_CAB_FANE4_12 584
#define AMP_CAB_BOUTIQUE4_12 583
#define AMP_CAB_VINTAGE 622
#define AMP_CAB_RECTO4_12 625
#define AMP_CAB_DIGI_SOLO 609
#define AMP_CAB_DIGI_BRIGHT 611
#define AMP_CAB_DIGI_METAL 618
#define AMP_CAB_DIGI_ROCK 619
#define AMP_CAB_DIGI_ALT 620
#define AMP_CAB_DIGI_VNTG 621
#define AMP_CAB_DIGI_CHUNK 612
#define AMP_CAB_DIGI_SPANK2_12 608
#define AMP_CAB_DIGI_SPKR_COMP 585

#define EQ_TYPE 3202
#define EQ_ON_OFF 3212
#define EQ_POSITION 24

#define EQ_BASS 3203
#define EQ_MID 3204
#define EQ_MID_HZ 3206
#define EQ_TREBLE 3205
#define EQ_TREBLE_HZ 3211
#define EQ_LOW_LEVEL 3203
#define EQ_MID_LEVEL 3204
#define EQ_HIGH_LEVEL 3205
#define EQ_LOW_FREQ 3213
#define EQ_MID_FREQ 3214
#define EQ_HIGH_FREQ 3215
#define EQ_LOW_BANDWIDTH 3216
#define EQ_MID_BANDWIDTH 3217
#define EQ_HIGH_BANDWIDTH 3218

enum {
  NOISEGATE_GATE = 768,
  NOISEGATE_SWELL = 769
};

#define NOISEGATE_TYPE 704
#define NOISEGATE_ON_OFF 705
#define NOISEGATE_POSITION 12

/* available only in Gate mode */
#define NOISEGATE_GATE_TRESHOLD 710
/* available only in Swell mode */
#define NOISEGATE_SWELL_SENS    711
/* available in both Gate and Swell modes */
#define NOISEGATE_ATTACK        712
#define NOISEGATE_RELEASE       713
#define NOISEGATE_ATTN          714

enum {
  CHORUS_TYPE_CE = 0x37B,
  CHORUS_TYPE_TC = 0x37C,
  CHORUS_TYPE_DUAL = 0x379,
  CHORUS_TYPE_GLISTEN = 0x392,
  CHORUS_TYPE_MULTI = 0x37a,
  CHORUS_TYPE_FLANGER = 0x37d,
  CHORUS_TYPE_TRIGGERED_FLANGER = 0x37e,
  CHORUS_TYPE_MXR_FLANGER = 0x37f,
  CHORUS_TYPE_EH_FLANGER = 0x380,
  CHORUS_TYPE_AD_FLANGER = 0x393,
  CHORUS_TYPE_PHASER = 0x381,
  CHORUS_TYPE_TRIGGERED_PHASER = 0x382,
  CHORUS_TYPE_MX_PHASER = 0x383,
  CHORUS_TYPE_EH_PHASER = 0x384,
  CHORUS_TYPE_VIBRATO = 0x360,
  CHORUS_TYPE_ROTARY = 0x361,
  CHORUS_TYPE_VIBROPAN = 0x38f,
  CHORUS_TYPE_UNOVIBE = 0x390,
  CHORUS_TYPE_TREMOLO = 0x35e,
  CHORUS_TYPE_SCATTER_TREM = 0x394,
  CHORUS_TYPE_OPTO_TREMOLO = 0x388,
  CHORUS_TYPE_BIAS_TREMOLO = 0x389,
  CHORUS_TYPE_PANNER = 0x35f,
  CHORUS_TYPE_ENVELOPE = 0x38a,
  CHORUS_TYPE_FX25 = 0x38e,
  CHORUS_TYPE_AUTOYA = 0x38b,
  CHORUS_TYPE_YAYA = 0x38c,
  CHORUS_TYPE_SYNTH_TALK = 0x391,
  CHORUS_TYPE_STEP_FILTER = 0x38d,
  CHORUS_TYPE_SAMPLE_HOLD = 0x395,
  CHORUS_TYPE_WHAMMY = 0x540,
  CHORUS_TYPE_PITCH_SHIFT = 0x543,
  CHORUS_TYPE_DETUNE = 0x542,
  CHORUS_TYPE_IPS = 0x541,
  CHORUS_TYPE_OCTAVER = 0x385,
};

#define CHORUSFX_TYPE 768
#define CHORUSFX_ON_OFF 769
#define CHORUSFX_POSITION 14

#define CE_CHORUS_SPEED 837
#define CE_CHORUS_DEPTH 838

#define CHORUS_WIDTH 848
#define CHORUS_INTENSITY 849

#define DUAL_CHORUS_SPEED 837
#define DUAL_CHORUS_DEPTH 838
#define DUAL_CHORUS_LEVEL 836
#define DUAL_CHORUS_WAVE 840

#define MULTI_CHORUS_SPEED 837
#define MULTI_CHORUS_DEPTH 838
#define MULTI_CHORUS_WAVE  840
#define MULTI_CHORUS_LEVEL 836

#define FLANGER_SPEED 902
#define FLANGER_DEPTH 903
#define FLANGER_REGEN 904
#define FLANGER_LEVEL 901
#define FLANGER_WAVE 905

#define TRIG_FLANGER_SPEED 1030
#define TRIG_FLANGER_SENS 1031
#define TRIG_FLANGER_LFO_START 1028
#define TRIG_FLANGER_LEVEL 1032

#define MXR_FLANGER_SPEED 902
#define MXR_FLANGER_WIDTH 914
#define MXR_FLANGER_REGEN 904
#define MXR_FLANGER_MANUAL 917

#define EH_FLANGER_RATE 918
#define EH_FLANGER_RANGE 919
#define EH_FLANGER_COLOR 916

#define AD_FLANGER_ENHANCE 920
#define AD_FLANGER_HARMONICS 921

#define PHASER_SPEED 962
#define PHASER_DEPTH 963
#define PHASER_REGEN 966
#define PHASER_LEVEL 965
#define PHASER_WAVE 967

#define TRIG_PHASER_SPEED 1094
#define TRIG_PHASER_SENS 1095
#define TRIG_PHASER_LFO_START 1092
#define TRIG_PHASER_LEVEL 1096

#define MX_PHASER_INTENSITY 976

#define EH_PHASER_RATE 979
#define EH_PHASER_COLOR 977

#define VIBRATO_SPEED 1284
#define VIBRATO_DEPTH 1285

#define ROTARY_SPEED 1346
#define ROTARY_INTENSITY 1348
#define ROTARY_DOPPLER 1350
#define ROTARY_CROSSOVER 1351

#define VIBROPAN_SPEED 1314
#define VIBROPAN_DEPTH 1315
#define VIBROPAN_VIBRA 1316
#define VIBROPAN_WAVE 1317

#define UNOVIBE_PEDAL_SPEED 2884
#define UNOVIBE_INTENSITY 2883
#define UNOVIBE_CHORUS_VIBRATO 2882
#define UNOVIBE_VOLUME 2885

#define TREMOLO_SPEED 1156
#define TREMOLO_DEPTH 1155
#define TREMOLO_WAVE 1157

#define PANNER_SPEED 1220
#define PANNER_DEPTH 1219
#define PANNER_WAVE 1221

#define ENVELOPE_SENSITIVITY 1606
#define ENVELOPE_RANGE 1605
#define ENVELOPE_BLEND 1608

#define AUTOYA_SPEED 1478
#define AUTOYA_INTENSITY 1482
#define AUTOYA_RANGE 1483

#define YAYA_PEDAL 1410
#define YAYA_INTENSITY 1417
#define YAYA_RANGE 1418

#define SYNTH_TALK_ATTACK 1542
#define SYNTH_TALK_RELEASE 1547
#define SYNTH_TALK_SENS 1544
#define SYNTH_TALK_VOX 1540
#define SYNTH_TALK_BALANCE 1545

#define STEP_FILTER_SPEED 3010
#define STEP_FILTER_INTENSITY 3011

#define SAMPLE_HOLD_SPEED 3012
#define SAMPLE_HOLD_INTENSITY 3013

#define WHAMMY_AMOUNT 1797
#define WHAMMY_PEDAL 1795
#define WHAMMY_MIX 1796

#define PITCH_AMOUNT 1730
#define PITCH_MIX 1745

#define DETUNE_AMOUNT 1668
#define DETUNE_LEVEL 1667

#define IPS_SHIFT_AMOUNT 2754
#define IPS_KEY 2756
#define IPS_SCALE 2755
#define IPS_LEVEL 2757

#define OCTAVER_OCTAVE1 1746
#define OCTAVER_OCTAVE2 1747
#define OCTAVER_DRY_LEVEL 1748

enum {
  DELAY_TYPE_ANALOG = 1046,
  DELAY_TYPE_DIGITAL = 1045,
  DELAY_TYPE_MODULATED = 1047,
  DELAY_TYPE_PONG = 1048,
  DELAY_TYPE_TAPE = 1049,

  DELAY_RP500_TYPE_DIGITAL = 1052,
  DELAY_RP500_TYPE_ANALOG = 1053,
  DELAY_RP500_TYPE_DM = 1058,
  DELAY_RP500_TYPE_ECHOPLEX = 1057,
  DELAY_RP500_TYPE_MODULATED = 1054,
  DELAY_RP500_TYPE_PONG = 1055,
  DELAY_RP500_TYPE_REVERSE = 1064,
  DELAY_RP500_TYPE_TAPE = 1056,
};

#define DELAY_TYPE 1856
#define DELAY_ON_OFF 1857
#define DELAY_POSITION 15

#define DELAY_TIME 1888

#define DELAY_TAPE_WOW 1891
#define DELAY_TAPE_FLUTTER 1892

#define DELAY_LEVEL 1860
#define DELAY_REPEATS 1863
#define DELAY_TAP_TIME 1868
#define DELAY_DUCK_THRESH 1889
#define DELAY_DUCK_LEVEL 1890
#define DELAY_REPEAT_RATE 1898
#define DELAY_ECHO 1895
#define DELAY_INTENSITY 1896
#define DELAY_TIME_0_760 1899
#define DELAY_VOLUME 1893
#define DELAY_REPEATS_0_99 1874
#define DELAY_DEPTH 1873
#define DELAY_TAP_TIME_0_4990 1900
#define DELAY_MIX 1902
#define DELAY_TIME_0_4650 1901

enum {
  REVERB_TYPE_TWIN = 1146,
  REVERB_TYPE_LEX_AMBIENCE = 1150,
  REVERB_TYPE_LEX_STUDIO = 1149,
  REVERB_TYPE_LEX_ROOM = 1148,
  REVERB_TYPE_LEX_HALL = 1147,
  REVERB_TYPE_EMT240_PLATE = 1151
};

#define REVERB_TYPE 1920
#define REVERB_ON_OFF 1921
#define REVERB_POSITION 16

#define REVERB_PREDELAY 1922
#define REVERB_DECAY 1927
#define REVERB_LIVELINESS 1933
#define REVERB_LEVEL 1925

#define EXP_TYPE 8194
#define EXP_POSITION 19

#define EXP_MIN 8195
#define EXP_MAX 8196

#define LIBRARY_TONE 8704
#define LIBRARY_EFFECTS 8705

#define LIBRARY_POSITION 25

/* LIBRARY_TONE valid options */
#define TONE_LIB_OVERDRIVE 1793
#define TONE_LIB_ROCK1 1794
#define TONE_LIB_ROCK2 1795
#define TONE_LIB_BLUES1 1796
#define TONE_LIB_BLUES2 1797
#define TONE_LIB_METAL1 1798
#define TONE_LIB_METAL2 1799
#define TONE_LIB_COUNTRY1 1800
#define TONE_LIB_COUNTRY2 1801
#define TONE_LIB_WARM_DRIVE 1802
#define TONE_LIB_CRUNCH 1803
#define TONE_LIB_TEXAS_TONE 1804
#define TONE_LIB_ROCKABILLY 1805
#define TONE_LIB_SOLO1 1806
#define TONE_LIB_SOLO2 1807
#define TONE_LIB_ROCKWAH 1808
#define TONE_LIB_CHUNKY 1809
#define TONE_LIB_SMOOTH 1810
#define TONE_LIB_HEAVY 1811
#define TONE_LIB_CLEAN1 1812
#define TONE_LIB_CLEAN2 1813
#define TONE_LIB_BRITISH1 1814
#define TONE_LIB_BRITISH2 1815
#define TONE_LIB_AMERICAN1 1816
#define TONE_LIB_AMERICAN2 1817
#define TONE_LIB_TUBE_DRIVE 1818
#define TONE_LIB_DISTORTION 1819
#define TONE_LIB_SCOOPED 1820
#define TONE_LIB_PUNCHY 1821
#define TONE_LIB_BRIGHT_CLEAN 1822
/* setting LIBRARY_TONE to this option seems to crash device */
#define TONE_LIB_CUSTOM 1792

/* LIBRARY_EFFECTS valid options */
#define EFFECTS_LIB_CHORUS 1857
#define EFFECTS_LIB_PHASER 1858
#define EFFECTS_LIB_FLANGER 1859
#define EFFECTS_LIB_PITCH 1860
#define EFFECTS_LIB_TREMOLO 1861
#define EFFECTS_LIB_ROTARY 1862
#define EFFECTS_LIB_ENVELOPE 1863
#define EFFECTS_LIB_DIGITAL 1864
#define EFFECTS_LIB_ANALOG 1865
#define EFFECTS_LIB_PONG 1866
#define EFFECTS_LIB_MOD 1867
#define EFFECTS_LIB_TAPE 1868
#define EFFECTS_LIB_HALL 1869
#define EFFECTS_LIB_PLATE 1870
#define EFFECTS_LIB_SPRING 1871
#define EFFECTS_LIB_CHORUS_DIGITAL 1872
#define EFFECTS_LIB_CHORUS_DELAY_REVERB 1873
#define EFFECTS_LIB_FLANGER_ANALOG 1874
#define EFFECTS_LIB_PHASER_TAPE 1875
#define EFFECTS_LIB_PHASER_MOD 1876
#define EFFECTS_LIB_PHASER_ROOM 1877
#define EFFECTS_LIB_DIGITAL_HALL 1878
#define EFFECTS_LIB_ANALOG_SPRING 1879
#define EFFECTS_LIB_CHORUS_HALL 1880
#define EFFECTS_LIB_PONG_HALL 1881
#define EFFECTS_LIB_TAPE_SPRING 1882
#define EFFECTS_LIB_TREMOLO_TAPE 1883
#define EFFECTS_LIB_PITCH_DIGITAL 1884
#define EFFECTS_LIB_MOD_PLATE 1885
#define EFFECTS_LIB_ROTARY_TAPE 1886
/* setting EFFECTS_LIBRARY to this option seems to crash device */
#define EFFECTS_LIB_CUSTOM 1856

#define USB_POSITION 0
#define USB_AUDIO_PLAYBACK_MIX 12297
#define USB_AUDIO_LEVEL 12307

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

typedef enum {
    PRESETS_SYSTEM = 0,
    PRESETS_USER = 1,
    PRESETS_ARTIST = 2,

    /* Version 1 and later */
    PRESETS_MEDIA_CARD = 3,
    PRESETS_EDIT_BUFFER = 4, /* Current preset edit buffer, index must be 0 */
    PRESETS_FACTORY2 = 5,

    /* Version 2 and later */
    PRESETS_EXTERNAL = 6
} PresetBank;

typedef enum {
    REQUEST_WHO_AM_I = 0x01,
    RECEIVE_WHO_AM_I = 0x02,

    REQUEST_DEVICE_CONFIGURATION = 0x08,
    RECEIVE_DEVICE_CONFIGURATION = 0x09,

    REQUEST_GLOBAL_PARAMETERS = 0x10,
    RECEIVE_GLOBAL_PARAMETERS = 0x11,

    REQUEST_BULK_DUMP = 0x18,
    RECEIVE_BULK_DUMP_START = 0x19,
    RECEIVE_BULK_DUMP_END = 0x1B,

    REQUEST_PRESET_NAMES = 0x21,
    RECEIVE_PRESET_NAMES = 0x22,

    REQUEST_PRESET_NAME = 0x28,
    RECEIVE_PRESET_NAME = 0x29,

    REQUEST_PRESET = 0x2A,
    RECEIVE_PRESET_START = 0x2B,
    RECEIVE_PRESET_END = 0x2C,
    RECEIVE_PRESET_PARAMETERS = 0x2D,

    LOAD_EDIT_BUFFER_PRESET = 0x38, /* version 0 only
                                       use move preset in later versions */

    MOVE_PRESET = 0x39,

    REQUEST_MODIFIER_LINKABLE_LIST = 0x3A,
    RECEIVE_MODIFIER_LINKABLE_LIST = 0x3B,

    REQUEST_PARAMETER_VALUE = 0x40,
    RECEIVE_PARAMETER_VALUE = 0x41,

    /* version 1 and later */
    REQUEST_OBJECT_NAMES = 0x50,
    RECEIVE_OBJECT_NAMES = 0x51,
    REQUEST_OBJECT_NAME = 0x52,
    RECEIVE_OBJECT_NAME = 0x53,
    REQUEST_OBJECT = 0x54,
    RECEIVE_OBJECT = 0x55,
    MOVE_OBJECT = 0x56,
    DELETE_OBJECT = 0x57,
    REQUEST_TABLE = 0x5A,
    RECEIVE_TABLE = 0x5B,

    RECEIVE_DEVICE_NOTIFICATION = 0x70,

    ACK = 0x7E,
    NACK = 0x7F
} MessageID;

void send_message(gint procedure, gchar *data, gint len);
void append_value(GString *msg, guint value);
GString *get_message_by_id(MessageID id);
void set_option(guint id, guint position, guint value);
void switch_preset(guint bank, guint x);
void store_preset_name(int x, const gchar *name);
void set_preset_level(int level);
GStrv query_preset_names(gchar bank);
GString *get_current_preset();

#endif /* GDIGI_H */
