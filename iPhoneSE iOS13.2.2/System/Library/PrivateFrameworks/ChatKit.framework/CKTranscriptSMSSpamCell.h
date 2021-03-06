/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell {

	NSAttributedString* _attributedButtonText;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText;              //@synthesize attributedButtonText=_attributedButtonText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedButtonText;
@end

