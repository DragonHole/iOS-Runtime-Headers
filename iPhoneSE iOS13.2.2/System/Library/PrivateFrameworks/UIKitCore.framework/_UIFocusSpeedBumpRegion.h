/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {

	unsigned long long _speedBumpEdges;

}

@property (assign,nonatomic) unsigned long long speedBumpEdges;              //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 speedBumpEdges:(unsigned long long)arg2 ;
-(unsigned long long)speedBumpEdges;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
@end

