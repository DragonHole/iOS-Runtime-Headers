/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, NSArray;

@interface HUCCWarningLabelView : UIView {

	UILabel* _warningLabel;
	UIVisualEffectView* _vibrancyEffectView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * warningLabel;                               //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyEffectView;              //@synthesize vibrancyEffectView=_vibrancyEffectView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                //@synthesize constraints=_constraints - In the implementation block
-(id)init;
-(NSArray *)constraints;
-(void)updateConstraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)vibrancyEffectView;
-(void)updateWithContentViewState:(unsigned long long)arg1 currentPage:(unsigned long long)arg2 ;
-(void)setVibrancyEffectView:(UIVisualEffectView *)arg1 ;
@end

