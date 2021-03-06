/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFLibraryMessage.h>

@class MFMailboxUid, MFMailMessageLibrary, MailAccount;

@interface MFFakeLibraryMessage : MFLibraryMessage {

	MFMailboxUid* _mailboxUid;
	MFMailMessageLibrary* _library;
	MailAccount* _account;

}
+(id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 account:(id)arg4 ;
+(id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 ;
-(id)initWithMailboxUid:(id)arg1 library:(id)arg2 account:(id)arg3 ;
-(id)mailbox;
-(id)library;
-(id)account;
@end

