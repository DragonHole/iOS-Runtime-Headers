/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NSArray, NSDictionary;

@interface NTKBezierPathPointModel : NSObject {

	UIBezierPath* _path;
	NSArray* _pathElements;
	NSDictionary* _horizontalPercentageCache;

}

@property (nonatomic,readonly) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
-(id)_buildHorizontalPercentageCache;
-(CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1 ;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
-(UIBezierPath *)path;
-(id)initWithPath:(id)arg1 ;
@end

