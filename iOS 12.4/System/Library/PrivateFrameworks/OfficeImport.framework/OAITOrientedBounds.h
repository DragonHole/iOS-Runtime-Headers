/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAITOrientedBounds : NSObject
+(id)absoluteOrientedBoundsOfDrawable:(id)arg1 ;
+(float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2 ;
+(CGAffineTransform)transformFromBounds:(CGRect)arg1 toOrientedBounds:(id)arg2 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(id)relativeOrientedBoundsOfDrawable:(id)arg1 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(CGRect)arg2 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 ;
+(CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1 ;
@end

