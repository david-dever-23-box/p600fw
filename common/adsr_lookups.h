#ifndef ADSR_TABLES_H
#define	ADSR_TABLES_H

#include "p600.h"

uint8_t attackCurveLookup[]=
{
	0,1,3,5,7,9,11,13,14,16,18,20,22,23,25,27,
	29,30,32,34,35,37,39,41,42,44,45,47,49,50,52,54,
	55,57,58,60,61,63,65,66,68,69,71,72,74,75,76,78,
	79,81,82,84,85,87,88,89,91,92,93,95,96,98,99,100,
	102,103,104,105,107,108,109,111,112,113,114,116,117,118,119,121,
	122,123,124,125,126,128,129,130,131,132,133,135,136,137,138,139,
	140,141,142,143,144,146,147,148,149,150,151,152,153,154,155,156,
	157,158,159,160,161,162,163,164,165,166,167,168,169,170,170,171,
	172,173,174,175,176,177,178,179,179,180,181,182,183,184,185,185,
	186,187,188,189,190,190,191,192,193,194,194,195,196,197,198,198,
	199,200,201,201,202,203,204,204,205,206,206,207,208,209,209,210,
	211,211,212,213,213,214,215,216,216,217,218,218,219,219,220,221,
	221,222,223,223,224,225,225,226,226,227,228,228,229,229,230,231,
	231,232,232,233,233,234,235,235,236,236,237,237,238,238,239,239,
	240,240,241,242,242,243,243,244,244,245,245,246,246,247,247,248,
	248,249,249,249,250,250,251,251,252,252,253,253,254,254,255,255,
};

uint8_t decayCurveLookup[]=
{
	0,7,14,20,27,33,40,46,52,57,63,68,73,79,83,88,
	93,98,102,106,110,114,118,122,126,130,133,137,140,143,146,149,
	152,155,158,161,163,166,168,171,173,176,178,180,182,184,186,188,
	190,192,194,195,197,199,200,202,203,205,206,208,209,210,211,213,
	214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,228,
	229,230,231,231,232,233,233,234,234,235,236,236,237,237,238,238,
	239,239,240,240,241,241,241,242,242,243,243,243,244,244,244,245,
	245,245,245,246,246,246,247,247,247,247,247,248,248,248,248,249,
	249,249,249,249,249,250,250,250,250,250,250,251,251,251,251,251,
	251,251,251,252,252,252,252,252,252,252,252,252,252,253,253,253,
	253,253,253,253,253,253,253,253,253,253,253,254,254,254,254,254,
	254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,
	254,254,254,254,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
};
		
