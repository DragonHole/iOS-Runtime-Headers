/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ClientConnection;

@interface CADOperationGroup : NSObject {

	ClientConnection* _conn;

}

@property (nonatomic,readonly) ClientConnection * conn;              //@synthesize conn=_conn - In the implementation block
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(ClientConnection *)conn;
@end

