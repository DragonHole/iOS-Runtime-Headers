/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@protocol HUHomePodDetailViewDelegate;
@class UILabel, UIView, HUMonogramView;

@interface HUHomePodDetailView : UIButton {

	BOOL _isAnimatingPop;
	unsigned long long _role;
	UILabel* _unitNameLabel;
	UIView* _unitImageView;
	HUMonogramView* _unitBadgeLabel;
	id<HUHomePodDetailViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isAnimatingPop;                                          //@synthesize isAnimatingPop=_isAnimatingPop - In the implementation block
@property (nonatomic,copy) id<HFStringGenerator> unitName; 
@property (nonatomic,readonly) unsigned long long role;                                    //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) UILabel * unitNameLabel;                                    //@synthesize unitNameLabel=_unitNameLabel - In the implementation block
@property (nonatomic,readonly) UIView * unitImageView;                                     //@synthesize unitImageView=_unitImageView - In the implementation block
@property (nonatomic,readonly) HUMonogramView * unitBadgeLabel;                            //@synthesize unitBadgeLabel=_unitBadgeLabel - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupConstraints;
-(void)_updateImagesForRole;
-(void)_speakerTapped;
-(HUMonogramView *)unitBadgeLabel;
-(UIView *)unitImageView;
-(UILabel *)unitNameLabel;
-(BOOL)isAnimatingPop;
-(void)setIsAnimatingPop:(BOOL)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 ;
-(void)setUnitName:(id<HFStringGenerator>)arg1 ;
-(id<HFStringGenerator>)unitName;
-(unsigned long long)role;
-(void)setDelegate:(id<HUHomePodDetailViewDelegate>)arg1 ;
-(id<HUHomePodDetailViewDelegate>)delegate;
@end

