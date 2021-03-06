/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionEffectEventProvider.h>

@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider {

	BOOL _isGeneratingEvents;
	CGPoint _focusPosition;
	CGPoint _lastReportedPosition;

}

@property (assign,nonatomic) CGPoint focusPosition; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)setFocusPosition:(CGPoint)arg1 ;
-(CGPoint)focusPosition;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(BOOL)wantsSynchronizedUpdates;
@end