uint8_t phaseLookupHi[]=
{                                                                                         
    0x06, 0x06, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t phaseLookupMid[]=
{                                                                                        
    0x90, 0x0C, 0xA2, 0x40, 0xEA, 0xA3, 0x60, 0x13, 0xD0, 0x93, 0x5F, 0x31, 0x08, 0xE0, 0xB9, 0x92,
    0x6B, 0x44, 0x1C, 0xF5, 0xCE, 0xA7, 0x7F, 0x58, 0x31, 0x23, 0x16, 0x08, 0xFA, 0xEC, 0xDF, 0xD1,
    0xC3, 0xB5, 0xA8, 0xA2, 0x9C, 0x96, 0x91, 0x8B, 0x85, 0x7F, 0x7A, 0x74, 0x6E, 0x68, 0x63, 0x5D,
    0x57, 0x51, 0x4C, 0x46, 0x40, 0x3A, 0x39, 0x37, 0x35, 0x33, 0x31, 0x30, 0x2E, 0x2C, 0x2A, 0x28,
    0x26, 0x25, 0x23, 0x21, 0x1F, 0x1D, 0x1C, 0x1B, 0x1A, 0x19, 0x18, 0x17, 0x16, 0x15, 0x14, 0x12,
    0x11, 0x10, 0x0F, 0x0F, 0x0E, 0x0E, 0x0D, 0x0D, 0x0C, 0x0C, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x09,
    0x09, 0x08, 0x08, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t phaseLookupLo[]=
{                                                                                         
    0x69, 0xC3, 0x69, 0x54, 0xBB, 0x91, 0x46, 0xBB, 0xFB, 0xC1, 0xF6, 0xB7, 0x2B, 0xF2, 0xBA, 0x82,
    0x49, 0x11, 0xD9, 0xA0, 0x68, 0x30, 0xF7, 0xBF, 0x87, 0xC7, 0x07, 0x47, 0x88, 0xC8, 0x08, 0x49,
    0x89, 0xC9, 0x0A, 0x4C, 0x8E, 0xD0, 0x13, 0x55, 0x97, 0xDA, 0x1C, 0x5E, 0xA1, 0xE3, 0x25, 0x68,
    0xAA, 0xEC, 0x2F, 0x71, 0xB3, 0xF6, 0x22, 0x4E, 0x7B, 0xA7, 0xD4, 0x00, 0x2D, 0x59, 0x85, 0xB2,
    0xDE, 0x0B, 0x37, 0x64, 0x90, 0xBD, 0xA8, 0x94, 0x7F, 0x6B, 0x57, 0x42, 0x2E, 0x19, 0x05, 0xF1,
    0xDC, 0xC8, 0xB4, 0x3D, 0xC6, 0x4F, 0xD8, 0x61, 0xEA, 0x73, 0xFC, 0x85, 0x0E, 0x97, 0x20, 0xA9,
    0x32, 0xBB, 0x44, 0xCD, 0x56, 0xDF, 0x69, 0x48, 0x27, 0x06, 0xE5, 0xC4, 0xA3, 0x82, 0x61, 0x41,
    0x20, 0xFF, 0xDE, 0xBD, 0x9C, 0x7B, 0x5A, 0x3A, 0x19, 0xF8, 0xD7, 0xB6, 0x95, 0x74, 0x53, 0x33,
    0x71, 0x5C, 0x33, 0x15, 0xF2, 0xD9, 0xBB, 0xA5, 0x8B, 0x78, 0x62, 0x4D, 0x3D, 0x2B, 0x1D, 0x0C,
    0x00, 0xF1, 0xE6, 0xD8, 0xCE, 0xC2, 0xB6, 0xAE, 0x9F, 0x92, 0x85, 0x77, 0x6C, 0x62, 0x58, 0x51,
    0x45, 0x3D, 0x34, 0x2C, 0x25, 0x1E, 0x15, 0x0C, 0x04, 0xFD, 0xF5, 0xEE, 0xE8, 0xE2, 0xDC, 0xD7,
    0xD2, 0xCE, 0xCA, 0xC6, 0xC2, 0xBF, 0xBB, 0xB8, 0xB5, 0xB2, 0xAE, 0xAC, 0xA9, 0xA6, 0xA3, 0xA0,
    0x9D, 0x9B, 0x98, 0x96, 0x93, 0x91, 0x8F, 0x8C, 0x89, 0x86, 0x84, 0x81, 0x7F, 0x7D, 0x7A, 0x79,
    0x77, 0x75, 0x74, 0x72, 0x71, 0x6F, 0x6E, 0x6C, 0x6B, 0x6A, 0x69, 0x68, 0x66, 0x65, 0x64, 0x63,
    0x62, 0x61, 0x60, 0x5F, 0x5F, 0x5E, 0x5E, 0x5E, 0x5D, 0x5D, 0x5D, 0x5C, 0x5C, 0x5B, 0x5B, 0x5B,
    0x5A, 0x5A, 0x5A, 0x59, 0x59, 0x59, 0x58, 0x58, 0x58, 0x57, 0x57, 0x57, 0x56, 0x56, 0x56, 0x56,		
};
			
#endif	/* ADSR_TABLES_H */
