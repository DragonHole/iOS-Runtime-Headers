/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol EKLayoutContainerViewDelegate;
@interface EKLayoutContainerView : UIView {

	id<EKLayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKLayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<EKLayoutContainerViewDelegate>)delegate;
-(void)setDelegate:(id<EKLayoutContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
@end

