/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView {

	BOOL _textColorFollowsTintColor;
	BOOL _shouldShowRoomName;
	double _lineHeight;
	HFServiceNameComponents* _serviceNameComponents;
	NSString* _descriptionText;
	UIColor* _textColor;
	double _descriptionTextColorDimmingFactor;
	UIFont* _font;
	unsigned long long _mode;

}

@property (assign,nonatomic) unsigned long long mode;                                      //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) HFServiceNameComponents * serviceNameComponents;              //@synthesize serviceNameComponents=_serviceNameComponents - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                               //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) double descriptionTextColorDimmingFactor;                     //@synthesize descriptionTextColorDimmingFactor=_descriptionTextColorDimmingFactor - In the implementation block
@property (assign,nonatomic) double lineHeight;                                            //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRoomName;                                      //@synthesize shouldShowRoomName=_shouldShowRoomName - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) double topToFirstBaselineDistance; 
@property (nonatomic,readonly) double lastBaselineToBottomDistance; 
+(double)minimumDescriptionScaleFactor;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(void)_updateMode;
-(id)_commonTextAttributesWithLineBreakMode:(long long)arg1 ;
-(id)_combinedAttributedString;
-(HFServiceNameComponents *)serviceNameComponents;
-(BOOL)shouldShowRoomName;
-(void)_drawSeperateLabels;
-(void)_drawCombinedLabel;
-(void)_drawDescriptionLabel;
-(id)_effectiveTextColor;
-(double)descriptionTextColorDimmingFactor;
-(void)setServiceNameComponents:(HFServiceNameComponents *)arg1 ;
-(void)setShouldShowRoomName:(BOOL)arg1 ;
-(double)topToFirstBaselineDistance;
-(double)lastBaselineToBottomDistance;
-(void)setDescriptionTextColorDimmingFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)lineHeight;
-(UIColor *)textColor;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setLineHeight:(double)arg1 ;
@end
