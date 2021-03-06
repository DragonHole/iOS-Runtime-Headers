/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	long long _port;

}
-(id)principalURL;
-(void)setUseSSL:(BOOL)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(id)getAppleIDSession;
-(BOOL)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)supportsReminders;
-(BOOL)shouldUseCalendarHomeSyncReport;
-(id)additionalHeaderValues;
-(void)setPort:(long long)arg1 ;
-(id)host;
-(long long)port;
@end

