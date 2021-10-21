#pragma once

/// <summary>
/// Class cStreckenAbschnitt is for managing route sections
/// </summary>
class cStreckenAbschnitt
{
	int nummer_des_streckenabschnitts;
	bool elektrifiziert;
	bool belegt;

public:
	cStreckenAbschnitt(int nummer_des_streckenabschnitts = 0, bool elektrifiziert = true, bool belegt = false);
	void ausgabe();
	void eingabe();
};

