/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>

@interface UIKeyboardDictationMenu : UIKeyboardMenuView
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide;
-(void)fade;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(void)willShow;
-(CGSize)preferredSize;
-(void)cleanupForFadeOrHide;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
-(BOOL)usesDimmingView;
@end

