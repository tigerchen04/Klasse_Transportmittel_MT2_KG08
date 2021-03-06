#pragma once
#include <iostream>
#include <string>

using namespace std;

//Basisklasse:
class Transportmittel
{
private:
	double hoehe;
	double breite;

public:
	//allgemeiner Konstruktor:
	Transportmittel(double h, double b);

	//Methode:
	void bewegen(string richtung);

	//Gettermethoden:
	double gethoehe();
	double getbreite();
};

//abgeleitete Klasse Landtransportmittel:
class Landtransportmittel : public Transportmittel
{
private:
	int radzahl;

public:
	//Methoden:
	void fahren(double km);
	void schieben(double km);

	//Gettermethode:
	int getradzahl();

	//allgemeiner Konstruktor:
	Landtransportmittel(double h, double b, int r);
};

//abgeleitete Klasse Wassertransportmittel:
class Wassertransportmittel : public Transportmittel
{
private:
	double bruttoregistertonnen;

public:
	//Methoden:
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//Gettermethode:
	double getbruttoregistertonnen();

	//allgemeiner Kontstruktor:
	Wassertransportmittel(double h, double b, double brt);
};

//abgeleitete Klasse Fahrrad:
class Fahrrad : public Landtransportmittel
{
private:
	int anzahl_gaenge;

public:
	//Methoden:
	void freihaendig_fahren(string name);
	void schieben(double m);

	//Gettermethode:
	int getanzahl_gaenge();

	//allgemeiner Kontstruktor:
	Fahrrad(double h, double b, int r, int anz_g);
};

//abgleitete Klasse Rikscha
class Rikscha : public Landtransportmittel
{
private:
	string farbe;

public:
	//Methoden:
	void ziehen(int anzahl_personen);
	void schieben(double m);

	//Gettermethode:
	string getfarbe();

	//allgemeiner Konstruktor:
	Rikscha(double h, double b, int r, string f);
};

//abgeleitete Klasse Auto:
class Auto : public Landtransportmittel
{
private:
	double spritverbrauch;

public:
	//Methoden:
	void tanken(int liter);
	void fahren(double km);

	//Gettermethode:
	double getspritverbrauch();

	//allgemeiner Konstruktor:
	Auto(double h, double b, int r, double s_v);
};
