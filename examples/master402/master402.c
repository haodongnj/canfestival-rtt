
/* File generated by gen_cfile.py. Should not be modified. */

#include "master402.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/
UNS16 control_word_6040 = 0x0;		/* Mapped at index 0x2000, subindex 0x00 */
INTEGER8 modes_of_operation_6060 = 0x0;		/* Mapped at index 0x2001, subindex 0x00 */
INTEGER32 target_position_607a = 0x0;		/* Mapped at index 0x2002, subindex 0x00 */
UNS32 profile_velocity_6081 = 0x0;		/* Mapped at index 0x2003, subindex 0x00 */
UNS16 status_word_6041 = 0x0;		/* Mapped at index 0x2004, subindex 0x00 */
INTEGER32 position_actual_value_6063 = 0x0;		/* Mapped at index 0x2005, subindex 0x00 */
INTEGER32 velocity_actual_value_606c = 0x0;		/* Mapped at index 0x2006, subindex 0x00 */

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 master402_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 master402_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 master402_iam_a_slave = 0;

TIMER_HANDLE master402_heartBeatTimers[1] = {TIMER_NONE};

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 master402_obj1000 = 0x0;	/* 0 */
                    subindex master402_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1000, NULL }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 master402_obj1001 = 0x0;	/* 0 */
                    subindex master402_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_obj1001, NULL }
                     };

/* index 0x1003 :   Pre-defined Error Field */
                    UNS8 master402_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 master402_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    subindex master402_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1003, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1003[0], NULL }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 master402_obj1005 = 0x80;	/* 128 */
                    subindex master402_Index1005[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1005, NULL }
                     };

/* index 0x1006 :   Communication / Cycle Period. */
                    UNS32 master402_obj1006 = 0x2710;	/* 10000 */
                    subindex master402_Index1006[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1006, NULL }
                     };

/* index 0x100C :   Guard Time */ 
                    UNS16 master402_obj100C = 0x0;   /* 0 */

/* index 0x100D :   Life Time Factor */ 
                    UNS8 master402_obj100D = 0x0;   /* 0 */

/* index 0x1014 :   Emergency COB ID. */
                    UNS32 master402_obj1014 = 0x80;	/* 128 */
                    subindex master402_Index1014[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1014, NULL }
                     };

/* index 0x1016 :   Consumer Heartbeat Time. */
                    UNS8 master402_highestSubIndex_obj1016 = 1; /* number of subindex - 1*/
                    UNS32 master402_obj1016[] = 
                    {
                      0x0	/* 0 */
                    };
                    subindex master402_Index1016[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1016, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1016[0], NULL }
                     };

/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 master402_obj1017 = 0x0;	/* 0 */
                    subindex master402_Index1017[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1017, NULL }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 master402_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 master402_obj1018_Vendor_ID = 0x123456;	/* 1193046 */
                    UNS32 master402_obj1018_Product_Code = 0x1;	/* 1 */
                    UNS32 master402_obj1018_Revision_Number = 0x1;	/* 1 */
                    UNS32 master402_obj1018_Serial_Number = 0x12345678;	/* 305419896 */
                    subindex master402_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1018, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1018_Vendor_ID, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1018_Product_Code, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1018_Revision_Number, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1018_Serial_Number, NULL }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 master402_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 master402_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 master402_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex master402_Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1200, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1200_COB_ID_Client_to_Server_Receive_SDO, NULL },
                       { RO, uint32, sizeof (UNS32), (void*)&master402_obj1200_COB_ID_Server_to_Client_Transmit_SDO, NULL }
                     };

