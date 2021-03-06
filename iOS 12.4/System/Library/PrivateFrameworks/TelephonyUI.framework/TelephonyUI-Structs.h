/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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

typedef struct __CFSet* CFSetRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	CGRect rect;
	double cornerRadius;
} SCD_Struct_TP5;

typedef struct {
	CGSize size;
	SCD_Struct_TP5 outerPath;
	SCD_Struct_TP5 innerPath;
	BOOL isCircle;
	BOOL drawsOutsideOuterPath;
} SCD_Struct_TP6;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct __CFUserNotification* CFUserNotificationRef;

