/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol nw_listener_inbox_delegate
@required
-(void)handleInbound:(id)arg1 addProtocolInbox:(BOOL)arg2;
-(void)handleInboxFailed:(id)arg1 error:(id)arg2;
-(void)handleInboxCancelComplete:(id)arg1;

@end

