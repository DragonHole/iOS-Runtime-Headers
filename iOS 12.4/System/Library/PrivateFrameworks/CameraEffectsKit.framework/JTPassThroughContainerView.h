/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol JTPassThroughContainerViewDelegate;
@interface JTPassThroughContainerView : UIView {

	id<JTPassThroughContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<JTPassThroughContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<JTPassThroughContainerViewDelegate>)arg1 ;
-(id<JTPassThroughContainerViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

