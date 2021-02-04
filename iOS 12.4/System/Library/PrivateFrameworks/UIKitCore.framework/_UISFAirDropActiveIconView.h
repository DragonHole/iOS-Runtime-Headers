/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView;

@interface _UISFAirDropActiveIconView : UIImageView {

	UIView* _circleMaskView;
	BOOL _masked;

}

@property (assign,getter=isMasked,nonatomic) BOOL masked;              //@synthesize masked=_masked - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 grayscale:(BOOL)arg2 ;
-(void)setMasked:(BOOL)arg1 ;
-(BOOL)isMasked;
@end
