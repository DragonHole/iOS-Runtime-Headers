/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageDelivery.h>
#import <libobjc.A.dylib/MFMessageRewriterPlaceholderResolver.h>

@class NSString, MFPlaceholderMessageRewriter;

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery <MFMessageRewriterPlaceholderResolver> {

	NSString* _contextID;
	MFPlaceholderMessageRewriter* _rewriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMessage:(id)arg1 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
-(id)_attachmentsContextID;
@end

