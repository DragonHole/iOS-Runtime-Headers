/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(BOOL)arg1;
-(void)contentDidChange;

@required
-(void)setToRecipients:(id)arg1;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(id)bodyField;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
-(id)sendingEmailAddress;
-(id)sendingAccountProxy;
-(id)shouldCreateRichTextRepresentation;
-(id)accountProxyGenerator;
-(void)setSavedHeaders:(id)arg1;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(id)attachments;
-(id)subject;
-(void)setSubject:(id)arg1;

@end

