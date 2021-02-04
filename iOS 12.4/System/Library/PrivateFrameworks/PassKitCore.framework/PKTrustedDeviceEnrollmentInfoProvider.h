/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {

	PKXPCService* _remoteService;

}
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxy;
-(id)init;
@end
