/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@interface UIMoveEvent : UIEvent {

	long long _moveDirection;
	unsigned long long _focusHeading;

}

@property (assign,setter=_setMoveDirection:,nonatomic) long long _moveDirection;                     //@synthesize moveDirection=_moveDirection - In the implementation block
@property (assign,setter=_setFocusHeading:,nonatomic) unsigned long long _focusHeading;              //@synthesize focusHeading=_focusHeading - In the implementation block
-(long long)type;
-(unsigned long long)_focusHeading;
-(long long)_moveDirection;
-(void)_setFocusHeading:(unsigned long long)arg1 ;
-(void)_setMoveDirection:(long long)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
@end

