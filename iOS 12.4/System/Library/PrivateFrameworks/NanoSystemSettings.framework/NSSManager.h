/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NSSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3 ;
+(void)displayAlertFailedRemoteAirplaneMode;
+(void)displayAirplaneModeMirroringUserEducationAlert;
+(void)initialize;
-(void)enableAirplaneMode:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(void)rebootDevice;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)unsafe_invalidate;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getUsage:(/*^block*/id)arg1 ;
-(void)getAboutInfo:(/*^block*/id)arg1 ;
-(void)obliterateGizmoPreservingeSIM:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLegalDocuments:(/*^block*/id)arg1 ;
-(void)getLocalesInfo:(/*^block*/id)arg1 ;
-(void)purgeUsageBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)obliterateGizmo:(/*^block*/id)arg1 ;
-(void)getAccountsInfo:(/*^block*/id)arg1 ;
-(void)installProfile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfilesInfo:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getiCloudInfo:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(id)initWithQueue:(id)arg1 ;
-(id)protocol;
@end

