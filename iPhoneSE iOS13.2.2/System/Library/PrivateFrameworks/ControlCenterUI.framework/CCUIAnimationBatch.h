/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject {

	NSMutableDictionary* _animationsByParameters;

}
-(id)init;
-(void)addAnimation:(id)arg1 ;
-(void)iterateAnimationsWithBlock:(/*^block*/id)arg1 ;
-(void)iterateAnimationsOfType:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end

