#include "stdafx.h"
#include "UnifLoader.h"

std::unordered_map<string, int> UnifLoader::_boardMappings = std::unordered_map<string, int> {
	{ "11160", UnifBoards::Bmc11160 },
	{ "12-IN-1", UnifBoards::Bmc12in1 },
	{ "13in1JY110", UnifBoards::UnknownBoard },
	{ "190in1", UnifBoards::Bmc190in1 },
	{ "22211", 132 },
	{ "3D-BLOCK", UnifBoards::UnknownBoard },
	{ "411120-C", UnifBoards::Bmc411120C },
	{ "42in1ResetSwitch", 226 },
	{ "43272", UnifBoards::Unl43272 },
	{ "603-5052", 238 },
	{ "64in1NoRepeat", UnifBoards::Bmc64in1NoRepeat },
	{ "70in1", UnifBoards::Bmc70in1 },
	{ "70in1B", UnifBoards::Bmc70in1B },
	{ "810544-C-A1", UnifBoards::Bmc810544CA1 },
	{ "8157", UnifBoards::UnknownBoard },
	{ "8237", 215 },
	{ "8237A", UnifBoards::UnknownBoard },
	{ "830118C", UnifBoards::UnknownBoard },
	{ "A65AS", UnifBoards::A65AS },
	{ "AC08", UnifBoards::Ac08 },
	{ "ANROM", 7 },
	{ "AX5705", UnifBoards::Ax5705 },
	{ "BB", UnifBoards::Bb },
	{ "BS-5", UnifBoards::Bs5 },
	{ "CC-21", UnifBoards::Cc21 },
	{ "CITYFIGHT", UnifBoards::UnknownBoard },
	{ "COOLBOY", UnifBoards::Coolboy },
	{ "10-24-C-A1", UnifBoards::UnknownBoard },
	{ "CNROM", 3 },
	{ "CPROM", 13 },
	{ "D1038", 60 },
	{ "DANCE", UnifBoards::UnknownBoard },
	{ "DANCE2000", UnifBoards::UnknownBoard },
	{ "DREAMTECH01", UnifBoards::DreamTech01 },
	{ "EDU2000", UnifBoards::Edu2000 },
	{ "EKROM", 5 },
	{ "ELROM", 5 },
	{ "ETROM", 5 },
	{ "EWROM", 5 },
	{ "FK23C", UnifBoards::UnknownBoard },
	{ "FK23CA", UnifBoards::UnknownBoard },
	{ "FS304", 162 },
	{ "G-146", UnifBoards::BmcG146 },
	{ "GK-192", 58 },
	{ "GS-2004", UnifBoards::Gs2004 },
	{ "GS-2013", UnifBoards::Gs2013 },
	{ "Ghostbusters63in1", UnifBoards::Ghostbusters63in1 },
	{ "H2288", 123 },
	{ "HKROM", UnifBoards::UnknownBoard },
	{ "KOF97", UnifBoards::Kof97 },
	{ "KONAMI-QTAI", UnifBoards::UnknownBoard },
	{ "KS7010", UnifBoards::UnknownBoard },
	{ "KS7012", UnifBoards::Ks7012 },
	{ "KS7013B", UnifBoards::Ks7013B },
	{ "KS7016", UnifBoards::Ks7016 },
	{ "KS7017", UnifBoards::UnknownBoard },
	{ "KS7030", UnifBoards::UnknownBoard },
	{ "KS7031", UnifBoards::UnknownBoard },
	{ "KS7032", 142 },
	{ "KS7037", UnifBoards::Ks7037 },
	{ "KS7057", UnifBoards::Ks7057 },
	{ "LE05", UnifBoards::UnknownBoard },
	{ "LH10", UnifBoards::Lh10 },
	{ "LH32", 125 },
	{ "LH53", UnifBoards::UnknownBoard },
	{ "MALISB", UnifBoards::MaliSB },
	{ "MARIO1-MALEE2", UnifBoards::Malee },
	{ "MHROM", 66 },
	{ "N625092", 221 },
	{ "NROM", 0 },
	{ "NROM-128", 0 },
	{ "NROM-256", 0 },
	{ "NTBROM", 68 },
	{ "NTD-03", UnifBoards::BmdNtd03 },
	{ "NovelDiamond9999999in1", UnifBoards::NovelDiamond },
	{ "OneBus", UnifBoards::UnknownBoard },
	{ "PEC-586", UnifBoards::UnknownBoard },
	{ "RET-CUFROM", 29 },
	{ "RROM", 0 },
	{ "RROM-128", 0 },
	{ "SA-002", 136 },
	{ "SA-0036", 149 },
	{ "SA-0037", 148 },
	{ "SA-009", 160 },
	{ "SA-016-1M", 146 },
	{ "SA-72007", 145 },
	{ "SA-72008", 133 },
	{ "SA-9602B", UnifBoards::UnknownBoard },
	{ "SA-NROM", 143 },
	{ "SAROM", 1 },
	{ "SBROM", 1 },
	{ "SC-127", 35 },
	{ "SCROM", 1 },
	{ "SEROM", 1 },
	{ "SGROM", 1 },
	{ "SHERO", UnifBoards::StreetHeroes },
	{ "SKROM", 1 },
	{ "SL12", 116 },
	{ "SL1632", 14 },
	{ "SL1ROM", 1 },
	{ "SLROM", 1 },
	{ "SMB2J", UnifBoards::Smb2j },
	{ "SNROM", 1 },
	{ "SOROM", 1 },
	{ "SSS-NROM-256", UnifBoards::UnknownBoard },
	{ "SUNSOFT_UNROM", 93 },
	{ "Sachen-74LS374N", 150 },
	{ "Sachen-74LS374NA", 243 },
	{ "Sachen-8259A", 141 },
	{ "Sachen-8259B", 138 },
	{ "Sachen-8259C", 139 },
	{ "Sachen-8259D", 137 },
	{ "Super24in1SC03", UnifBoards::Super24in1Sc03 },
	{ "SuperHIK8in1", 45 },
	{ "Supervision16in1", 53 },
	{ "T-227-1", UnifBoards::UnknownBoard },
	{ "T-230", UnifBoards::UnknownBoard },
	{ "T-262", UnifBoards::T262 },
	{ "TBROM", 4 },
	{ "TC-U01-1.5M", 147 },
	{ "TEK90", 90 },
	{ "TEROM", 4 },
	{ "TF1201", UnifBoards::Tf1201 },
	{ "TFROM", 4 },
	{ "TGROM", 4 },
	{ "TKROM", 4 },
	{ "TKSROM", 4 },
	{ "TLROM", 4 },
	{ "TLSROM", 4 },
	{ "TQROM", 4 },
	{ "TR1ROM", 4 },
	{ "TSROM", 4 },
	{ "TVROM", 4 },
	{ "Transformer", UnifBoards::UnknownBoard },
	{ "UNROM", 2 },
	{ "UNROM-512-8", 30 },
	{ "UNROM-512-16", 30 },
	{ "UNROM-512-32", 30 },
	{ "UOROM", 2 },
	{ "VRC7", UnifBoards::UnknownBoard },
	{ "YOKO", UnifBoards::UnknownBoard },
	{ "SB-2000", UnifBoards::UnknownBoard },
	{ "158B", UnifBoards::UnknownBoard },
	{ "DRAGONFIGHTER", UnifBoards::UnknownBoard },
	{ "EH8813A", UnifBoards::Eh8813A },
	{ "HP898F", UnifBoards::Hp898f },
	{ "F-15", UnifBoards::BmcF15 },
	{ "RT-01", UnifBoards::Rt01 },
	{ "81-01-31-C", UnifBoards::UnknownBoard },
	{ "8-IN-1", UnifBoards::UnknownBoard },
	{ "WS", UnifBoards::Super40in1Ws }
};