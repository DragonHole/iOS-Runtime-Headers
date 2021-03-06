/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIButton.h>

@interface ADPrerollButton : UIButton {

	UIEdgeInsets _hitRectInsets;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)dealloc;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
@end

