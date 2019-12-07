/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKPaymentTransactionDetailHeaderView : UIView {

	UILabel* _amountLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	BOOL _isTemplateLayout;
	BOOL _inBridge;
	NSString* _amountText;
	NSString* _subtitleText;
	NSString* _secondarySubtitleText;
	NSString* _tertiarySubtitleText;

}

@property (assign,nonatomic) BOOL inBridge;                               //@synthesize inBridge=_inBridge - In the implementation block
@property (nonatomic,copy) NSString * amountText;                         //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSString * secondarySubtitleText;              //@synthesize secondarySubtitleText=_secondarySubtitleText - In the implementation block
@property (nonatomic,copy) NSString * tertiarySubtitleText;               //@synthesize tertiarySubtitleText=_tertiarySubtitleText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)setAmountText:(NSString *)arg1 ;
-(void)setSecondarySubtitleText:(NSString *)arg1 ;
-(void)setTertiarySubtitleText:(NSString *)arg1 ;
-(BOOL)inBridge;
-(void)setInBridge:(BOOL)arg1 ;
-(NSString *)amountText;
-(NSString *)secondarySubtitleText;
-(NSString *)tertiarySubtitleText;
@end
