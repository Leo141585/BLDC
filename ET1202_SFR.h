//ET1202 FOC  SFR byte definitions
//Final Modify at 20171109
#ifndef ET1202_SFR_H
#define ET1202_SFR_H
#define SFR(name, addr) sfr name = addr
//#define P0 sfr P0 = 0x80;
SFR(P0                  , 0x80);
SFR(SP                  , 0x81);
SFR(DP0L                , 0x82);
SFR(DP0H                , 0x83);
SFR(DP1L                , 0x84);
SFR(DP1H                , 0x85);
SFR(RCON                , 0x86);
SFR(PCON                , 0x87);
SFR(TCON                , 0x88);
SFR(TMOD                , 0x89);
SFR(TL0                 , 0x8A);
SFR(TL1                 , 0x8B);
SFR(TH0                 , 0x8C);
SFR(TH1                 , 0x8D);
SFR(AUX                 , 0x8E);
SFR(SYNC                , 0x8F);
SFR(P1                  , 0x90);
SFR(PI_KI_L             , 0x91);
SFR(PI_KI_H             , 0x92);
SFR(PI_KP_L             , 0x93);
SFR(PI_KP_H             , 0x94);
SFR(PI_MAX_L            , 0x95);
SFR(PI_MAX_H            , 0x96);
SFR(MOTOR_CONT1         , 0x97);
SFR(SCON                , 0x98);
SFR(SBUF                , 0x99);
SFR(SRELL               , 0x9A);
SFR(SRELH               , 0x9B);
SFR(IICEBT              , 0x9C);
SFR(PI_UI_L             , 0x9D);
SFR(PI_UI_H             , 0x9E);
SFR(MOTOR_CONT2         , 0x9F);
SFR(P2                  , 0xA0);
SFR(USER_LPF_L          , 0xA1);
SFR(USER_LPF_H          , 0xA2);
SFR(EEPROM              , 0xA3);
SFR(INI_ANG_DAT         , 0xA4);
SFR(INI_ANG_CTRL        , 0xA5);
SFR(PI_CMD_L            , 0xA6);
SFR(PI_CMD_H            , 0xA7);
SFR(IEN0                , 0xA8);
SFR(IP0                 , 0xA9);
SFR(PI_TR_L             , 0xAA);
SFR(PI_TR_H             , 0xAB);
SFR(PI_OUT_L            , 0xAC);
SFR(PI_OUT_H            , 0xAD);
SFR(PI_FB_L             , 0xAE);
SFR(PI_FB_H             , 0xAF);
SFR(P3                  , 0xB0);
SFR(SD_MODE             , 0xB1);
SFR(PI_MIN_L            , 0xB2);
SFR(PI_MIN_H            , 0xB3);
SFR(TL2                 , 0xB4);
SFR(TH2                 , 0xB5);
SFR(WDTC                , 0xB6);
SFR(WDTK                , 0xB7);
SFR(IEN1                , 0xB8);
SFR(IP1                 , 0xB9);
SFR(IICRWD              , 0xBA);
SFR(SMO_D1_L            , 0xBB);
SFR(SMO_D1_H            , 0xBC);
SFR(SMO_D2_L            , 0xBD);
SFR(SMO_D2_H            , 0xBE);
SFR(MPWMCPSF            , 0xBF);
SFR(IRCON1              , 0xC0);
SFR(ADCSTR              , 0xC1);
SFR(ADCCONT             , 0xC2);
SFR(ADCD1               , 0xC3);
SFR(ADCD2               , 0xC4);
SFR(ADCDLY              , 0xC5);
SFR(MOTOR_CONT3         , 0xC6);
SFR(PINCONG7            , 0xC7);
SFR(T2CON               , 0xC8);
SFR(ADCOFST_L           , 0xC9);
SFR(ADCOFST_H           , 0xCA);
SFR(ADCAUTO_L           , 0xCB);
SFR(ADCAUTO_H           , 0xCC);

//SFR(  , 0xCD);
//SFR(  , 0xCE);
//SFR(  , 0xCF);
SFR(PSW                 , 0xD0);
SFR(PFCON               , 0xD1);
SFR(FOC_D1_L            , 0xD2);
SFR(FOC_D1_H            , 0xD3);
SFR(FOC_D2_L            , 0xD4);
SFR(FOC_D2_H            , 0xD5);
SFR(FOCCONT             , 0xD6);
SFR(PI_TMSR             , 0xD7);
SFR(VDCCONT             , 0xD8);
SFR(CAPT_L              , 0xD9);
SFR(CAPT_H              , 0xDA);
SFR(CAPH_L              , 0xDB);
SFR(CAPH_H              , 0xDC);
SFR(CAPCONT             , 0xDD);
SFR(PI_KT_L             , 0xDE);
SFR(PI_KT_H             , 0xDF);
SFR(ACC                 , 0xE0);
SFR(MPWMDATL            , 0xE1);
SFR(MPWMDATH            , 0xE2);
SFR(MPWMCONT1           , 0xE3);
SFR(MPWMINV             , 0xE4);
SFR(MPWMDB              , 0xE5);
SFR(PI_GAIN             , 0xE6);
SFR(MPWMCONT2           , 0xE7);
SFR(IICS                , 0xE8);
SFR(IICTL               , 0xE9);
SFR(IICA1               , 0xEA);
SFR(IICA2               , 0xEB);
SFR(SFR_PAGE            , 0xEC);
SFR(SP_CYC              , 0xED);
SFR(AOCPCONT            , 0xEE);
SFR(OCPCONT             , 0xEF);
SFR(B                   , 0xF0);
SFR(PINSET1             , 0xF1);
SFR(PINSET2             , 0xF2);
SFR(PINSET3             , 0xF3);
SFR(PINSET4             , 0xF4);
SFR(PINSET5             , 0xF5);
SFR(PINSET6             , 0xF6);
SFR(PINSET7             , 0xF7);
SFR(PINCONG1            , 0xF8);
SFR(PINCONG2            , 0xF9);
SFR(PINCONG3            , 0xFA);
SFR(PINCONG4            , 0xFB);
SFR(PINCONG5            , 0xFC);
SFR(PINCONG6            , 0xFD);
SFR(RSTS                , 0xFE);
SFR(TAKEY               , 0xFF);
///===========sfr16==============//
sfr16 PI_KI = 0x91;
sfr16 PI_KP = 0x93;
sfr16 PI_MAX = 0x95;
sfr16 PI_UI = 0x9D;

