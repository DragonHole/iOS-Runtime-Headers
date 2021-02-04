/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	long long _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (assign,nonatomic) long long serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
-(IMServiceImpl *)service;
-(void)setService:(IMServiceImpl *)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)_startListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(NSArray *)activeAccounts;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
-(void)dealloc;
-(id)logName;
@end
