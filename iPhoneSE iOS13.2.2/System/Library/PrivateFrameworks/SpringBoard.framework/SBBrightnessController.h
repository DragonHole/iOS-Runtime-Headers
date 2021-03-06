/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBBrightnessController : NSObject {

	BOOL _debounce;
	BKSDisplayBrightnessTransactionRef _brightnessDownTransaction;
	BKSDisplayBrightnessTransactionRef _brightnessUpTransaction;
	NSMutableArray* _maximumBrightnessAssertions;

}
+(id)sharedBrightnessController;
-(void)setBrightnessLevel:(float)arg1 ;
-(void)handleBrightnessEvent:(IOHIDEventRef)arg1 ;
-(void)cancelBrightnessEvent;
-(float)_calcButtonRepeatDelay;
-(void)_increaseBrightnessAndRepeat;
-(void)_decreaseBrightnessAndRepeat;
-(void)_exitMaximumBrightnessMode;
-(void)_enterMaximumBrightnessMode;
-(void)_setBrightnessLevel:(float)arg1 showHUD:(BOOL)arg2 ;
-(void)_adjustBacklightLevel:(BOOL)arg1 ;
-(id)acquireMaximumBrightnessAssertionForReason:(id)arg1 ;
@end

