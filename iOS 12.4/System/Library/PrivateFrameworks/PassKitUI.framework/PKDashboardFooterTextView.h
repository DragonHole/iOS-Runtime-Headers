/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString;

@interface PKDashboardFooterTextView : PKDashboardCollectionViewCell {

	UILabel* _footerLabel;
	BOOL _isTemplateLayout;
	NSString* _footerText;

}

@property (nonatomic,copy) NSString * footerText;                 //@synthesize footerText=_footerText - In the implementation block
@property (assign,nonatomic) double horizontalInset; 
+(double)defaultHorizontalInset;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)resetFonts;
-(void)setFooterText:(NSString *)arg1 ;
-(void)createSubviews;
-(NSString *)footerText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

