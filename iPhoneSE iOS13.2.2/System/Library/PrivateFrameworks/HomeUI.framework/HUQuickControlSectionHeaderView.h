/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UILabel, NSArray;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView {

	NSString* _titleText;
	UILabel* _titleLabel;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
+(id)_titleFont;
+(BOOL)requiresConstraintBasedLayout;
+(double)estimatedHeight;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
@end

