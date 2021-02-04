/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class UILabel, NSMutableArray;

@interface TLKContentsView : TLKStackView {

	unsigned long long _style;
	UILabel* _titleLabel;
	NSMutableArray* _detailsLabels;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) NSMutableArray * detailsLabels;                  //@synthesize detailsLabels=_detailsLabels - In the implementation block
+(id)detailsLabelWithStyle:(unsigned long long)arg1 ;
-(NSMutableArray *)detailsLabels;
-(void)updateWithTitle:(id)arg1 contents:(id)arg2 ;
-(void)setDetailsLabels:(NSMutableArray *)arg1 ;
-(id)init;
-(UILabel *)titleLabel;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
