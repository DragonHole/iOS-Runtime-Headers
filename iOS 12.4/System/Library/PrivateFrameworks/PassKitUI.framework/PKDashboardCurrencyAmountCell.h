/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKCurrencyAmount, UILabel;

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {

	NSString* _titleString;
	PKCurrencyAmount* _currencyAmount;
	UILabel* _titleLabel;
	UILabel* _currencyLabel;
	BOOL _showsPositivePrefix;
	NSString* _detailString;
	PKCurrencyAmount* _amount;

}

@property (nonatomic,copy) NSString * titleString;                  //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * detailString;                 //@synthesize detailString=_detailString - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * amount;               //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) BOOL showsPositivePrefix;              //@synthesize showsPositivePrefix=_showsPositivePrefix - In the implementation block
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)setShowsPositivePrefix:(BOOL)arg1 ;
-(void)resetFonts;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(void)_updateCurrencyLabel;
-(BOOL)_shouldUseStackedLayout;
-(BOOL)showsPositivePrefix;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(PKCurrencyAmount *)amount;
-(NSString *)detailString;
-(void)setDetailString:(NSString *)arg1 ;
@end

