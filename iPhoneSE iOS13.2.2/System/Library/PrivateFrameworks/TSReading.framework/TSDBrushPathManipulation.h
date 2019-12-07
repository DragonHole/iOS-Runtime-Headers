/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathManipulation.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSDBrushPathManipulation : TSDPathManipulation {

	CGPathRef mBrushStroke;
	double mRepeatLength;
	NSMutableDictionary* mSections;
	NSMutableArray* mMiddleSections;
	NSMutableArray* mSmallSections;
	double mSmallLimitWidth;
	BOOL mSplitAtSharpAngles;

}
@end
