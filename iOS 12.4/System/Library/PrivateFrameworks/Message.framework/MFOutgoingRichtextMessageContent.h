/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {

	BOOL _textPartsAreHTML;
	MFPlainTextDocument* _plaintextAlternative;
	NSArray* _mixedContent;

}

@property (assign,nonatomic) BOOL textPartsAreHTML;                                   //@synthesize textPartsAreHTML=_textPartsAreHTML - In the implementation block
@property (nonatomic,retain) MFPlainTextDocument * plaintextAlternative;              //@synthesize plaintextAlternative=_plaintextAlternative - In the implementation block
@property (nonatomic,retain) NSArray * mixedContent;                                  //@synthesize mixedContent=_mixedContent - In the implementation block
-(void)setPlaintextAlternative:(MFPlainTextDocument *)arg1 ;
-(void)setMixedContent:(NSArray *)arg1 ;
-(void)setTextPartsAreHTML:(BOOL)arg1 ;
-(id)richtextContent;
-(MFPlainTextDocument *)plaintextAlternative;
-(NSArray *)mixedContent;
-(BOOL)textPartsAreHTML;
-(void)dealloc;
-(id)copy;
@end

