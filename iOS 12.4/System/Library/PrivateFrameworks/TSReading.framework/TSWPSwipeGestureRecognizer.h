/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class TSUPointerKeyDictionary;

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer {

	double mStartTime;
	unsigned long long mTouchCountAttained;
	TSUPointerKeyDictionary* mStartLocations;
	int mDirection;
	unsigned long long mNumberOfTouchesRequired;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired; 
@property (assign,nonatomic) int direction; 
-(double)p_angleDifferenceForAngle1:(double)arg1 angle2:(double)arg2 ;
-(BOOL)p_swipeDirectionValidForAngle:(double)arg1 direction:(int)arg2 ;
-(BOOL)p_swipeDirectionValidForXDiff:(double)arg1 yDiff:(double)arg2 ;
-(void)p_recordTouches:(id)arg1 ;
-(BOOL)p_touchWasSwipe:(id)arg1 movedFarOut:(BOOL*)arg2 ;
-(void)dealloc;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
@end

