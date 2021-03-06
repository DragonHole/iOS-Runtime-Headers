/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString;

@interface PKStackedLabelCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _isRTL;
	NSString* _titleText;
	NSString* _detailText;

}

@property (nonatomic,copy) NSString * titleText;               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(NSString *)titleText;
-(void)_applyLabelStyles;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
@end

