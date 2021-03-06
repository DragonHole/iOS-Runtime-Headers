/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETScalarEventTracker;

@interface PPMLocationScored : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(PPMTypeSafeBool_)arg4 timeSpec:(PPMTypeSafeBool_)arg5 timeLimited:(PPMTypeSafeBool_)arg6 exclusionSpec:(PPMTypeSafeBool_)arg7 error:(PPMTypeSafeBool_)arg8 ;
@end

