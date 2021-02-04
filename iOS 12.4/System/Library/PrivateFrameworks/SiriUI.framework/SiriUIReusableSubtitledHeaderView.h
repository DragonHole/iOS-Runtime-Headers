/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, UILabel, NSString;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView {

	NSAttributedString* _attributedSubtitleText;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
+(double)defaultHeight;
-(double)desiredHeightForWidth:(double)arg1 ;
-(NSString *)subtitleText;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)_configureSubTitleLabelForBounds:(CGRect)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
