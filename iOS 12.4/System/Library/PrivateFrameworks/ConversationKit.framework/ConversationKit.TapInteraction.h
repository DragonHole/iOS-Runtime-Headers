/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView;

@interface ConversationKit.TapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	 view;
	 tapGestureRecognizer;

}

@property (assign,__weak,nonatomic) UIView * view; 
@property (assign,nonatomic) long long numberOfTapsRequired; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)handleRecognizer:(id)arg1 ;
-(id)init;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(long long)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
@end