/* index 0x1280 :   Client SDO 1 Parameter. */
                    UNS8 master402_highestSubIndex_obj1280 = 3; /* number of subindex - 1*/
                    UNS32 master402_obj1280_COB_ID_Client_to_Server_Transmit_SDO = 0x602;	/* 1538 */
                    UNS32 master402_obj1280_COB_ID_Server_to_Client_Receive_SDO = 0x582;	/* 1410 */
                    UNS8 master402_obj1280_Node_ID_of_the_SDO_Server = 0x2;	/* 2 */
                    subindex master402_Index1280[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1280, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1280_COB_ID_Client_to_Server_Transmit_SDO, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1280_COB_ID_Server_to_Client_Receive_SDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1280_Node_ID_of_the_SDO_Server, NULL }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 master402_highestSubIndex_obj1400 = 6; /* number of subindex - 1*/
                    UNS32 master402_obj1400_COB_ID_used_by_PDO = 0x182;	/* 386 */
                    UNS8 master402_obj1400_Transmission_Type = 0x1;	/* 1 */
                    UNS16 master402_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 master402_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 master402_obj1400_Event_Timer = 0x0;	/* 0 */
                    UNS8 master402_obj1400_SYNC_start_value = 0x0;	/* 0 */
                    subindex master402_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1400, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1400_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1400_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1400_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1400_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1400_Event_Timer, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1400_SYNC_start_value, NULL }
                     };

/* index 0x1401 :   Receive PDO 2 Parameter. */
                    UNS8 master402_highestSubIndex_obj1401 = 6; /* number of subindex - 1*/
                    UNS32 master402_obj1401_COB_ID_used_by_PDO = 0x282;	/* 642 */
                    UNS8 master402_obj1401_Transmission_Type = 0x1;	/* 1 */
                    UNS16 master402_obj1401_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 master402_obj1401_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 master402_obj1401_Event_Timer = 0x0;	/* 0 */
                    UNS8 master402_obj1401_SYNC_start_value = 0x0;	/* 0 */
                    subindex master402_Index1401[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1401, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1401_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1401_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1401_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1401_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1401_Event_Timer, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1401_SYNC_start_value, NULL }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 master402_highestSubIndex_obj1600 = 2; /* number of subindex - 1*/
                    UNS32 master402_obj1600[] = 
                    {
                      0x20040010,	/* 537133072 */
                      0x20050020	/* 537198624 */
                    };
                    subindex master402_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1600, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1600[0], NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1600[1], NULL }
                     };

/* index 0x1601 :   Receive PDO 2 Mapping. */
                    UNS8 master402_highestSubIndex_obj1601 = 1; /* number of subindex - 1*/
                    UNS32 master402_obj1601[] = 
                    {
                      0x20060020	/* 537264160 */
                    };
                    subindex master402_Index1601[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1601, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1601[0], NULL }
                     };

/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 master402_highestSubIndex_obj1800 = 6; /* number of subindex - 1*/
                    UNS32 master402_obj1800_COB_ID_used_by_PDO = 0x202;	/* 514 */
                    UNS8 master402_obj1800_Transmission_Type = 0x1;	/* 1 */
                    UNS16 master402_obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 master402_obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 master402_obj1800_Event_Timer = 0x0;	/* 0 */
                    UNS8 master402_obj1800_SYNC_start_value = 0x0;	/* 0 */
                    subindex master402_Index1800[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1800, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1800_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1800_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1800_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1800_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1800_Event_Timer, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1800_SYNC_start_value, NULL }
                     };

/* index 0x1801 :   Transmit PDO 2 Parameter. */
                    UNS8 master402_highestSubIndex_obj1801 = 6; /* number of subindex - 1*/
                    UNS32 master402_obj1801_COB_ID_used_by_PDO = 0x302;	/* 770 */
                    UNS8 master402_obj1801_Transmission_Type = 0x1;	/* 1 */
                    UNS16 master402_obj1801_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 master402_obj1801_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 master402_obj1801_Event_Timer = 0x0;	/* 0 */
                    UNS8 master402_obj1801_SYNC_start_value = 0x0;	/* 0 */
                    subindex master402_Index1801[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1801, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1801_COB_ID_used_by_PDO, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1801_Transmission_Type, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1801_Inhibit_Time, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1801_Compatibility_Entry, NULL },
                       { RW, uint16, sizeof (UNS16), (void*)&master402_obj1801_Event_Timer, NULL },
                       { RW, uint8, sizeof (UNS8), (void*)&master402_obj1801_SYNC_start_value, NULL }
                     };

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 master402_highestSubIndex_obj1A00 = 2; /* number of subindex - 1*/
                    UNS32 master402_obj1A00[] = 
                    {
                      0x20000010,	/* 536870928 */
                      0x20010008	/* 536936456 */
                    };
                    subindex master402_Index1A00[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1A00, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1A00[0], NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1A00[1], NULL }
                     };

