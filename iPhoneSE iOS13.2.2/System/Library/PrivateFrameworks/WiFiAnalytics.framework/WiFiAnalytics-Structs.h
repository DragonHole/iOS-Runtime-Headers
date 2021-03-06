/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_Wi1;

typedef struct {
	unsigned timestamp : 1;
	unsigned txDeferDuration : 1;
	unsigned txPriDuration : 1;
	unsigned txaDuration : 1;
	unsigned ackTxPowerBackoffCount : 1;
	unsigned txDeferredCount : 1;
	unsigned txMuteCount : 1;
	unsigned txPathEnableReqCount : 1;
	unsigned txPathMuteCount : 1;
	unsigned txPriorityCount : 1;
	unsigned txaONCount : 1;
	unsigned txaPORCount : 1;
	unsigned txaTimeoutCount : 1;
} SCD_Struct_Wi2;

typedef struct {
	unsigned rxbadfcs : 1;
	unsigned rxbadplcp : 1;
	unsigned rxcrsglitch : 1;
	unsigned rxfrmtoolong : 1;
	unsigned rxfrmtooshrt : 1;
	unsigned rxinvmachdr : 1;
	unsigned rxstrt : 1;
} SCD_Struct_Wi3;

typedef struct {
	unsigned timestamp : 1;
	unsigned realTimeSessionStateResultingInSubmission : 1;
} SCD_Struct_Wi4;

typedef struct {
	unsigned aTIM : 1;
	unsigned action : 1;
	unsigned assocRequest : 1;
	unsigned assocResponse : 1;
	unsigned auth : 1;
	unsigned beacon : 1;
	unsigned deauth : 1;
	unsigned disassoc : 1;
	unsigned probeRequest : 1;
	unsigned probeResponse : 1;
	unsigned reassocRequest : 1;
	unsigned reassocResponse : 1;
} SCD_Struct_Wi5;

typedef struct {
	unsigned txchanrej : 1;
	unsigned txexptime : 1;
	unsigned txphycrs : 1;
	unsigned txphyerr : 1;
	unsigned txuflo : 1;
} SCD_Struct_Wi6;

typedef struct {
	unsigned rxbadcm : 1;
	unsigned rxbadda : 1;
	unsigned rxbadds : 1;
	unsigned rxbadproto : 1;
	unsigned rxbadsrcmac : 1;
	unsigned rxbyte : 1;
	unsigned rxctl : 1;
	unsigned rxerror : 1;
	unsigned rxfilter : 1;
	unsigned rxfragerr : 1;
	unsigned rxframe : 1;
	unsigned rxgiant : 1;
	unsigned rxnobuf : 1;
	unsigned rxnondata : 1;
	unsigned rxnoscb : 1;
	unsigned rxrtry : 1;
	unsigned rxrunt : 1;
} SCD_Struct_Wi7;

typedef struct {
	unsigned rxackucast : 1;
	unsigned rxcfrmmcast : 1;
	unsigned rxcfrmocast : 1;
	unsigned rxcfrmucast : 1;
	unsigned rxctsocast : 1;
	unsigned rxctsucast : 1;
	unsigned rxdfrmmcast : 1;
	unsigned rxdfrmocast : 1;
	unsigned rxdfrmucastmbss : 1;
	unsigned rxmfrmmcast : 1;
	unsigned rxmfrmocast : 1;
	unsigned rxmfrmucastmbss : 1;
	unsigned rxrtsocast : 1;
	unsigned rxrtsucast : 1;
} SCD_Struct_Wi8;

typedef struct {
	unsigned bphyBadplcp : 1;
	unsigned bphyRxcrsglitch : 1;
	unsigned rfdisable : 1;
} SCD_Struct_Wi9;

typedef struct {
	unsigned ack : 1;
	unsigned blockAck : 1;
	unsigned blockAckRequest : 1;
	unsigned cFend : 1;
	unsigned cFendCFack : 1;
	unsigned cts : 1;
	unsigned psPoll : 1;
	unsigned rts : 1;
} SCD_Struct_Wi10;

