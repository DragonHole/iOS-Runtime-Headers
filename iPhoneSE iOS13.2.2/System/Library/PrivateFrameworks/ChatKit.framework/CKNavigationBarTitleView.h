/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView {

	BOOL _editing;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
-(void)contentDidChange;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)updateIfNeeded:(BOOL)arg1 ;
-(void)_setTrailingItemsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg1 ;
@end