/* index 0x1A01 :   Transmit PDO 2 Mapping. */
                    UNS8 master402_highestSubIndex_obj1A01 = 2; /* number of subindex - 1*/
                    UNS32 master402_obj1A01[] = 
                    {
                      0x20020020,	/* 537002016 */
                      0x20030020	/* 537067552 */
                    };
                    subindex master402_Index1A01[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&master402_highestSubIndex_obj1A01, NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1A01[0], NULL },
                       { RW, uint32, sizeof (UNS32), (void*)&master402_obj1A01[1], NULL }
                     };

/* index 0x2000 :   Mapped variable control_word_6040 */
                    subindex master402_Index2000[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&control_word_6040, NULL }
                     };

/* index 0x2001 :   Mapped variable modes_of_operation_6060 */
                    subindex master402_Index2001[] = 
                     {
                       { RW, int8, sizeof (INTEGER8), (void*)&modes_of_operation_6060, NULL }
                     };

/* index 0x2002 :   Mapped variable target_position_607a */
                    subindex master402_Index2002[] = 
                     {
                       { RW, int32, sizeof (INTEGER32), (void*)&target_position_607a, NULL }
                     };

/* index 0x2003 :   Mapped variable profile_velocity_6081 */
                    subindex master402_Index2003[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&profile_velocity_6081, NULL }
                     };

/* index 0x2004 :   Mapped variable status_word_6041 */
                    subindex master402_Index2004[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&status_word_6041, NULL }
                     };

/* index 0x2005 :   Mapped variable position_actual_value_6063 */
                    subindex master402_Index2005[] = 
                     {
                       { RW, int32, sizeof (INTEGER32), (void*)&position_actual_value_6063, NULL }
                     };

