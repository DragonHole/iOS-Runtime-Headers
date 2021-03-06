/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI101 _previousState;
	unsigned long long _activeComponent;

}
-(long long)type;
-(void)_reset;
-(long long)subtype;
-(void)_maybeConvertAndSendAsPressesEvent;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processLeftStick:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processRightStick:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processShoulder:(SCD_Struct_UI101*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
@end

