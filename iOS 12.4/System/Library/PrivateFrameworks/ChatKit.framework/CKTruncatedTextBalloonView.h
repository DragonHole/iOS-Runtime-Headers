/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKHyperlinkBalloonView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {

	BOOL _avoidTextLineBreaks;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;                 //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) BOOL avoidTextLineBreaks;              //@synthesize avoidTextLineBreaks=_avoidTextLineBreaks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(BOOL)avoidTextLineBreaks;
-(void)setAvoidTextLineBreaks:(BOOL)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
@end

