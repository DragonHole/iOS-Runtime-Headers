/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	CGPoint field2;
	CGPoint field3;
} SCD_Struct_SB1;

typedef struct {
	double field1;
	BOOL field2;
} SCD_Struct_SB2;

typedef struct {
	SCD_Struct_SB2 field1;
	SCD_Struct_SB2 field2;
} SCD_Struct_SB3;

typedef struct __CFString* CFStringRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct _MKBEvent* MKBEventRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_SB7;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct CGImage* CGImageRef;

typedef struct __MKBAssertion* MKBAssertionRef;

typedef struct __ACMHandle* ACMHandleRef;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
	BOOL field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
} SCD_Struct_SB16;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
	double field5;
	double field6;
	double field7;
	long long field8;
} SCD_Struct_SB17;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_SB18;

typedef struct SBNormalizedTransitionInterval {
	double start;
	double duration;
} SBNormalizedTransitionInterval;

typedef struct {
	double x;
	double y;
	double z;
	double w;
} SCD_Struct_SB20;

typedef struct CGGradient* CGGradientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;
