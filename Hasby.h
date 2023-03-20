#ifndef Hasby_H
#define Hasby_H
#include <stdio.h>
#include "math.h"
#include <conio.h>


double Log(int Angka1);

double Logaritma (double X,double Y);

double Eurel (double nilai, double e);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double ConCelFahr(double celc);

double ConCelKelv(double celc);

double ConCelReam(double celc);

double ConFahrCel(double fahr);

double ConFahrKelv(double fahr);

double ConFahrReam(double fahr);

double ConKelvCel(double fahr);

double ConKelvFahr(double fahr);

double ConKelvReam(double fahr);

double ConReamCel(double ream);

double ConReamFahr(double ream);

double ConReamKelv(double ream);

double Sigmai(double en);

double Sigmaidua(double en);

double Sigmaitiga(double en);

double ConMkeCM (double met);

double ConMkeKM (double met);

double ConMkeMIL (double met);

double ConMkeMM (double met);

double ConCMkeM (double cm);

double ConCMkeMM (double cm);

double ConCMkeKM (double cm);

double ConCMkeINC (double cm);

double ConKMkeCM (double km);

double ConKMkeM (double km);

double ConKMkeMIL (double km);

double ConKMkeMM (double km);

double ConMMkeM (double mm);

double ConMMkeCM (double mm);

double ConMMkeKM (double mm);

double ConMMkeINC (double mm);

void KonversiPanjang ();

void TurunanPolinom ();

void HitungTurunanPolinom (int a[100], int n);

#endif

