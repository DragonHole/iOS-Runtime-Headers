/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface _TVRMatchPointArtworkView : UIView {

	UIView* _selectIndicator;
	UIImageView* _upImageView;
	UIImageView* _rightImageView;
	UIImageView* _downImageView;
	UIImageView* _leftImageView;

}
-(void)highlightForButtonType:(long long)arg1 enabled:(BOOL)arg2 ;
-(BOOL)touchLocationIsConsideredCenter:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

