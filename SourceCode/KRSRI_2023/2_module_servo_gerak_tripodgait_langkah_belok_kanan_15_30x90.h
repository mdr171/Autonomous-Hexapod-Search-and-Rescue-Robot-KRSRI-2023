// belok_kanan_15_30x90
// pergelangan 1 gerak kanan (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 60,            Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 135,
      Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 45,            Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 120;
float Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 2,             Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 1;
// pergelangan 1 gerak kiri (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 120,            Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 45,
      Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 135,            Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 60;
float Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri = 2,              Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan = 1;
 
// pergelangan 2 gerak kanan (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 90,            Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 60,
                                                                  Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 90;
float Custom3_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 0.2,  Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 2,
                                                                  Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 2,
      Custom3_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 0.3,     Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 2;
// pergelangan 2 gerak kiri (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 90,             Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 120,
                                                                  Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 90;
float Custom3_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 0.2,   Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 2,
                                                                  Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 2,
      Custom3_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri = 0.3,      Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan = 2;

// pergelangan 3 gerak kanan (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 90,            Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 60,
                                                                  Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 90;
float Custom3_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 0.8,  Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 2,
      Custom3_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 0.8,    Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 2,
      Custom3_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 0.8,     Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 2;
// pergelangan 3 gerak kiri (tripodgait)
int   Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 90,             Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 120,
                                                                  Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 90;
float Custom3_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 0.8,   Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 2,
      Custom3_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 0.8,     Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 2,
      Custom3_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri = 0.8,      Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan = 2;

void gerak_kanan_belok_kanan_15_30x90()
{
  for
  (
    KananServo0 =  KalibrasiKananServo0 + Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,   KiriServo6Kombinasi =  KalibrasiKiriServo6 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,           KananServo1 = KalibrasiKananServo1 + Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,          KiriServo7Kombinasi =  KalibrasiKiriServo7 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,                 KananServo2 = KalibrasiKananServo2 + Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,            KiriServo8Kombinasi =  KalibrasiKiriServo8 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,            KiriServo3 =  KalibrasiKiriServo3 + (180 - (Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 30)),   KananServo3Kombinasi =  KalibrasiKananServo3 + (180 - (Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 30)),    KiriServo4 = KalibrasiKiriServo4 + (180 - Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan),   KananServo4Kombinasi =  KalibrasiKananServo4 + (180 - Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri),         KiriServo5 = KalibrasiKiriServo5 + (180 - Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan),         KananServo5Kombinasi =  KalibrasiKananServo5 + (180 - Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri),         KananServo6 =  KalibrasiKananServo6 + Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 90,  KiriServo0Kombinasi =  KalibrasiKiriServo0 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 90,   KananServo7 = KalibrasiKananServo7 + Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,        KiriServo1Kombinasi =  KalibrasiKiriServo1 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,         KananServo8 = KalibrasiKananServo8 + Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,        KiriServo2Kombinasi =  KalibrasiKiriServo2 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri;
    KananServo0 >= KalibrasiKananServo0 + Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,   KiriServo6Kombinasi >= KalibrasiKiriServo6 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,                                                                                                          KiriServo7Kombinasi >= KalibrasiKiriServo7 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,                                                                                                                  KiriServo8Kombinasi >= KalibrasiKiriServo8 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,            KiriServo3 <= KalibrasiKiriServo3 + (180 - (Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 30)),   KananServo3Kombinasi <= KalibrasiKananServo3 + (180 - (Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 30)),                                                                                                  KananServo4Kombinasi >= KalibrasiKananServo4 + (180 - Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri),                                                                                                             KananServo5Kombinasi >= KalibrasiKananServo5 + (180 - Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri),         KananServo6 >= KalibrasiKananServo6 + Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 90,  KiriServo0Kombinasi >= KalibrasiKiriServo0 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 90,                                                                                                KiriServo1Kombinasi <= KalibrasiKiriServo1 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,                                                                                                      KiriServo2Kombinasi <= KalibrasiKiriServo2 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri;
    KananServo0 +=                        Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,   KiriServo6Kombinasi -=                       Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,           KananServo1 -=                       Custom3_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan, KiriServo7Kombinasi +=                       Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,        KananServo2 -=                       Custom3_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,   KiriServo8Kombinasi +=                       Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,   KiriServo3 +=                               Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,          KananServo3Kombinasi -=                                Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,                                                                                                         KananServo4Kombinasi -=                               Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,   KiriServo5 +=                             Custom3_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,   KananServo5Kombinasi -=                               Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,   KananServo6 +=                        Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,       KiriServo0Kombinasi -=                       Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,        KananServo7 +=                       Custom3_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,  KiriServo1Kombinasi +=                       Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,   KananServo8 +=                       Custom3_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,  KiriServo2Kombinasi +=                       Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri
  )
    {
      
      PulselenKananServo0 = KananServo0/180.0*450+150;
      PulselenKiriServo3 = KiriServo3/180.0*450+150;
      PulselenKananServo6 = KananServo6/180.0*450+150;

      PulselenKananServo1 = KananServo1/180.0*450+150;
      PulselenKiriServo4 = KiriServo4/180.0*450+150;
      PulselenKananServo7 = KananServo7/180.0*450+150;

      PulselenKananServo2 = KananServo2/180.0*450+150;
      PulselenKiriServo5 = KiriServo5/180.0*450+150;
      PulselenKananServo8 = KananServo8/180.0*450+150;

      PulselenKiriServo6Kombinasi = KiriServo6Kombinasi/180.0*450+150;
      PulselenKananServo3Kombinasi = KananServo3Kombinasi/180.0*450+150;
      PulselenKiriServo0Kombinasi = KiriServo0Kombinasi/180.0*450+150;
      
      PulselenKiriServo7Kombinasi = KiriServo7Kombinasi/180.0*450+150;
      PulselenKananServo4Kombinasi = KananServo4Kombinasi/180.0*450+150;
      PulselenKiriServo1Kombinasi = KiriServo1Kombinasi/180.0*450+150;
      
      PulselenKiriServo8Kombinasi = KiriServo8Kombinasi/180.0*450+150;
      PulselenKananServo5Kombinasi = KananServo5Kombinasi/180.0*450+150;
      PulselenKiriServo2Kombinasi = KiriServo2Kombinasi/180.0*450+150;

      board2.setPWM(0, 0, PulselenKananServo0);
      board1.setPWM(3, 0, PulselenKiriServo3);
      board2.setPWM(6, 0, PulselenKananServo6);
      
      board2.setPWM(1, 0, PulselenKananServo1);
      board1.setPWM(4, 0, PulselenKiriServo4);
      board2.setPWM(7, 0, PulselenKananServo7);
      
      board2.setPWM(2, 0, PulselenKananServo2);
      board1.setPWM(5, 0, PulselenKiriServo5);
      board2.setPWM(8, 0, PulselenKananServo8);

      board1.setPWM(6, 0, PulselenKiriServo6Kombinasi);
      board2.setPWM(3, 0, PulselenKananServo3Kombinasi);
      board1.setPWM(0, 0, PulselenKiriServo0Kombinasi);
      
      board1.setPWM(7, 0, PulselenKiriServo7Kombinasi);
      board2.setPWM(4, 0, PulselenKananServo4Kombinasi);
      board1.setPWM(1, 0, PulselenKiriServo1Kombinasi);
      
      board1.setPWM(8, 0, PulselenKiriServo8Kombinasi);
      board2.setPWM(5, 0, PulselenKananServo5Kombinasi);
      board1.setPWM(2, 0, PulselenKiriServo2Kombinasi);
      delay(20);
    }
}