sfr16 PI_CMD = 0xA6;
sfr16 PI_TR = 0xAA;
sfr16 PI_OUT = 0xAC;
sfr16 PI_FB = 0xAE;
sfr16 PI_MIN = 0xB2;
sfr16 PI_KT = 0xDE;

sfr16 USER_LPF = 0xA1;
sfr16 SMO_D1 = 0xBB;
sfr16 SMO_D2 = 0xBD;
sfr16 ADCOFST = 0xC9;
sfr16 ADCAUTODATA = 0xCB;
sfr16 FOC_D1 = 0xD2;
sfr16 FOC_D2 = 0xD4;

sfr16 CAPT = 0xD9;
sfr16 CAPH = 0xDB;
sfr16 MPWMDATA = 0xE1;
//////////////PSW
sbit CY                 = PSW ^ 7;
sbit AC                 = PSW ^ 6;
sbit F0                 = PSW ^ 5;
sbit RS1                = PSW ^ 4;
sbit RS0                = PSW ^ 3;
sbit OV                 = PSW ^ 2;
sbit F1                 = PSW ^ 1;
sbit P                  = PSW ^ 0;
//////////////TCON
sbit TF1                = TCON ^ 7;
sbit TR1                = TCON ^ 6;
sbit TF0                = TCON ^ 5;
sbit TR0                = TCON ^ 4;
sbit IE1                = TCON ^ 3;
sbit IT1                = TCON ^ 2;
sbit IE0                = TCON ^ 1;
sbit IT0                = TCON ^ 0;
//////////////IEN0
sbit EA                 = IEN0 ^ 7;
//= IEN0 ^ 6;
sbit ET2                = IEN0 ^ 5;
sbit ESP                = IEN0 ^ 4;
sbit ET1                = IEN0 ^ 3;
sbit EX1                = IEN0 ^ 2;
sbit ET0                = IEN0 ^ 1;
sbit EX0                = IEN0 ^ 0;
//////////////IEN1
sbit CAPIE              = IEN1 ^ 7;
sbit WDTIE              = IEN1 ^ 6;
sbit LVDIIE             = IEN1 ^ 5;
sbit IICIE              = IEN1 ^ 4;
sbit MPWMMAXIE          = IEN1 ^ 3;
sbit MPWMMINIE          = IEN1 ^ 2;
sbit ADCIE              = IEN1 ^ 1;
sbit OCPSIE             = IEN1 ^ 0;
//////////////IRCON1
sbit CAPIF              = IRCON1 ^ 7;
sbit WDTIF              = IRCON1 ^ 6;
sbit LVDIF              = IRCON1 ^ 5;
//sbit            = IRCON1 ^ 4;
sbit MPWMMAXIF          = IRCON1 ^ 3;
sbit MPWMMINIF          = IRCON1 ^ 2;
sbit ADCIF              = IRCON1 ^ 1;
sbit OCPSIF             = IRCON1 ^ 0;
//////////////SCON
sbit TI                 = SCON ^ 1;
sbit RI                 = SCON ^ 0;
//////////////T2CON
sbit TF2                = T2CON ^ 5;
sbit TR2                = T2CON ^ 4;
//////////////P0
sbit P0_0               = P0 ^ 0;
sbit P0_1               = P0 ^ 1;
sbit P0_2               = P0 ^ 2;
sbit P0_3               = P0 ^ 3;
sbit P0_4               = P0 ^ 4;
sbit P0_5               = P0 ^ 5;
sbit P0_6               = P0 ^ 6;
sbit P0_7               = P0 ^ 7;
//////////////P1
sbit P1_0               = P1 ^ 0;
sbit P1_1               = P1 ^ 1;
sbit P1_2               = P1 ^ 2;
sbit P1_3               = P1 ^ 3;
sbit P1_4               = P1 ^ 4;
sbit P1_5               = P1 ^ 5;
sbit P1_6               = P1 ^ 6;
sbit P1_7               = P1 ^ 7;
//////////////P2
sbit P2_0               = P2 ^ 0;
sbit P2_1               = P2 ^ 1;
sbit P2_2               = P2 ^ 2;
sbit P2_3               = P2 ^ 3;
sbit P2_4               = P2 ^ 4;
sbit P2_5               = P2 ^ 5;
sbit P2_6               = P2 ^ 6;
sbit P2_7               = P2 ^ 7;
//////////////P3
sbit P3_0               = P3 ^ 0;
sbit P3_1               = P3 ^ 1;
sbit P3_2               = P3 ^ 2;
sbit P3_3               = P3 ^ 3;
sbit P3_4               = P3 ^ 4;
sbit P3_5               = P3 ^ 5;
sbit P3_6               = P3 ^ 6;
sbit P3_7               = P3 ^ 7;
#endif