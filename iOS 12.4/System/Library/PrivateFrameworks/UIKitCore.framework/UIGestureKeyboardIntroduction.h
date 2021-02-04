/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIKeyboardLayoutStar, UIView, UIKBKeyView, NSTimer;

@interface UIGestureKeyboardIntroduction : NSObject {

	UIKeyboardLayoutStar* m_layout;
	UIView* m_view;
	UIKBKeyView* m_firstKeyView;
	UIKBKeyView* m_secondKeyView;
	/*^block*/id m_completionBlock;
	double m_start;
	NSTimer* m_gestureKeyboardInfoTimer;
	CGPoint m_initPoint;
	BOOL m_isInTransition;
	BOOL m_hasPeeked;
	unsigned long long m_insertedTextLength;

}
-(void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)dismissGestureKeyboardIntroduction:(id)arg1 ;
-(void)playGestureKeyboardIntroduction:(id)arg1 ;
-(void)insertText:(id)arg1 forKey:(id)arg2 ;
-(id)initWithLayoutStar:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showGestureKeyboardIntroduction;
-(void)dismissGestureKeyboardIntroduction;
@end
