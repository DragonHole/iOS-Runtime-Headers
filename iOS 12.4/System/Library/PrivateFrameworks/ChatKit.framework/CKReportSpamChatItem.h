/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem {

	NSAttributedString* _transcriptButtonText;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                          //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * internalPhishingWarning; 
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)isGroupChat;
-(NSAttributedString *)transcriptButtonText;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(BOOL)showReportSMSSpam;
-(NSAttributedString *)internalPhishingWarning;
-(BOOL)hasMultipleMessages;
-(id)transcriptTextForSpam:(BOOL)arg1 ;
-(Class)cellClass;
@end