void gerak_kiri_belok_kanan_15_30x90()
{
  for
  (
    KiriServo6 =  KalibrasiKiriServo6 + Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,   KananServo0Kombinasi =  KalibrasiKananServo0 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,  KiriServo7 = KalibrasiKiriServo7 + Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,           KananServo1Kombinasi =  KalibrasiKananServo1 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,           KiriServo8 = KalibrasiKiriServo8 + Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,           KananServo2Kombinasi =  KalibrasiKananServo2 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,           KananServo3 =  KalibrasiKananServo3 + (180 - (Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 30)),   KiriServo3Kombinasi =  KalibrasiKiriServo3 + (180 - (Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 30)),  KananServo4 = KalibrasiKananServo4 + (180 - Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri),  KiriServo4Kombinasi =  KalibrasiKiriServo4 + (180 - Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan),          KananServo5 = KalibrasiKananServo5 + (180 - Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri),         KiriServo5Kombinasi =  KalibrasiKiriServo5 + (180 - Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan),         KiriServo0 =  KalibrasiKiriServo0 + Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 90,  KananServo6Kombinasi =  KalibrasiKananServo6 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 90, KiriServo1 = KalibrasiKiriServo1 + Custom1_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri, KananServo7Kombinasi =  KalibrasiKananServo7 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,            KiriServo2 = KalibrasiKiriServo2 + Custom1_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,        KananServo8Kombinasi =  KalibrasiKananServo8 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan;
    KiriServo6 <= KalibrasiKiriServo6 + Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,   KananServo0Kombinasi <= KalibrasiKananServo0 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,                                                                                               KananServo1Kombinasi >= KalibrasiKananServo1 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,                                                                                                        KananServo2Kombinasi >= KalibrasiKananServo2 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,           KananServo3 >= KalibrasiKananServo3 + (180 - (Custom1_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 30)),   KiriServo3Kombinasi >= KalibrasiKiriServo3 + (180 - (Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 30)),                                                                                                KiriServo4Kombinasi >= KalibrasiKiriServo4 + (180 - Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan),                                                                                                               KiriServo5Kombinasi >= KalibrasiKiriServo5 + (180 - Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan),         KiriServo0 <= KalibrasiKiriServo0 + Custom2_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri - 90,  KananServo6Kombinasi <= KalibrasiKananServo6 + Custom1Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan + 90,                                                                                    KananServo7Kombinasi >= KalibrasiKananServo7 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,                                                                                                      KananServo8Kombinasi >= KalibrasiKananServo8 + Custom2Kombinasi_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan;
    KiriServo6 +=                       Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,   KananServo0Kombinasi -=                        Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,  KiriServo7 +=                      Custom3_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,  KananServo1Kombinasi -=                        Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,  KiriServo8 +=                      Custom3_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,  KananServo2Kombinasi -=                        Custom3Kombinasi_belakang_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,  KananServo3 +=                                Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,          KiriServo3Kombinasi -=                               Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,                                                                                                       KiriServo4Kombinasi +=                              Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,    KananServo5 -=                              Custom3_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,   KiriServo5Kombinasi +=                              Custom3Kombinasi_tengah_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan,   KiriServo0 +=                       Custom3_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kiri,       KananServo6Kombinasi -=                        Custom3Kombinasi_belok_kanan_15_30x90_Pergelangan_1_Gerak_Kanan,      KiriServo1 -= Custom3_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kiri,                KananServo7Kombinasi -=                        Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_2_Gerak_Kanan,      KiriServo2 -=                      Custom3_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kiri,  KananServo8Kombinasi -=                        Custom3Kombinasi_depan_belok_kanan_15_30x90_Pergelangan_3_Gerak_Kanan
  )
    {
       
      PulselenKiriServo6 = KiriServo6/180.0*450+150;
      PulselenKananServo3 = KananServo3/180.0*450+150;
      PulselenKiriServo0 = KiriServo0/180.0*450+150;
      
      PulselenKiriServo7 = KiriServo7/180.0*450+150;
      PulselenKananServo4 = KananServo4/180.0*450+150;
      PulselenKiriServo1 = KiriServo1/180.0*450+150;
      
      PulselenKiriServo8 = KiriServo8/180.0*450+150;
      PulselenKananServo5 = KananServo5/180.0*450+150;
      PulselenKiriServo2 = KiriServo2/180.0*450+150;

      PulselenKananServo0Kombinasi = KananServo0Kombinasi/180.0*450+150;
      PulselenKiriServo3Kombinasi = KiriServo3Kombinasi/180.0*450+150;
      PulselenKananServo6Kombinasi = KananServo6Kombinasi/180.0*450+150;

      PulselenKananServo1Kombinasi = KananServo1Kombinasi/180.0*450+150;
      PulselenKiriServo4Kombinasi = KiriServo4Kombinasi/180.0*450+150;
      PulselenKananServo7Kombinasi = KananServo7Kombinasi/180.0*450+150;

      PulselenKananServo2Kombinasi = KananServo2Kombinasi/180.0*450+150;
      PulselenKiriServo5Kombinasi = KiriServo5Kombinasi/180.0*450+150;
      PulselenKananServo8Kombinasi = KananServo8Kombinasi/180.0*450+150;
      
      board1.setPWM(6, 0, PulselenKiriServo6);
      board2.setPWM(3, 0, PulselenKananServo3);
      board1.setPWM(0, 0, PulselenKiriServo0);
      
      board1.setPWM(7, 0, PulselenKiriServo7);
      board2.setPWM(4, 0, PulselenKananServo4);
      board1.setPWM(1, 0, PulselenKiriServo1);
      
      board1.setPWM(8, 0, PulselenKiriServo8);
      board2.setPWM(5, 0, PulselenKananServo5);
      board1.setPWM(2, 0, PulselenKiriServo2);

      board2.setPWM(0, 0, PulselenKananServo0Kombinasi);
      board1.setPWM(3, 0, PulselenKiriServo3Kombinasi);
      board2.setPWM(6, 0, PulselenKananServo6Kombinasi);
      
      board2.setPWM(1, 0, PulselenKananServo1Kombinasi);
      board1.setPWM(4, 0, PulselenKiriServo4Kombinasi);
      board2.setPWM(7, 0, PulselenKananServo7Kombinasi);
      
      board2.setPWM(2, 0, PulselenKananServo2Kombinasi);
      board1.setPWM(5, 0, PulselenKiriServo5Kombinasi);
      board2.setPWM(8, 0, PulselenKananServo8Kombinasi);
      delay(20);
    }
}

void servo_gerak_tripodgait_langkah_belok_kanan_15_30x90()
{
      gerak_kanan_belok_kanan_15_30x90();
      delay(50);
      gerak_kiri_belok_kanan_15_30x90();
      delay(50);

      gerak_kanan_belok_kanan_15_30x90();
      delay(50);
      gerak_kiri_belok_kanan_15_30x90();
      delay(50);

      gerak_kanan_belok_kanan_15_30x90();
      delay(50);
      gerak_kiri_belok_kanan_15_30x90();
      delay(50);

      gerak_kanan_belok_kanan_15_30x90();
      delay(50);
      gerak_kiri_belok_kanan_15_30x90();
      delay(50);
}