/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SBUIButton : UIButton {

	UIEdgeInsets _hitAreaAdjustments;

}

@property (assign,nonatomic) UIEdgeInsets hitAreaAdjustments;              //@synthesize hitAreaAdjustments=_hitAreaAdjustments - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitAreaAdjustments:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitAreaAdjustments;
@end

