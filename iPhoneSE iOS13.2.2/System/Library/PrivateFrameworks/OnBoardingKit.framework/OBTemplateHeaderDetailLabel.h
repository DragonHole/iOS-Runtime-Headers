/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBTemplateLabel.h>

@interface OBTemplateHeaderDetailLabel : OBTemplateLabel {

	NSRange _titleRange;
	NSRange _bodyRange;

}

@property (assign,nonatomic) NSRange titleRange;              //@synthesize titleRange=_titleRange - In the implementation block
@property (assign,nonatomic) NSRange bodyRange;               //@synthesize bodyRange=_bodyRange - In the implementation block
-(void)updateTextAlignment;
-(void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2 ;
-(void)setTitleRange:(NSRange)arg1 ;
-(void)setBodyRange:(NSRange)arg1 ;
-(NSRange)titleRange;
-(NSRange)bodyRange;
@end
