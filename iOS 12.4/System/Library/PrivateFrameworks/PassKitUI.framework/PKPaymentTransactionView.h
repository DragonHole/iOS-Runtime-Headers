/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage, CNAvatarView, NSAttributedString;

@interface PKPaymentTransactionView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _rewardsAmountLabel;
	UILabel* _transactionValueLabel;
	UIImageView* _primaryImageView;
	UIImageView* _disclosureView;
	BOOL _isTemplateLayout;
	BOOL _hideRewardsBackground;
	BOOL _showsAvatarView;
	BOOL _showsDisclosureView;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	UIImage* _primaryImage;
	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) UIColor * primaryColor;                                           //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                         //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                         //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                       //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                                        //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) NSAttributedString * transactionValueAttributedText; 
@property (nonatomic,retain) NSString * rewardsValueString; 
@property (assign,nonatomic) BOOL hideRewardsBackground;                                       //@synthesize hideRewardsBackground=_hideRewardsBackground - In the implementation block
@property (assign,nonatomic) BOOL showsAvatarView;                                             //@synthesize showsAvatarView=_showsAvatarView - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureView;                                         //@synthesize showsDisclosureView=_showsDisclosureView - In the implementation block
@property (nonatomic,retain) UIImage * primaryImage;                                           //@synthesize primaryImage=_primaryImage - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;                                      //@synthesize avatarView=_avatarView - In the implementation block
+(id)defaultTertiaryLabelFont;
-(CNAvatarView *)avatarView;
-(void)_updateAvatarView;
-(BOOL)showsAvatarView;
-(void)setShowsAvatarView:(BOOL)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)setPrimaryImage:(UIImage *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)setPrimaryImage:(id)arg1 strokeImage:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setTransactionValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowsDisclosureView:(BOOL)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setRewardsValueString:(NSString *)arg1 ;
-(id)_disclosureView;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(BOOL)_shouldUseStackedLayout;
-(NSString *)primaryString;
-(NSString *)secondaryString;
-(NSString *)tertiaryString;
-(void)createSubviews;
-(double)_defaultLayoutHeight;
-(void)setHideRewardsBackground:(BOOL)arg1 ;
-(NSString *)rewardsValueString;
-(NSAttributedString *)transactionValueAttributedText;
-(BOOL)shouldShowTransactionPreviewForTouchAtPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(BOOL)hideRewardsBackground;
-(BOOL)showsDisclosureView;
-(UIImage *)primaryImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
@end