/* index 0x2006 :   Mapped variable velocity_actual_value_606c */
                    subindex master402_Index2006[] = 
                     {
                       { RW, int32, sizeof (INTEGER32), (void*)&velocity_actual_value_606c, NULL }
                     };

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable master402_objdict[] = 
{
  { (subindex*)master402_Index1000,sizeof(master402_Index1000)/sizeof(master402_Index1000[0]), 0x1000},
  { (subindex*)master402_Index1001,sizeof(master402_Index1001)/sizeof(master402_Index1001[0]), 0x1001},
  { (subindex*)master402_Index1005,sizeof(master402_Index1005)/sizeof(master402_Index1005[0]), 0x1005},
  { (subindex*)master402_Index1006,sizeof(master402_Index1006)/sizeof(master402_Index1006[0]), 0x1006},
  { (subindex*)master402_Index1014,sizeof(master402_Index1014)/sizeof(master402_Index1014[0]), 0x1014},
  { (subindex*)master402_Index1016,sizeof(master402_Index1016)/sizeof(master402_Index1016[0]), 0x1016},
  { (subindex*)master402_Index1017,sizeof(master402_Index1017)/sizeof(master402_Index1017[0]), 0x1017},
  { (subindex*)master402_Index1018,sizeof(master402_Index1018)/sizeof(master402_Index1018[0]), 0x1018},
  { (subindex*)master402_Index1200,sizeof(master402_Index1200)/sizeof(master402_Index1200[0]), 0x1200},
  { (subindex*)master402_Index1280,sizeof(master402_Index1280)/sizeof(master402_Index1280[0]), 0x1280},
  { (subindex*)master402_Index1400,sizeof(master402_Index1400)/sizeof(master402_Index1400[0]), 0x1400},
  { (subindex*)master402_Index1401,sizeof(master402_Index1401)/sizeof(master402_Index1401[0]), 0x1401},
  { (subindex*)master402_Index1600,sizeof(master402_Index1600)/sizeof(master402_Index1600[0]), 0x1600},
  { (subindex*)master402_Index1601,sizeof(master402_Index1601)/sizeof(master402_Index1601[0]), 0x1601},
  { (subindex*)master402_Index1800,sizeof(master402_Index1800)/sizeof(master402_Index1800[0]), 0x1800},
  { (subindex*)master402_Index1801,sizeof(master402_Index1801)/sizeof(master402_Index1801[0]), 0x1801},
  { (subindex*)master402_Index1A00,sizeof(master402_Index1A00)/sizeof(master402_Index1A00[0]), 0x1A00},
  { (subindex*)master402_Index1A01,sizeof(master402_Index1A01)/sizeof(master402_Index1A01[0]), 0x1A01},
  { (subindex*)master402_Index2000,sizeof(master402_Index2000)/sizeof(master402_Index2000[0]), 0x2000},
  { (subindex*)master402_Index2001,sizeof(master402_Index2001)/sizeof(master402_Index2001[0]), 0x2001},
  { (subindex*)master402_Index2002,sizeof(master402_Index2002)/sizeof(master402_Index2002[0]), 0x2002},
  { (subindex*)master402_Index2003,sizeof(master402_Index2003)/sizeof(master402_Index2003[0]), 0x2003},
  { (subindex*)master402_Index2004,sizeof(master402_Index2004)/sizeof(master402_Index2004[0]), 0x2004},
  { (subindex*)master402_Index2005,sizeof(master402_Index2005)/sizeof(master402_Index2005[0]), 0x2005},
  { (subindex*)master402_Index2006,sizeof(master402_Index2006)/sizeof(master402_Index2006[0]), 0x2006},
};

const indextable * master402_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode)
{
	int i;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1005: i = 2;break;
		case 0x1006: i = 3;break;
		case 0x1014: i = 4;break;
		case 0x1016: i = 5;break;
		case 0x1017: i = 6;break;
		case 0x1018: i = 7;break;
		case 0x1200: i = 8;break;
		case 0x1280: i = 9;break;
		case 0x1400: i = 10;break;
		case 0x1401: i = 11;break;
		case 0x1600: i = 12;break;
		case 0x1601: i = 13;break;
		case 0x1800: i = 14;break;
		case 0x1801: i = 15;break;
		case 0x1A00: i = 16;break;
		case 0x1A01: i = 17;break;
		case 0x2000: i = 18;break;
		case 0x2001: i = 19;break;
		case 0x2002: i = 20;break;
		case 0x2003: i = 21;break;
		case 0x2004: i = 22;break;
		case 0x2005: i = 23;break;
		case 0x2006: i = 24;break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &master402_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status master402_PDO_status[2] = {s_PDO_status_Initializer,s_PDO_status_Initializer};

const quick_index master402_firstIndex = {
  8, /* SDO_SVR */
  9, /* SDO_CLT */
  10, /* PDO_RCV */
  12, /* PDO_RCV_MAP */
  14, /* PDO_TRS */
  16 /* PDO_TRS_MAP */
};

const quick_index master402_lastIndex = {
  8, /* SDO_SVR */
  9, /* SDO_CLT */
  11, /* PDO_RCV */
  13, /* PDO_RCV_MAP */
  15, /* PDO_TRS */
  17 /* PDO_TRS_MAP */
};

const UNS16 master402_ObjdictSize = sizeof(master402_objdict)/sizeof(master402_objdict[0]); 

CO_Data master402_Data = CANOPEN_NODE_DATA_INITIALIZER(master402);

