/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardInput <NSObject>
@optional
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(BOOL)keyboardInputShouldDelete:(id)arg1;
-(BOOL)keyboardInputChanged:(id)arg1;
-(void)keyboardInputChangedSelection:(id)arg1;

@end
