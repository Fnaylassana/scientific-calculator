#ifndef Hasby_H
#define Hasby_H
#include <stdio.h>
#include "math.h"
#include <conio.h>


float Log(float Angka1);

float Logaritma (float X,float Y);

float Eurel (float nilai, float e);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float ConCelFahr(float celc);

float ConCelKelv(float celc);

float ConCelReam(float celc);

float ConFahrCel(float fahr);

float ConFahrKelv(float fahr);

float ConFahrReam(float fahr);

float ConKelvCel(float fahr);

float ConKelvFahr(float fahr);

float ConKelvReam(float fahr);

float ConReamCel(float ream);

float ConReamFahr(float ream);

float ConReamKelv(float ream);

float Sigmai(float en);

float Sigmaidua(float en);

float Sigmaitiga(float en);

float ConMkeCM (float met);

float ConMkeKM (float met);

float ConMkeMIL (float met);

float ConMkeMM (float met);

float ConCMkeM (float cm);

float ConCMkeMM (float cm);

float ConCMkeKM (float cm);

float ConCMkeINC (float cm);

float ConKMkeCM (float km);

float ConKMkeM (float km);

float ConKMkeMIL (float km);

float ConKMkeMM (float km);

float ConMMkeM (float mm);

float ConMMkeCM (float mm);

float ConMMkeKM (float mm);

float ConMMkeINC (float mm);

void KonversiPanjang ();

void TurunanPolinom ();

void HitungTurunanPolinom (int a[100], int n);

#endif

