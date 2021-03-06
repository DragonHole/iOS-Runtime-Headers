/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBClickGestureRecognizer.h>

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {

	BOOL _firstEventAfterClicksWasReceived;
	double _minimumPressDuration;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired; 
@property (assign,nonatomic) double minimumPressDuration;                            //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
@end

